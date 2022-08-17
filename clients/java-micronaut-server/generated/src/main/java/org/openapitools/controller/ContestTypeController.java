/*
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.controller;

import io.micronaut.http.annotation.*;
import io.micronaut.core.annotation.Nullable;
import io.micronaut.core.convert.format.Format;
import io.micronaut.security.annotation.Secured;
import io.micronaut.security.rules.SecurityRule;
import reactor.core.publisher.Mono;
import io.micronaut.http.HttpStatus;
import io.micronaut.http.exceptions.HttpStatusException;
import javax.annotation.Generated;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.Parameters;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.tags.Tag;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-08-17T11:01:11.305914Z[Etc/UTC]")
@Controller
@Tag(name = "ContestType", description = "The ContestType API")
public class ContestTypeController {
    /**
     * contestTypeList
     *
     * @param limit  (optional)
     * @param offset  (optional)
     * @return String
     */
    @Operation(
        operationId = "contestTypeList",
        responses = {
            @ApiResponse(responseCode = "0", description = "Default response", content = {
                @Content(mediaType = "text/plain", schema = @Schema(implementation = String.class))
            })
        },
        parameters = {
            @Parameter(name = "limit"),
            @Parameter(name = "offset")
        }
    )
    @Get(uri="/api/v2/contest-type/")
    @Produces(value = {"text/plain"})
    @Secured({SecurityRule.IS_ANONYMOUS})
    public Mono<String> contestTypeList(
        @QueryValue(value="limit") @Nullable Integer limit, 
        @QueryValue(value="offset") @Nullable Integer offset
    ) {
        // TODO implement contestTypeList();
        return Mono.error(new HttpStatusException(HttpStatus.NOT_IMPLEMENTED, null));
    }


    /**
     * contestTypeRead
     *
     * @param id  (required)
     * @return String
     */
    @Operation(
        operationId = "contestTypeRead",
        responses = {
            @ApiResponse(responseCode = "0", description = "Default response", content = {
                @Content(mediaType = "text/plain", schema = @Schema(implementation = String.class))
            })
        },
        parameters = {
            @Parameter(name = "id", required = true)
        }
    )
    @Get(uri="/api/v2/contest-type/{id}/")
    @Produces(value = {"text/plain"})
    @Secured({SecurityRule.IS_ANONYMOUS})
    public Mono<String> contestTypeRead(
        @PathVariable(value="id") @NotNull Integer id
    ) {
        // TODO implement contestTypeRead();
        return Mono.error(new HttpStatusException(HttpStatus.NOT_IMPLEMENTED, null));
    }

}
