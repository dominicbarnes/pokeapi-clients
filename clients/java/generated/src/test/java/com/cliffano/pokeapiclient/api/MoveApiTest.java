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


package com.cliffano.pokeapiclient.api;

import com.cliffano.pokeapiclient.ApiException;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for MoveApi
 */
@Disabled
public class MoveApiTest {

    private final MoveApi api = new MoveApi();

    /**
     * @throws ApiException if the Api call fails
     */
    @Test
    public void moveListTest() throws ApiException {
        Integer limit = null;
        Integer offset = null;
        String response = api.moveList(limit, offset);
        // TODO: test validations
    }

    /**
     * @throws ApiException if the Api call fails
     */
    @Test
    public void moveReadTest() throws ApiException {
        Integer id = null;
        String response = api.moveRead(id);
        // TODO: test validations
    }

}
