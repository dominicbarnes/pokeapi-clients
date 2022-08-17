/**
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (6.1.0-SNAPSHOT).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.api;

import org.apache.camel.builder.RouteBuilder;
import org.apache.camel.model.rest.RestParamType;
import org.springframework.stereotype.Component;
import org.openapitools.model.*;
import org.apache.camel.model.rest.RestBindingMode;
import org.apache.camel.LoggingLevel;

@Component
public class BerryApi extends RouteBuilder {

    @Override
    public void configure() throws Exception {
        

        /**
        GET /api/v2/berry/
        **/
        rest()
            .get("/api/v2/berry/")
                .description("")
                .id("berryListApi")
                .clientRequestValidation(false)
                .bindingMode(RestBindingMode.off)
                .produces("text/plain")
                .outType(String.class)
                .param()
                    .name("limit")
                    .type(RestParamType.query)
                    .required(false)
                .endParam()
                .param()
                    .name("offset")
                    .type(RestParamType.query)
                    .required(false)
                .endParam()
                .to("direct:berryList");
        

        /**
        GET /api/v2/berry/{id}/
        **/
        rest()
            .get("/api/v2/berry/{id}/")
                .description("")
                .id("berryReadApi")
                .clientRequestValidation(false)
                .bindingMode(RestBindingMode.off)
                .produces("text/plain")
                .outType(String.class)
                .param()
                    .name("id")
                    .type(RestParamType.path)
                    .required(true)
                .endParam()
                .to("direct:berryRead");
        
    }
}
