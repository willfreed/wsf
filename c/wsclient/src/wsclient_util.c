/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "wsclient_util.h"
#include "wsclient_constants.h"
#include <axis2_http_client.h>
#include <axis2_http_transport.h>
#include <axis2_http_simple_response.h>

static char *content_type_array [] = 
{ 
	"text",
	"image",
	"audio",
	"video",
	"application",
};

axiom_node_t *
wsclient_payload (
    const axis2_env_t *env, 
    char *input_buffer)
{
    axiom_xml_reader_t *reader;
    axiom_stax_builder_t *builder;
    axiom_document_t *doc;
    axiom_node_t *node;
    char *input;
    input = input_buffer;

    if (input)
		reader = axiom_xml_reader_create_for_memory (env, input, strlen (input), NULL, AXIS2_XML_PARSER_TYPE_BUFFER);
    else
		return WSCLIENT_FAILURE;

    if (reader)
    {
		axiom_xml_reader_init ();
		builder = axiom_stax_builder_create (env, reader);
    }
    else 
		return WSCLIENT_FAILURE;

    if (builder)
    {
		doc  = AXIOM_STAX_BUILDER_GET_DOCUMENT (builder, env);
		if (doc)
			AXIOM_DOCUMENT_BUILD_ALL (doc, env);
		else
			return WSCLIENT_FAILURE;
		node = AXIOM_DOCUMENT_GET_ROOT_ELEMENT (doc, env);
    }
    else
    {
		AXIOM_XML_READER_FREE (reader, env);
		return WSCLIENT_FAILURE;
    }
    return node;
}

axis2_char_t *
wsclient_get_password (const axis2_env_t *env,
					   const axis2_char_t *username,
					   axis2_char_t *password_file_name)
{
	axis2_char_t *filename = NULL;
    axis2_char_t * password = NULL;
    FILE *file = NULL;

    if(password_file_name)
	{
        filename = password_file_name;
    }else
	{
		AXIS2_LOG_INFO(env->log, "Using the default password file location %s", filename);
    }
    
    file = fopen ( filename, "r" );
    if ( file != NULL )
    {
		axis2_char_t line [ 128 ]; 
		axis2_char_t ch = 0;
		axis2_char_t *res = NULL;
		axis2_char_t *un = NULL;
		axis2_char_t *pw = NULL;

		while ( fgets ( line, sizeof line, file ) != NULL ) 
		{
			res = AXIS2_STRSTR(line, ":");
			ch = res[0];
			res[0] = '\0';
			un = (axis2_char_t *) AXIS2_STRDUP(line, env);
			res[0] = ch;
			if(0 == AXIS2_STRCMP(un, username)){
				pw = (axis2_char_t *) AXIS2_STRDUP(&(res[1]), env);
				password = AXIS2_STRNDUP(pw, AXIS2_STRLEN(pw)-1, env);

				break;
			}
		}
		AXIS2_FREE(env->allocator, un);
		AXIS2_FREE(env->allocator, pw);
		fclose ( file );
    }else
    {
		AXIS2_LOG_INFO(env->log, "Cannot load the password file %s in the callback module", filename);
		perror ( filename ); 
    }
    return password;
}

axis2_status_t
wsclient_soap_out (const axis2_env_t *env,
				   axis2_svc_client_t *svc_client, int soap_out)
{
	axis2_op_client_t *op_client;
	axis2_msg_ctx_t *msg_ctx;
	axiom_soap_envelope_t *soap_envelope = NULL;
	axiom_xml_writer_t *writer;
	axiom_output_t *om_output = NULL;
	axis2_char_t *buffer;
	axis2_status_t status = 0;

	op_client = AXIS2_SVC_CLIENT_GET_OP_CLIENT(svc_client, env);
	if (op_client)
	{

		if (soap_out)
			msg_ctx = (axis2_msg_ctx_t *)
				AXIS2_OP_CLIENT_GET_MSG_CTX (op_client,
											 env, 
											 AXIS2_WSDL_MESSAGE_LABEL_IN);
		else
			msg_ctx = (axis2_msg_ctx_t *)
				AXIS2_OP_CLIENT_GET_MSG_CTX (op_client,
											 env, 
											 AXIS2_WSDL_MESSAGE_LABEL_OUT);

		if (msg_ctx)
			soap_envelope = AXIS2_MSG_CTX_GET_SOAP_ENVELOPE (msg_ctx,
															 env);
		else
			return AXIS2_FAILURE;

		writer = axiom_xml_writer_create_for_memory (env,
													 NULL,
													 AXIS2_TRUE,
													 0,
													 AXIS2_XML_PARSER_TYPE_BUFFER);

		if (writer)
			om_output = axiom_output_create(env, writer);
		else
			return AXIS2_FAILURE;

		if (soap_envelope && om_output)
			status =  AXIOM_SOAP_ENVELOPE_SERIALIZE(soap_envelope,
													env, 
													om_output, 
													0);
		else
			return AXIS2_FAILURE;

		if (status == AXIS2_SUCCESS)
		{
			buffer = (axis2_char_t *)
				AXIOM_XML_WRITER_GET_XML (writer,
										  env);
			if (buffer)
			{
				printf ("%s \n", buffer);
				AXIS2_FREE (env->allocator, buffer);
			}
		}
		else
			return AXIS2_FAILURE;

		AXIOM_OUTPUT_FREE (om_output, env);
	}
	return AXIS2_SUCCESS;
}

axis2_status_t
wsclient_set_attachment (const axis2_env_t *env,
						 axiom_node_t *node,
						 axis2_char_t *base_dir,
						 int is_mtom_enabled)
{
	axiom_node_t *child_node = NULL;
	axiom_element_t *element;
	if (!node || !env)
		return AXIS2_FAILURE;

	if (AXIOM_NODE_GET_NODE_TYPE (node, env) == AXIOM_ELEMENT)
	{
		axis2_char_t *local_name;
		axiom_namespace_t *ns;
		axis2_char_t *ns_uri;
		element = (axiom_element_t *) AXIOM_NODE_GET_DATA_ELEMENT (node, env);
		local_name = AXIOM_ELEMENT_GET_LOCALNAME (element, env);
		if (local_name)
		{
			if (!strcmp (local_name, "Include"))
			{
				ns = AXIOM_ELEMENT_GET_NAMESPACE(element, env, node);
				if (ns && (ns_uri = AXIOM_NAMESPACE_GET_URI (ns, env))
					&& (!strcmp (ns_uri, "http://www.w3.org/2004/08/xop/include")))
				{
					axis2_char_t *file_path;
					axiom_data_handler_t *data_handler;
					axiom_text_t *data_text;
					axiom_node_t *data_node;
					axiom_node_t *parent;
					axis2_uri_t *file_uri = NULL;
					axis2_uri_t *base_uri = NULL;
					axis2_uri_t *real_uri = NULL;
					axis2_char_t *real_path = NULL;

					parent = AXIOM_NODE_GET_PARENT (node, env);
					AXIOM_NODE_DETACH (node, env);
					file_path = AXIOM_ELEMENT_GET_ATTRIBUTE_VALUE_BY_NAME (element, env, "href");
					file_uri = axis2_uri_parse_string (env, file_path);

					if (base_dir)
						base_uri = axis2_uri_parse_string (env, base_dir);
					else 
						return AXIS2_FAILURE;


					if (base_uri)
						real_uri = axis2_uri_parse_relative (env, base_uri, file_path);
					else
						return AXIS2_FAILURE;

					if (real_uri)
						real_path = AXIS2_URI_TO_STRING (real_uri, env, 1);
					else 
						return AXIS2_FAILURE;


					if (real_path)
						data_handler = axiom_data_handler_create (env, real_path, "image/jpeg");
					else
						return AXIS2_FAILURE;

					if (data_handler)
						data_text = axiom_text_create_with_data_handler (env, parent, data_handler, &data_node);
					else
						return AXIS2_FAILURE;

					if (data_text)
					{
						if (!is_mtom_enabled)
							AXIOM_TEXT_SET_OPTIMIZE (data_text, env, AXIS2_FALSE);
					}
				}
			}
		}

		child_node = AXIOM_NODE_GET_FIRST_CHILD (node, env);
		while (child_node)
		{
			wsclient_set_attachment (env, child_node, base_dir, is_mtom_enabled); 
			child_node = AXIOM_NODE_GET_NEXT_SIBLING (child_node, env);
		}
	}
	else
		return AXIS2_FAILURE;

	return AXIS2_SUCCESS;
}


axis2_status_t
wsclient_get_attachment (const axis2_env_t *env,
						 axiom_node_t *node,
						 axis2_char_t *base_dir,
						 int is_mtom_enabled)
{
	axiom_node_t *child_node = NULL;
	axiom_element_t *element;
	if (!node || !env)
		return AXIS2_FAILURE;

	if (AXIOM_NODE_GET_NODE_TYPE (node, env) == AXIOM_ELEMENT)
	{
		axis2_char_t *local_name;
		axiom_namespace_t *ns;
		axis2_char_t *ns_uri;
		element = (axiom_element_t *) AXIOM_NODE_GET_DATA_ELEMENT (node, env);
		local_name = AXIOM_ELEMENT_GET_LOCALNAME (element, env);
		if (local_name)
		{
			if (!strcmp (local_name, "Include"))
			{
				ns = AXIOM_ELEMENT_GET_NAMESPACE(element, env, node);
				if (ns && (ns_uri = AXIOM_NAMESPACE_GET_URI (ns, env))
					&& (!strcmp (ns_uri, "http://www.w3.org/2004/08/xop/include")))
				{
					axiom_node_t *text_node;
					axiom_text_t *text;
					axiom_data_handler_t *data_handler;
					axis2_char_t *write_file = NULL;
					axis2_char_t *pwd;
					axis2_char_t *relative;
					axis2_qname_t *attribute_qname;
					axiom_attribute_t *href = NULL;
					axis2_char_t *cid_value;

					pwd = AXIS2_GETENV ("PWD");
					relative = wsclient_get_relative_path (env, pwd, base_dir);

					attribute_qname = axis2_qname_create (env, "href", NULL, NULL);

					if (attribute_qname)
						href = AXIOM_ELEMENT_GET_ATTRIBUTE (element, env, attribute_qname);
					else 
						return AXIS2_FAILURE;

					if (href)
					{
						cid_value = AXIOM_ATTRIBUTE_GET_VALUE (href, env);
						cid_value = cid_value + 4;
					}
					else
						return AXIS2_FAILURE;

					AXIOM_ATTRIBUTE_SET_VALUE (href, env, relative);

					text_node = AXIOM_NODE_GET_FIRST_CHILD (node, env);
					if (text_node && (AXIOM_NODE_GET_NODE_TYPE (text_node, env) == AXIOM_TEXT))
					{
						text = (axiom_text_t *) AXIOM_NODE_GET_DATA_ELEMENT (text_node, env);
						data_handler = AXIOM_TEXT_GET_DATA_HANDLER(text, env);
                        if (data_handler && text)
                        {
							if (base_dir)
							{
								int len = 0;
								len = strlen (base_dir);
								if (base_dir [len - 1] != '/')
									strcat (base_dir, "/");
								if (cid_value)
									write_file = strcat (base_dir, cid_value);
								else 
									return AXIS2_FAILURE;
							}

							if (write_file)
								AXIOM_DATA_HANDLER_SET_FILE_NAME(data_handler, 
																 env, 
																 write_file);
                            AXIOM_DATA_HANDLER_WRITE_TO(data_handler, env);
						}
					}
				}
			}
		}

		child_node = AXIOM_NODE_GET_FIRST_CHILD (node, env);
		while (child_node)
		{
			wsclient_get_attachment (env, 
									 child_node, 
									 base_dir, 
									 is_mtom_enabled); 
			child_node = AXIOM_NODE_GET_NEXT_SIBLING (child_node, env);
		}
	}
	else
		return AXIS2_FAILURE;
	return AXIS2_SUCCESS;
}

axis2_char_t *
wsclient_get_relative_path (const axis2_env_t *env,
							axis2_char_t *pwd,
							axis2_char_t *base)
{

	axis2_char_t *relative;
	if (!strcmp (pwd, base))
		relative = ".";
	else
	{
		int kk = 0;
		axis2_char_t  *guest;
		int ii = 0;
		int jj = 0;
		while (pwd [ii] == base [ii])
		{
			if (pwd [ii] == '/')
				jj = ii;
			ii++;
		}
		guest = pwd + jj;
		for (ii = 0; ii < strlen (guest); ii++)
		{
			if (guest [ii] == '/')
				kk ++;
		}
		relative = (axis2_char_t *) AXIS2_MALLOC (
			env->allocator, 
			((3 * kk)*sizeof(axis2_char_t) + strlen (base)));

		memset (relative, 0, strlen (relative));
		relative = relative + 1;
		for (ii = 0; ii < kk-1; ii++)
		{
			strcat (relative, "../");
		}

		if (base[jj] == '/')
			strcat (relative, (base +jj+1));
		else
			strcat (relative, (base +jj));
	}
	return relative;
}



axis2_char_t *
wsclient_content_type (const axis2_env_t *env,
					   axis2_char_t *content_type)
{
	axis2_char_t *valid_type;
	int i = 0;
	for (i = 0; i < array_sizeof (content_type_array); i++)
	{
		if (!strncmp (content_type_array [i], content_type, 
					  (strchr (content_type, '/') - content_type)))
			break;
	}

	if (i == array_sizeof (content_type_array))
	{
		if ((content_type [0] == 'x' ||
			 content_type [0] == 'X') && content_type [1] == '-')
			valid_type = content_type;
		else
			valid_type = "application/octet-stream";		
	}
	else
		valid_type = content_type;

	return valid_type;
}



axis2_status_t 
wsclient_output_http_headers (const axis2_env_t *env,
							  axis2_svc_client_t *svc_client,
							  axis2_char_t *file_name)
{
	axis2_op_client_t *op_client;
	axis2_msg_ctx_t *msg_ctx;
	axis2_http_client_t *client = NULL;
	axis2_property_t *client_property;
	axis2_http_simple_response_t *response = NULL;
	axis2_array_list_t *list = NULL;
	axis2_http_header_t *header;
	FILE *file;
	int i;

	op_client = AXIS2_SVC_CLIENT_GET_OP_CLIENT(svc_client, env);
	if (op_client)
	{
		msg_ctx = (axis2_msg_ctx_t *)
			AXIS2_OP_CLIENT_GET_MSG_CTX (op_client,
										 env, 
										 AXIS2_WSDL_MESSAGE_LABEL_OUT);

		client_property = (axis2_property_t *)AXIS2_MSG_CTX_GET_PROPERTY(
			msg_ctx, env,
			AXIS2_HTTP_CLIENT, 
			AXIS2_TRUE);

		if (client_property)
			client = (axis2_http_client_t *)AXIS2_PROPERTY_GET_VALUE (
				client_property, 
				env);
		else
			return AXIS2_FAILURE;

		if (client)
			response = AXIS2_HTTP_CLIENT_GET_RESPONSE (client, env);
		else
			return AXIS2_FAILURE;

		if (response)
			list = AXIS2_HTTP_SIMPLE_RESPONSE_GET_HEADERS (response, env);
		else 
			return AXIS2_FAILURE;

		if (list)
		{
			if (!AXIS2_ARRAY_LIST_IS_EMPTY (list, env))
			{
				if (file_name)
				{
					file = fopen (file_name, "w");
					if (!file)
						return AXIS2_FAILURE;
				}
				else
					file = stdout;

				for (i = 0; i < AXIS2_ARRAY_LIST_SIZE (list, env); i++)
				{
					header = (axis2_http_header_t *)AXIS2_ARRAY_LIST_GET (list, env, i);
					fputs (AXIS2_HTTP_HEADER_TO_EXTERNAL_FORM (header, env), file);
				}
				fclose (file);
			}
		}
		else
			return AXIS2_FAILURE;
	}
	return AXIS2_SUCCESS;
}

axis2_status_t
wsclient_set_https_transport_parameretes (const axis2_env_t *env,
										  axis2_svc_client_t *svc_client)
{
	axis2_conf_ctx_t *conf_ctx;
	axis2_svc_ctx_t *svc_ctx;
	axis2_conf_t *conf;
	axis2_qname_t *qname;
	axis2_transport_out_desc_t *transport_out;
	axis2_transport_sender_t *transport_sender;
	axis2_param_t *param;

	if (svc_client)
		svc_ctx = AXIS2_SVC_CLIENT_GET_SVC_CTX (svc_client, env);
	else 
		return AXIS2_FAILURE;

	if (svc_ctx)
		conf_ctx = AXIS2_SVC_CTX_GET_CONF_CTX(svc_ctx, env);
	else 
		return AXIS2_FAILURE;

	if (conf_ctx)
		conf = AXIS2_CONF_CTX_GET_CONF(conf_ctx, env);
	else 
		return AXIS2_FAILURE;


	qname = axis2_qname_create (env, "https", NULL, NULL);
	if (qname)
		transport_out = axis2_transport_out_desc_create_with_qname (env, qname);
	else 
		return AXIS2_FAILURE;

	transport_sender = (axis2_transport_sender_t *)axis2_http_transport_sender_create (env);

	param = axis2_param_create (env, NULL, NULL);
	if (param)
	{
		AXIS2_PARAM_SET_NAME(param, env, axis2_strdup (AXIS2_HTTP_PROTOCOL_VERSION, env));
		AXIS2_PARAM_SET_VALUE(param, env, axis2_strdup (AXIS2_HTTP_HEADER_PROTOCOL_11, env));
		AXIS2_PARAM_SET_LOCKED(param, env, AXIS2_FALSE);
	}
	else 
		return AXIS2_FAILURE;

	if (transport_out && conf)
	{
		AXIS2_PARAM_CONTAINER_ADD_PARAM(transport_out->param_container, env, param);
		AXIS2_TRANSPORT_OUT_DESC_SET_SENDER(transport_out, env, transport_sender);
		AXIS2_CONF_ADD_TRANSPORT_OUT (conf, env, transport_out);
	}
	else
		return AXIS2_FAILURE;

	return AXIS2_SUCCESS;
}
