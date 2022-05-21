/*
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * 
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
import javax.annotation.Generated;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.annotations.*;

@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-21T03:59:28.461143Z[Etc/UTC]")
@Controller("${context-path}")
public class GrowthRateController {
    /**
     * growthRateList
     *
     * @param limit  (optional)
     * @param offset  (optional)
     * @return String
     */
    @ApiOperation(
        value = "",
        nickname = "growthRateList",
        response = String.class,
        authorizations = {},
        tags={})
    @ApiResponses(value = {
        @ApiResponse(code = 0, message = "Default response", response = String.class)})
    @Get(uri="/api/v2/growth-rate/")
    @Produces(value = {"text/plain"})
    @Secured(SecurityRule.IS_ANONYMOUS)
    public Mono<String> growthRateList(
        @QueryValue(value="limit") @Nullable Integer limit, 
        @QueryValue(value="offset") @Nullable Integer offset
    ) {
        // TODO implement growthRateList() body;
        Mono<String> result = Mono.empty();
        return result;
    }

    /**
     * growthRateRead
     *
     * @param id  (required)
     * @return String
     */
    @ApiOperation(
        value = "",
        nickname = "growthRateRead",
        response = String.class,
        authorizations = {},
        tags={})
    @ApiResponses(value = {
        @ApiResponse(code = 0, message = "Default response", response = String.class)})
    @Get(uri="/api/v2/growth-rate/{id}/")
    @Produces(value = {"text/plain"})
    @Secured(SecurityRule.IS_ANONYMOUS)
    public Mono<String> growthRateRead(
        @PathVariable(value="id") @NotNull Integer id
    ) {
        // TODO implement growthRateRead() body;
        Mono<String> result = Mono.empty();
        return result;
    }
}
