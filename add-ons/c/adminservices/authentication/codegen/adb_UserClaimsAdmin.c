/*
* Copyright 2009-2010 WSO2, Inc. http://wso2.com
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/


        /**
         * adb_UserClaimsAdmin.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_UserClaimsAdmin.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = UserClaimsAdmin
                 * Namespace URI = http://core.user.carbon.wso2.org/xsd
                 * Namespace Prefix = ns2
                 */
           


        struct adb_UserClaimsAdmin
        {
            axis2_char_t *property_Type;

            axutil_array_list_t* property_allClaimUris;

                
                axis2_bool_t is_valid_allClaimUris;
            axutil_array_list_t* property_allClaims;

                
                axis2_bool_t is_valid_allClaims;
            axutil_array_list_t* property_allRequiredClaims;

                
                axis2_bool_t is_valid_allRequiredClaims;
            axutil_array_list_t* property_allSupportClaimsByDefault;

                
                axis2_bool_t is_valid_allSupportClaimsByDefault;
            
        };


       /************************* Private Function prototypes ********************************/
        


       /************************* Function Implmentations ********************************/
        adb_UserClaimsAdmin_t* AXIS2_CALL
        adb_UserClaimsAdmin_create(
            const axutil_env_t *env)
        {
            adb_UserClaimsAdmin_t *_UserClaimsAdmin = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _UserClaimsAdmin = (adb_UserClaimsAdmin_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_UserClaimsAdmin_t));

            if(NULL == _UserClaimsAdmin)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_UserClaimsAdmin, 0, sizeof(adb_UserClaimsAdmin_t));

            _UserClaimsAdmin->property_Type = axutil_strdup(env, "adb_UserClaimsAdmin");
            _UserClaimsAdmin->property_allClaimUris  = NULL;
                  _UserClaimsAdmin->is_valid_allClaimUris  = AXIS2_FALSE;
            _UserClaimsAdmin->property_allClaims  = NULL;
                  _UserClaimsAdmin->is_valid_allClaims  = AXIS2_FALSE;
            _UserClaimsAdmin->property_allRequiredClaims  = NULL;
                  _UserClaimsAdmin->is_valid_allRequiredClaims  = AXIS2_FALSE;
            _UserClaimsAdmin->property_allSupportClaimsByDefault  = NULL;
                  _UserClaimsAdmin->is_valid_allSupportClaimsByDefault  = AXIS2_FALSE;
            

            return _UserClaimsAdmin;
        }

        adb_UserClaimsAdmin_t* AXIS2_CALL
        adb_UserClaimsAdmin_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _allClaimUris,
                axutil_array_list_t* _allClaims,
                axutil_array_list_t* _allRequiredClaims,
                axutil_array_list_t* _allSupportClaimsByDefault)
        {
            adb_UserClaimsAdmin_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_UserClaimsAdmin_create(env);

            
              status = adb_UserClaimsAdmin_set_allClaimUris(
                                     adb_obj,
                                     env,
                                     _allClaimUris);
              if(status == AXIS2_FAILURE) {
                  adb_UserClaimsAdmin_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_UserClaimsAdmin_set_allClaims(
                                     adb_obj,
                                     env,
                                     _allClaims);
              if(status == AXIS2_FAILURE) {
                  adb_UserClaimsAdmin_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_UserClaimsAdmin_set_allRequiredClaims(
                                     adb_obj,
                                     env,
                                     _allRequiredClaims);
              if(status == AXIS2_FAILURE) {
                  adb_UserClaimsAdmin_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_UserClaimsAdmin_set_allSupportClaimsByDefault(
                                     adb_obj,
                                     env,
                                     _allSupportClaimsByDefault);
              if(status == AXIS2_FAILURE) {
                  adb_UserClaimsAdmin_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                adb_UserClaimsAdmin_free_popping_value(
                        adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _UserClaimsAdmin->property_allClaimUris;

                    _UserClaimsAdmin->property_allClaimUris = (axutil_array_list_t*)NULL;
                    adb_UserClaimsAdmin_free(_UserClaimsAdmin, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_UserClaimsAdmin_free(
                adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_type_t*) _UserClaimsAdmin,
                env,
                "adb_UserClaimsAdmin");
            
        }

        axis2_status_t AXIS2_CALL
        adb_UserClaimsAdmin_free_obj(
                adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);

            if (_UserClaimsAdmin->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _UserClaimsAdmin->property_Type);
            }

            adb_UserClaimsAdmin_reset_allClaimUris(_UserClaimsAdmin, env);
            adb_UserClaimsAdmin_reset_allClaims(_UserClaimsAdmin, env);
            adb_UserClaimsAdmin_reset_allRequiredClaims(_UserClaimsAdmin, env);
            adb_UserClaimsAdmin_reset_allSupportClaimsByDefault(_UserClaimsAdmin, env);
            

            if(_UserClaimsAdmin)
            {
                AXIS2_FREE(env->allocator, _UserClaimsAdmin);
                _UserClaimsAdmin = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_UserClaimsAdmin_deserialize(
                adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_type_t*) _UserClaimsAdmin,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_UserClaimsAdmin");
            
        }

        axis2_status_t AXIS2_CALL
        adb_UserClaimsAdmin_deserialize_obj(
                adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
              void *element = NULL;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
               int i = 0;
               axutil_array_list_t *arr_list = NULL;
            
               int sequence_broken = 0;
               axiom_node_t *tmp_node = NULL;
            
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for UserClaimsAdmin : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                    /*
                     * building allClaimUris array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building allClaimUris element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "allClaimUris", "http://core.user.carbon.wso2.org/xsd", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = first_node; !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = axiom_element_get_text(current_element, env, current_node);
                                          if(text_value != NULL)
                                          {
                                              axutil_array_list_add_at(arr_list, env, i, axutil_strdup(env, text_value));
                                          }
                                          
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for allClaimUris ");
                                         if(element_qname)
                                         {
                                            axutil_qname_free(element_qname, env);
                                         }
                                         if(arr_list)
                                         {
                                            axutil_array_list_free(arr_list, env);
                                         }
                                         return AXIS2_FAILURE;
                                     }

                                     i ++;
                                    current_node = axiom_node_get_next_sibling(current_node, env);
                                  }
                                  else
                                  {
                                      is_early_node_valid = AXIS2_FALSE;
                                      sequence_broken = 1;
                                  }
                                  
                               }

                               
                                   if (i < 0)
                                   {
                                     /* found element out of order */
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "allClaimUris (@minOccurs = '0') only have %d elements", i);
                                     if(element_qname)
                                     {
                                        axutil_qname_free(element_qname, env);
                                     }
                                     if(arr_list)
                                     {
                                        axutil_array_list_free(arr_list, env);
                                     }
                                     return AXIS2_FAILURE;
                                   }
                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_UserClaimsAdmin_set_allClaimUris(_UserClaimsAdmin, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building allClaims array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building allClaims element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "allClaims", "http://core.user.carbon.wso2.org/xsd", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = (is_early_node_valid?axiom_node_get_next_sibling(current_node, env):current_node); !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if (adb_Claim_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_Claim");
                                          
                                          status =  adb_Claim_deserialize((adb_Claim_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element allClaims ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for allClaims ");
                                         if(element_qname)
                                         {
                                            axutil_qname_free(element_qname, env);
                                         }
                                         if(arr_list)
                                         {
                                            axutil_array_list_free(arr_list, env);
                                         }
                                         return AXIS2_FAILURE;
                                     }

                                     i ++;
                                    current_node = axiom_node_get_next_sibling(current_node, env);
                                  }
                                  else
                                  {
                                      is_early_node_valid = AXIS2_FALSE;
                                      sequence_broken = 1;
                                  }
                                  
                               }

                               
                                   if (i < 0)
                                   {
                                     /* found element out of order */
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "allClaims (@minOccurs = '0') only have %d elements", i);
                                     if(element_qname)
                                     {
                                        axutil_qname_free(element_qname, env);
                                     }
                                     if(arr_list)
                                     {
                                        axutil_array_list_free(arr_list, env);
                                     }
                                     return AXIS2_FAILURE;
                                   }
                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_UserClaimsAdmin_set_allClaims(_UserClaimsAdmin, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building allRequiredClaims array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building allRequiredClaims element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "allRequiredClaims", "http://core.user.carbon.wso2.org/xsd", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = (is_early_node_valid?axiom_node_get_next_sibling(current_node, env):current_node); !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if (adb_Claim_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_Claim");
                                          
                                          status =  adb_Claim_deserialize((adb_Claim_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element allRequiredClaims ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for allRequiredClaims ");
                                         if(element_qname)
                                         {
                                            axutil_qname_free(element_qname, env);
                                         }
                                         if(arr_list)
                                         {
                                            axutil_array_list_free(arr_list, env);
                                         }
                                         return AXIS2_FAILURE;
                                     }

                                     i ++;
                                    current_node = axiom_node_get_next_sibling(current_node, env);
                                  }
                                  else
                                  {
                                      is_early_node_valid = AXIS2_FALSE;
                                      sequence_broken = 1;
                                  }
                                  
                               }

                               
                                   if (i < 0)
                                   {
                                     /* found element out of order */
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "allRequiredClaims (@minOccurs = '0') only have %d elements", i);
                                     if(element_qname)
                                     {
                                        axutil_qname_free(element_qname, env);
                                     }
                                     if(arr_list)
                                     {
                                        axutil_array_list_free(arr_list, env);
                                     }
                                     return AXIS2_FAILURE;
                                   }
                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_UserClaimsAdmin_set_allRequiredClaims(_UserClaimsAdmin, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building allSupportClaimsByDefault array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building allSupportClaimsByDefault element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "allSupportClaimsByDefault", "http://core.user.carbon.wso2.org/xsd", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = (is_early_node_valid?axiom_node_get_next_sibling(current_node, env):current_node); !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if (adb_Claim_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_Claim");
                                          
                                          status =  adb_Claim_deserialize((adb_Claim_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element allSupportClaimsByDefault ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for allSupportClaimsByDefault ");
                                         if(element_qname)
                                         {
                                            axutil_qname_free(element_qname, env);
                                         }
                                         if(arr_list)
                                         {
                                            axutil_array_list_free(arr_list, env);
                                         }
                                         return AXIS2_FAILURE;
                                     }

                                     i ++;
                                    current_node = axiom_node_get_next_sibling(current_node, env);
                                  }
                                  else
                                  {
                                      is_early_node_valid = AXIS2_FALSE;
                                      sequence_broken = 1;
                                  }
                                  
                               }

                               
                                   if (i < 0)
                                   {
                                     /* found element out of order */
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "allSupportClaimsByDefault (@minOccurs = '0') only have %d elements", i);
                                     if(element_qname)
                                     {
                                        axutil_qname_free(element_qname, env);
                                     }
                                     if(arr_list)
                                     {
                                        axutil_array_list_free(arr_list, env);
                                     }
                                     return AXIS2_FAILURE;
                                   }
                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_UserClaimsAdmin_set_allSupportClaimsByDefault(_UserClaimsAdmin, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_UserClaimsAdmin_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_UserClaimsAdmin_declare_parent_namespaces(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_UserClaimsAdmin_serialize(
                adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_UserClaimsAdmin == NULL)
            {
                return adb_UserClaimsAdmin_serialize_obj(
                    _UserClaimsAdmin, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_type_t*) _UserClaimsAdmin, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_UserClaimsAdmin");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_UserClaimsAdmin_serialize_obj(
                adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
             axis2_char_t *string_to_stream;
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
         axis2_char_t* xsi_prefix = NULL;
         
         axis2_char_t* type_attrib = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
               int i = 0;
               int count = 0;
               void *element = NULL;
             
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_3[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_4[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
              
 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"UserClaimsAdmin\"", NULL);
              axutil_stream_write(stream, env, type_attrib, axutil_strlen(type_attrib));

              AXIS2_FREE(env->allocator, type_attrib);
                
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
            else {
              /* if the parent tag closed we would be able to declare the type directly on the parent element */ 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
            }
            xsi_ns = axiom_namespace_create (env,
                                 "http://core.user.carbon.wso2.org/xsd",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "UserClaimsAdmin", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://core.user.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://core.user.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://core.user.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_UserClaimsAdmin->is_valid_allClaimUris)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("allClaimUris"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("allClaimUris")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing allClaimUris array
                      */
                     if (_UserClaimsAdmin->property_allClaimUris != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%sallClaimUris>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sallClaimUris>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_UserClaimsAdmin->property_allClaimUris, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_UserClaimsAdmin->property_allClaimUris, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing allClaimUris element
                      */

                    
                    
                           text_value_1 = (axis2_char_t*)element;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_1_temp = axutil_xml_quote_string(env, text_value_1, AXIS2_TRUE);
                           if (text_value_1_temp)
                           {
                               axutil_stream_write(stream, env, text_value_1_temp, axutil_strlen(text_value_1_temp));
                               AXIS2_FREE(env->allocator, text_value_1_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://core.user.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://core.user.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://core.user.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_UserClaimsAdmin->is_valid_allClaims)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("allClaims"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("allClaims")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing allClaims array
                      */
                     if (_UserClaimsAdmin->property_allClaims != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%sallClaims",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sallClaims>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_UserClaimsAdmin->property_allClaims, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_UserClaimsAdmin->property_allClaims, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing allClaims element
                      */

                    
                     
                            if(!adb_Claim_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_Claim_serialize((adb_Claim_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_Claim_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_Claim_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://core.user.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://core.user.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://core.user.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_UserClaimsAdmin->is_valid_allRequiredClaims)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("allRequiredClaims"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("allRequiredClaims")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing allRequiredClaims array
                      */
                     if (_UserClaimsAdmin->property_allRequiredClaims != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%sallRequiredClaims",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sallRequiredClaims>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_UserClaimsAdmin->property_allRequiredClaims, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_UserClaimsAdmin->property_allRequiredClaims, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing allRequiredClaims element
                      */

                    
                     
                            if(!adb_Claim_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_Claim_serialize((adb_Claim_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_Claim_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_Claim_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://core.user.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://core.user.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://core.user.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_UserClaimsAdmin->is_valid_allSupportClaimsByDefault)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("allSupportClaimsByDefault"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("allSupportClaimsByDefault")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing allSupportClaimsByDefault array
                      */
                     if (_UserClaimsAdmin->property_allSupportClaimsByDefault != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%sallSupportClaimsByDefault",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sallSupportClaimsByDefault>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_UserClaimsAdmin->property_allSupportClaimsByDefault, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_UserClaimsAdmin->property_allSupportClaimsByDefault, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing allSupportClaimsByDefault element
                      */

                    
                     
                            if(!adb_Claim_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_Claim_serialize((adb_Claim_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_Claim_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_Claim_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for allClaimUris by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            adb_UserClaimsAdmin_get_property1(
                adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                const axutil_env_t *env)
            {
                return adb_UserClaimsAdmin_get_allClaimUris(_UserClaimsAdmin,
                                             env);
            }

            /**
             * getter for allClaimUris.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_UserClaimsAdmin_get_allClaimUris(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, NULL);
                  

                return _UserClaimsAdmin->property_allClaimUris;
             }

            /**
             * setter for allClaimUris
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_set_allClaimUris(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_allClaimUris)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);
                
                if(_UserClaimsAdmin->is_valid_allClaimUris &&
                        arg_allClaimUris == _UserClaimsAdmin->property_allClaimUris)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_allClaimUris, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "allClaimUris has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_allClaimUris, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_UserClaimsAdmin_reset_allClaimUris(_UserClaimsAdmin, env);

                
                if(NULL == arg_allClaimUris)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _UserClaimsAdmin->property_allClaimUris = arg_allClaimUris;
                        if(non_nil_exists)
                        {
                            _UserClaimsAdmin->is_valid_allClaimUris = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of allClaimUris.
             */
            axis2_char_t* AXIS2_CALL
            adb_UserClaimsAdmin_get_allClaimUris_at(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env, int i)
            {
                axis2_char_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, NULL);
                  

                if(_UserClaimsAdmin->property_allClaimUris == NULL)
                {
                    return (axis2_char_t*)0;
                }
                ret_val = (axis2_char_t*)axutil_array_list_get(_UserClaimsAdmin->property_allClaimUris, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of allClaimUris.
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_set_allClaimUris_at(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env, int i,
                    const axis2_char_t* arg_allClaimUris)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);
                
                if( _UserClaimsAdmin->is_valid_allClaimUris &&
                    _UserClaimsAdmin->property_allClaimUris &&
                
                    arg_allClaimUris == (axis2_char_t*)axutil_array_list_get(_UserClaimsAdmin->property_allClaimUris, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_allClaimUris)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_UserClaimsAdmin->property_allClaimUris != NULL)
                        {
                            size = axutil_array_list_size(_UserClaimsAdmin->property_allClaimUris, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_UserClaimsAdmin->property_allClaimUris, env, i))
                                {
                                    non_nil_count ++;
                                    non_nil_exists = AXIS2_TRUE;
                                    if(non_nil_count >= 0)
                                    {
                                        break;
                                    }
                                }
                            }

                        
                        }
                    }
                  

                if(_UserClaimsAdmin->property_allClaimUris == NULL)
                {
                    _UserClaimsAdmin->property_allClaimUris = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_UserClaimsAdmin->property_allClaimUris, env, i);
                if(NULL != element)
                {
                  
                  
                  
                       /* This is an unknown type or a primitive. Please free this manually*/
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _UserClaimsAdmin->is_valid_allClaimUris = AXIS2_FALSE;
                        axutil_array_list_set(_UserClaimsAdmin->property_allClaimUris , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_UserClaimsAdmin->property_allClaimUris , env, i, axutil_strdup(env, arg_allClaimUris));
                  _UserClaimsAdmin->is_valid_allClaimUris = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to allClaimUris.
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_add_allClaimUris(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env,
                    const axis2_char_t* arg_allClaimUris)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);

                
                    if(NULL == arg_allClaimUris)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_UserClaimsAdmin->property_allClaimUris == NULL)
                {
                    _UserClaimsAdmin->property_allClaimUris = axutil_array_list_create(env, 10);
                }
                if(_UserClaimsAdmin->property_allClaimUris == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for allClaimUris");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_UserClaimsAdmin->property_allClaimUris , env, axutil_strdup(env, arg_allClaimUris));
                  _UserClaimsAdmin->is_valid_allClaimUris = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the allClaimUris array.
             */
            int AXIS2_CALL
            adb_UserClaimsAdmin_sizeof_allClaimUris(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, -1);
                if(_UserClaimsAdmin->property_allClaimUris == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_UserClaimsAdmin->property_allClaimUris, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_remove_allClaimUris_at(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env, int i)
            {
                return adb_UserClaimsAdmin_set_allClaimUris_nil_at(_UserClaimsAdmin, env, i);
            }

            

           /**
            * resetter for allClaimUris
            */
           axis2_status_t AXIS2_CALL
           adb_UserClaimsAdmin_reset_allClaimUris(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);
               

               
                  if (_UserClaimsAdmin->property_allClaimUris != NULL)
                  {
                      count = axutil_array_list_size(_UserClaimsAdmin->property_allClaimUris, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_UserClaimsAdmin->property_allClaimUris, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, (axis2_char_t*)element);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_UserClaimsAdmin->property_allClaimUris, env);
                  }
                _UserClaimsAdmin->is_valid_allClaimUris = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether allClaimUris is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_UserClaimsAdmin_is_allClaimUris_nil(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_TRUE);
               
               return !_UserClaimsAdmin->is_valid_allClaimUris;
           }

           /**
            * Set allClaimUris to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_UserClaimsAdmin_set_allClaimUris_nil(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env)
           {
               return adb_UserClaimsAdmin_reset_allClaimUris(_UserClaimsAdmin, env);
           }

           
           /**
            * Check whether allClaimUris is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_UserClaimsAdmin_is_allClaimUris_nil_at(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_TRUE);
               
               return (_UserClaimsAdmin->is_valid_allClaimUris == AXIS2_FALSE ||
                        NULL == _UserClaimsAdmin->property_allClaimUris || 
                        NULL == axutil_array_list_get(_UserClaimsAdmin->property_allClaimUris, env, i));
           }

           /**
            * Set allClaimUris to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_UserClaimsAdmin_set_allClaimUris_nil_at(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);

                if(_UserClaimsAdmin->property_allClaimUris == NULL ||
                            _UserClaimsAdmin->is_valid_allClaimUris == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_UserClaimsAdmin->property_allClaimUris, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_UserClaimsAdmin->property_allClaimUris, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 0)
                            {
                                break;
                            }
                        }
                    }
                }
                

                if( k < 0)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of allClaimUris is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_UserClaimsAdmin->property_allClaimUris == NULL)
                {
                    _UserClaimsAdmin->is_valid_allClaimUris = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_UserClaimsAdmin->property_allClaimUris, env, i);
                if(NULL != element)
                {
                  
                  
                  
                       /* This is an unknown type or a primitive. Please free this manually*/
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _UserClaimsAdmin->is_valid_allClaimUris = AXIS2_FALSE;
                        axutil_array_list_set(_UserClaimsAdmin->property_allClaimUris , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_UserClaimsAdmin->property_allClaimUris , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for allClaims by  Property Number 2
             */
            axutil_array_list_t* AXIS2_CALL
            adb_UserClaimsAdmin_get_property2(
                adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                const axutil_env_t *env)
            {
                return adb_UserClaimsAdmin_get_allClaims(_UserClaimsAdmin,
                                             env);
            }

            /**
             * getter for allClaims.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_UserClaimsAdmin_get_allClaims(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, NULL);
                  

                return _UserClaimsAdmin->property_allClaims;
             }

            /**
             * setter for allClaims
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_set_allClaims(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_allClaims)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);
                
                if(_UserClaimsAdmin->is_valid_allClaims &&
                        arg_allClaims == _UserClaimsAdmin->property_allClaims)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_allClaims, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "allClaims has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_allClaims, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_UserClaimsAdmin_reset_allClaims(_UserClaimsAdmin, env);

                
                if(NULL == arg_allClaims)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _UserClaimsAdmin->property_allClaims = arg_allClaims;
                        if(non_nil_exists)
                        {
                            _UserClaimsAdmin->is_valid_allClaims = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of allClaims.
             */
            adb_Claim_t* AXIS2_CALL
            adb_UserClaimsAdmin_get_allClaims_at(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env, int i)
            {
                adb_Claim_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, NULL);
                  

                if(_UserClaimsAdmin->property_allClaims == NULL)
                {
                    return (adb_Claim_t*)0;
                }
                ret_val = (adb_Claim_t*)axutil_array_list_get(_UserClaimsAdmin->property_allClaims, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of allClaims.
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_set_allClaims_at(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env, int i,
                    adb_Claim_t* arg_allClaims)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);
                
                if( _UserClaimsAdmin->is_valid_allClaims &&
                    _UserClaimsAdmin->property_allClaims &&
                
                    arg_allClaims == (adb_Claim_t*)axutil_array_list_get(_UserClaimsAdmin->property_allClaims, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_allClaims)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_UserClaimsAdmin->property_allClaims != NULL)
                        {
                            size = axutil_array_list_size(_UserClaimsAdmin->property_allClaims, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_UserClaimsAdmin->property_allClaims, env, i))
                                {
                                    non_nil_count ++;
                                    non_nil_exists = AXIS2_TRUE;
                                    if(non_nil_count >= 0)
                                    {
                                        break;
                                    }
                                }
                            }

                        
                        }
                    }
                  

                if(_UserClaimsAdmin->property_allClaims == NULL)
                {
                    _UserClaimsAdmin->property_allClaims = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_UserClaimsAdmin->property_allClaims, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_Claim_free((adb_Claim_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _UserClaimsAdmin->is_valid_allClaims = AXIS2_FALSE;
                        axutil_array_list_set(_UserClaimsAdmin->property_allClaims , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_UserClaimsAdmin->property_allClaims , env, i, arg_allClaims);
                  _UserClaimsAdmin->is_valid_allClaims = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to allClaims.
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_add_allClaims(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env,
                    adb_Claim_t* arg_allClaims)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);

                
                    if(NULL == arg_allClaims)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_UserClaimsAdmin->property_allClaims == NULL)
                {
                    _UserClaimsAdmin->property_allClaims = axutil_array_list_create(env, 10);
                }
                if(_UserClaimsAdmin->property_allClaims == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for allClaims");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_UserClaimsAdmin->property_allClaims , env, arg_allClaims);
                  _UserClaimsAdmin->is_valid_allClaims = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the allClaims array.
             */
            int AXIS2_CALL
            adb_UserClaimsAdmin_sizeof_allClaims(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, -1);
                if(_UserClaimsAdmin->property_allClaims == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_UserClaimsAdmin->property_allClaims, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_remove_allClaims_at(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env, int i)
            {
                return adb_UserClaimsAdmin_set_allClaims_nil_at(_UserClaimsAdmin, env, i);
            }

            

           /**
            * resetter for allClaims
            */
           axis2_status_t AXIS2_CALL
           adb_UserClaimsAdmin_reset_allClaims(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);
               

               
                  if (_UserClaimsAdmin->property_allClaims != NULL)
                  {
                      count = axutil_array_list_size(_UserClaimsAdmin->property_allClaims, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_UserClaimsAdmin->property_allClaims, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_Claim_free((adb_Claim_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_UserClaimsAdmin->property_allClaims, env);
                  }
                _UserClaimsAdmin->is_valid_allClaims = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether allClaims is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_UserClaimsAdmin_is_allClaims_nil(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_TRUE);
               
               return !_UserClaimsAdmin->is_valid_allClaims;
           }

           /**
            * Set allClaims to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_UserClaimsAdmin_set_allClaims_nil(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env)
           {
               return adb_UserClaimsAdmin_reset_allClaims(_UserClaimsAdmin, env);
           }

           
           /**
            * Check whether allClaims is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_UserClaimsAdmin_is_allClaims_nil_at(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_TRUE);
               
               return (_UserClaimsAdmin->is_valid_allClaims == AXIS2_FALSE ||
                        NULL == _UserClaimsAdmin->property_allClaims || 
                        NULL == axutil_array_list_get(_UserClaimsAdmin->property_allClaims, env, i));
           }

           /**
            * Set allClaims to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_UserClaimsAdmin_set_allClaims_nil_at(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);

                if(_UserClaimsAdmin->property_allClaims == NULL ||
                            _UserClaimsAdmin->is_valid_allClaims == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_UserClaimsAdmin->property_allClaims, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_UserClaimsAdmin->property_allClaims, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 0)
                            {
                                break;
                            }
                        }
                    }
                }
                

                if( k < 0)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of allClaims is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_UserClaimsAdmin->property_allClaims == NULL)
                {
                    _UserClaimsAdmin->is_valid_allClaims = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_UserClaimsAdmin->property_allClaims, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_Claim_free((adb_Claim_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _UserClaimsAdmin->is_valid_allClaims = AXIS2_FALSE;
                        axutil_array_list_set(_UserClaimsAdmin->property_allClaims , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_UserClaimsAdmin->property_allClaims , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for allRequiredClaims by  Property Number 3
             */
            axutil_array_list_t* AXIS2_CALL
            adb_UserClaimsAdmin_get_property3(
                adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                const axutil_env_t *env)
            {
                return adb_UserClaimsAdmin_get_allRequiredClaims(_UserClaimsAdmin,
                                             env);
            }

            /**
             * getter for allRequiredClaims.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_UserClaimsAdmin_get_allRequiredClaims(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, NULL);
                  

                return _UserClaimsAdmin->property_allRequiredClaims;
             }

            /**
             * setter for allRequiredClaims
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_set_allRequiredClaims(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_allRequiredClaims)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);
                
                if(_UserClaimsAdmin->is_valid_allRequiredClaims &&
                        arg_allRequiredClaims == _UserClaimsAdmin->property_allRequiredClaims)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_allRequiredClaims, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "allRequiredClaims has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_allRequiredClaims, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_UserClaimsAdmin_reset_allRequiredClaims(_UserClaimsAdmin, env);

                
                if(NULL == arg_allRequiredClaims)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _UserClaimsAdmin->property_allRequiredClaims = arg_allRequiredClaims;
                        if(non_nil_exists)
                        {
                            _UserClaimsAdmin->is_valid_allRequiredClaims = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of allRequiredClaims.
             */
            adb_Claim_t* AXIS2_CALL
            adb_UserClaimsAdmin_get_allRequiredClaims_at(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env, int i)
            {
                adb_Claim_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, NULL);
                  

                if(_UserClaimsAdmin->property_allRequiredClaims == NULL)
                {
                    return (adb_Claim_t*)0;
                }
                ret_val = (adb_Claim_t*)axutil_array_list_get(_UserClaimsAdmin->property_allRequiredClaims, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of allRequiredClaims.
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_set_allRequiredClaims_at(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env, int i,
                    adb_Claim_t* arg_allRequiredClaims)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);
                
                if( _UserClaimsAdmin->is_valid_allRequiredClaims &&
                    _UserClaimsAdmin->property_allRequiredClaims &&
                
                    arg_allRequiredClaims == (adb_Claim_t*)axutil_array_list_get(_UserClaimsAdmin->property_allRequiredClaims, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_allRequiredClaims)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_UserClaimsAdmin->property_allRequiredClaims != NULL)
                        {
                            size = axutil_array_list_size(_UserClaimsAdmin->property_allRequiredClaims, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_UserClaimsAdmin->property_allRequiredClaims, env, i))
                                {
                                    non_nil_count ++;
                                    non_nil_exists = AXIS2_TRUE;
                                    if(non_nil_count >= 0)
                                    {
                                        break;
                                    }
                                }
                            }

                        
                        }
                    }
                  

                if(_UserClaimsAdmin->property_allRequiredClaims == NULL)
                {
                    _UserClaimsAdmin->property_allRequiredClaims = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_UserClaimsAdmin->property_allRequiredClaims, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_Claim_free((adb_Claim_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _UserClaimsAdmin->is_valid_allRequiredClaims = AXIS2_FALSE;
                        axutil_array_list_set(_UserClaimsAdmin->property_allRequiredClaims , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_UserClaimsAdmin->property_allRequiredClaims , env, i, arg_allRequiredClaims);
                  _UserClaimsAdmin->is_valid_allRequiredClaims = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to allRequiredClaims.
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_add_allRequiredClaims(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env,
                    adb_Claim_t* arg_allRequiredClaims)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);

                
                    if(NULL == arg_allRequiredClaims)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_UserClaimsAdmin->property_allRequiredClaims == NULL)
                {
                    _UserClaimsAdmin->property_allRequiredClaims = axutil_array_list_create(env, 10);
                }
                if(_UserClaimsAdmin->property_allRequiredClaims == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for allRequiredClaims");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_UserClaimsAdmin->property_allRequiredClaims , env, arg_allRequiredClaims);
                  _UserClaimsAdmin->is_valid_allRequiredClaims = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the allRequiredClaims array.
             */
            int AXIS2_CALL
            adb_UserClaimsAdmin_sizeof_allRequiredClaims(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, -1);
                if(_UserClaimsAdmin->property_allRequiredClaims == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_UserClaimsAdmin->property_allRequiredClaims, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_remove_allRequiredClaims_at(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env, int i)
            {
                return adb_UserClaimsAdmin_set_allRequiredClaims_nil_at(_UserClaimsAdmin, env, i);
            }

            

           /**
            * resetter for allRequiredClaims
            */
           axis2_status_t AXIS2_CALL
           adb_UserClaimsAdmin_reset_allRequiredClaims(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);
               

               
                  if (_UserClaimsAdmin->property_allRequiredClaims != NULL)
                  {
                      count = axutil_array_list_size(_UserClaimsAdmin->property_allRequiredClaims, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_UserClaimsAdmin->property_allRequiredClaims, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_Claim_free((adb_Claim_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_UserClaimsAdmin->property_allRequiredClaims, env);
                  }
                _UserClaimsAdmin->is_valid_allRequiredClaims = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether allRequiredClaims is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_UserClaimsAdmin_is_allRequiredClaims_nil(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_TRUE);
               
               return !_UserClaimsAdmin->is_valid_allRequiredClaims;
           }

           /**
            * Set allRequiredClaims to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_UserClaimsAdmin_set_allRequiredClaims_nil(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env)
           {
               return adb_UserClaimsAdmin_reset_allRequiredClaims(_UserClaimsAdmin, env);
           }

           
           /**
            * Check whether allRequiredClaims is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_UserClaimsAdmin_is_allRequiredClaims_nil_at(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_TRUE);
               
               return (_UserClaimsAdmin->is_valid_allRequiredClaims == AXIS2_FALSE ||
                        NULL == _UserClaimsAdmin->property_allRequiredClaims || 
                        NULL == axutil_array_list_get(_UserClaimsAdmin->property_allRequiredClaims, env, i));
           }

           /**
            * Set allRequiredClaims to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_UserClaimsAdmin_set_allRequiredClaims_nil_at(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);

                if(_UserClaimsAdmin->property_allRequiredClaims == NULL ||
                            _UserClaimsAdmin->is_valid_allRequiredClaims == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_UserClaimsAdmin->property_allRequiredClaims, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_UserClaimsAdmin->property_allRequiredClaims, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 0)
                            {
                                break;
                            }
                        }
                    }
                }
                

                if( k < 0)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of allRequiredClaims is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_UserClaimsAdmin->property_allRequiredClaims == NULL)
                {
                    _UserClaimsAdmin->is_valid_allRequiredClaims = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_UserClaimsAdmin->property_allRequiredClaims, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_Claim_free((adb_Claim_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _UserClaimsAdmin->is_valid_allRequiredClaims = AXIS2_FALSE;
                        axutil_array_list_set(_UserClaimsAdmin->property_allRequiredClaims , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_UserClaimsAdmin->property_allRequiredClaims , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for allSupportClaimsByDefault by  Property Number 4
             */
            axutil_array_list_t* AXIS2_CALL
            adb_UserClaimsAdmin_get_property4(
                adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                const axutil_env_t *env)
            {
                return adb_UserClaimsAdmin_get_allSupportClaimsByDefault(_UserClaimsAdmin,
                                             env);
            }

            /**
             * getter for allSupportClaimsByDefault.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_UserClaimsAdmin_get_allSupportClaimsByDefault(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, NULL);
                  

                return _UserClaimsAdmin->property_allSupportClaimsByDefault;
             }

            /**
             * setter for allSupportClaimsByDefault
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_set_allSupportClaimsByDefault(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_allSupportClaimsByDefault)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);
                
                if(_UserClaimsAdmin->is_valid_allSupportClaimsByDefault &&
                        arg_allSupportClaimsByDefault == _UserClaimsAdmin->property_allSupportClaimsByDefault)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_allSupportClaimsByDefault, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "allSupportClaimsByDefault has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_allSupportClaimsByDefault, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_UserClaimsAdmin_reset_allSupportClaimsByDefault(_UserClaimsAdmin, env);

                
                if(NULL == arg_allSupportClaimsByDefault)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _UserClaimsAdmin->property_allSupportClaimsByDefault = arg_allSupportClaimsByDefault;
                        if(non_nil_exists)
                        {
                            _UserClaimsAdmin->is_valid_allSupportClaimsByDefault = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of allSupportClaimsByDefault.
             */
            adb_Claim_t* AXIS2_CALL
            adb_UserClaimsAdmin_get_allSupportClaimsByDefault_at(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env, int i)
            {
                adb_Claim_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, NULL);
                  

                if(_UserClaimsAdmin->property_allSupportClaimsByDefault == NULL)
                {
                    return (adb_Claim_t*)0;
                }
                ret_val = (adb_Claim_t*)axutil_array_list_get(_UserClaimsAdmin->property_allSupportClaimsByDefault, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of allSupportClaimsByDefault.
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_set_allSupportClaimsByDefault_at(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env, int i,
                    adb_Claim_t* arg_allSupportClaimsByDefault)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);
                
                if( _UserClaimsAdmin->is_valid_allSupportClaimsByDefault &&
                    _UserClaimsAdmin->property_allSupportClaimsByDefault &&
                
                    arg_allSupportClaimsByDefault == (adb_Claim_t*)axutil_array_list_get(_UserClaimsAdmin->property_allSupportClaimsByDefault, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_allSupportClaimsByDefault)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_UserClaimsAdmin->property_allSupportClaimsByDefault != NULL)
                        {
                            size = axutil_array_list_size(_UserClaimsAdmin->property_allSupportClaimsByDefault, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_UserClaimsAdmin->property_allSupportClaimsByDefault, env, i))
                                {
                                    non_nil_count ++;
                                    non_nil_exists = AXIS2_TRUE;
                                    if(non_nil_count >= 0)
                                    {
                                        break;
                                    }
                                }
                            }

                        
                        }
                    }
                  

                if(_UserClaimsAdmin->property_allSupportClaimsByDefault == NULL)
                {
                    _UserClaimsAdmin->property_allSupportClaimsByDefault = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_UserClaimsAdmin->property_allSupportClaimsByDefault, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_Claim_free((adb_Claim_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _UserClaimsAdmin->is_valid_allSupportClaimsByDefault = AXIS2_FALSE;
                        axutil_array_list_set(_UserClaimsAdmin->property_allSupportClaimsByDefault , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_UserClaimsAdmin->property_allSupportClaimsByDefault , env, i, arg_allSupportClaimsByDefault);
                  _UserClaimsAdmin->is_valid_allSupportClaimsByDefault = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to allSupportClaimsByDefault.
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_add_allSupportClaimsByDefault(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env,
                    adb_Claim_t* arg_allSupportClaimsByDefault)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);

                
                    if(NULL == arg_allSupportClaimsByDefault)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_UserClaimsAdmin->property_allSupportClaimsByDefault == NULL)
                {
                    _UserClaimsAdmin->property_allSupportClaimsByDefault = axutil_array_list_create(env, 10);
                }
                if(_UserClaimsAdmin->property_allSupportClaimsByDefault == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for allSupportClaimsByDefault");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_UserClaimsAdmin->property_allSupportClaimsByDefault , env, arg_allSupportClaimsByDefault);
                  _UserClaimsAdmin->is_valid_allSupportClaimsByDefault = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the allSupportClaimsByDefault array.
             */
            int AXIS2_CALL
            adb_UserClaimsAdmin_sizeof_allSupportClaimsByDefault(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, -1);
                if(_UserClaimsAdmin->property_allSupportClaimsByDefault == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_UserClaimsAdmin->property_allSupportClaimsByDefault, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_UserClaimsAdmin_remove_allSupportClaimsByDefault_at(
                    adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                    const axutil_env_t *env, int i)
            {
                return adb_UserClaimsAdmin_set_allSupportClaimsByDefault_nil_at(_UserClaimsAdmin, env, i);
            }

            

           /**
            * resetter for allSupportClaimsByDefault
            */
           axis2_status_t AXIS2_CALL
           adb_UserClaimsAdmin_reset_allSupportClaimsByDefault(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);
               

               
                  if (_UserClaimsAdmin->property_allSupportClaimsByDefault != NULL)
                  {
                      count = axutil_array_list_size(_UserClaimsAdmin->property_allSupportClaimsByDefault, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_UserClaimsAdmin->property_allSupportClaimsByDefault, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_Claim_free((adb_Claim_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_UserClaimsAdmin->property_allSupportClaimsByDefault, env);
                  }
                _UserClaimsAdmin->is_valid_allSupportClaimsByDefault = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether allSupportClaimsByDefault is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_UserClaimsAdmin_is_allSupportClaimsByDefault_nil(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_TRUE);
               
               return !_UserClaimsAdmin->is_valid_allSupportClaimsByDefault;
           }

           /**
            * Set allSupportClaimsByDefault to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_UserClaimsAdmin_set_allSupportClaimsByDefault_nil(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env)
           {
               return adb_UserClaimsAdmin_reset_allSupportClaimsByDefault(_UserClaimsAdmin, env);
           }

           
           /**
            * Check whether allSupportClaimsByDefault is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_UserClaimsAdmin_is_allSupportClaimsByDefault_nil_at(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_TRUE);
               
               return (_UserClaimsAdmin->is_valid_allSupportClaimsByDefault == AXIS2_FALSE ||
                        NULL == _UserClaimsAdmin->property_allSupportClaimsByDefault || 
                        NULL == axutil_array_list_get(_UserClaimsAdmin->property_allSupportClaimsByDefault, env, i));
           }

           /**
            * Set allSupportClaimsByDefault to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_UserClaimsAdmin_set_allSupportClaimsByDefault_nil_at(
                   adb_UserClaimsAdmin_t* _UserClaimsAdmin,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UserClaimsAdmin, AXIS2_FAILURE);

                if(_UserClaimsAdmin->property_allSupportClaimsByDefault == NULL ||
                            _UserClaimsAdmin->is_valid_allSupportClaimsByDefault == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_UserClaimsAdmin->property_allSupportClaimsByDefault, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_UserClaimsAdmin->property_allSupportClaimsByDefault, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 0)
                            {
                                break;
                            }
                        }
                    }
                }
                

                if( k < 0)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of allSupportClaimsByDefault is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_UserClaimsAdmin->property_allSupportClaimsByDefault == NULL)
                {
                    _UserClaimsAdmin->is_valid_allSupportClaimsByDefault = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_UserClaimsAdmin->property_allSupportClaimsByDefault, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_Claim_free((adb_Claim_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _UserClaimsAdmin->is_valid_allSupportClaimsByDefault = AXIS2_FALSE;
                        axutil_array_list_set(_UserClaimsAdmin->property_allSupportClaimsByDefault , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_UserClaimsAdmin->property_allSupportClaimsByDefault , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

