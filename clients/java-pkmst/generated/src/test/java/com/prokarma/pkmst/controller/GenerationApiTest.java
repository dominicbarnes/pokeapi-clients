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


package com.prokarma.pkmst.controller;

import com.fasterxml.jackson.databind.ObjectMapper;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.springframework.http.ResponseEntity;
import org.springframework.web.multipart.MultipartFile;

/**
 * API tests for GenerationApi
 */
@Ignore
public class GenerationApiTest {

    private final ObjectMapper objectMapper = new ObjectMapper();

    private final GenerationApi api = new GenerationApiController(objectMapper);

    private final String accept = "application/json";

    
    /**
     * 
     *
     * 
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void generationListTest() throws Exception {
        Integer limit = null;
        Integer offset = null;
    ResponseEntity<String> response = api.generationList(limit, offset , accept);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void generationReadTest() throws Exception {
        Integer id = null;
    ResponseEntity<String> response = api.generationRead(id , accept);

        // TODO: test validations
    }
    
}
