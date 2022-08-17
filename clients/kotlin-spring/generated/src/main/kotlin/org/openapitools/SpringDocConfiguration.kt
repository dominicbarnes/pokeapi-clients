package org.openapitools

import org.springframework.context.annotation.Bean
import org.springframework.context.annotation.Configuration

import io.swagger.v3.oas.models.OpenAPI
import io.swagger.v3.oas.models.info.Info
import io.swagger.v3.oas.models.info.Contact
import io.swagger.v3.oas.models.info.License
import io.swagger.v3.oas.models.Components
import io.swagger.v3.oas.models.security.SecurityScheme

@jakarta.annotation.Generated(value = ["org.openapitools.codegen.languages.KotlinSpringServerCodegen"])
@Configuration
class SpringDocConfiguration {

    @Bean
    fun apiInfo(): OpenAPI {
        return OpenAPI()
            .info(
                Info()
                    .title("")
                    .description("No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)")
                    .contact(
                        Contact()
                            .name("Cliffano Subagio")
                            .url("https://github.com/cliffano/pokeapi-clients")
                            .email("blah@cliffano.com")
                    )
                    .version("20220523")
            )
    }
}
