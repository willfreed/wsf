prglibdir=$(prefix)/services/version
prglib_LTLIBRARIES=libversion.la
prglib_DATA=services.xml
EXTRA_DIST=services.xml Version.h 
libversion_la_SOURCES= version.cpp

libversion_la_LIBADD=../../../wsf_c/axis2c/src/core/description/libaxis2_description.la \
	             ../../../wsf_c/axis2c/src/core/deployment/libaxis2_deployment.la \
		     ../../../wsf_c/axis2c/src/core/context/libaxis2_context.la \
		     ../../../wsf_c/axis2c/util/src/libaxutil.la \
		     ../../../wsf_c/axis2c/neethi/src/libneethi.la \
		     ../../../wsf_c/axis2c/axiom/src/om/libaxis2_axiom.la \
		     ../../../src/main/libwso2_wsf.la
			

INCLUDES =  -I ../../../wsf_c/axis2c/include \
            -I ../../../wsf_c/axis2c/util/include \
            -I ../../../wsf_c/axis2c/util/include/platforms \
            -I ../../../wsf_c/axis2c/axiom/include \
            -I ../../../include


