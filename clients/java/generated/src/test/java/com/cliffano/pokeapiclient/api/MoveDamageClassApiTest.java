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
 * API tests for MoveDamageClassApi
 */
@Disabled
public class MoveDamageClassApiTest {

    private final MoveDamageClassApi api = new MoveDamageClassApi();

    /**
     * @throws ApiException if the Api call fails
     */
    @Test
    public void moveDamageClassListTest() throws ApiException {
        Integer limit = null;
        Integer offset = null;
        String response = api.moveDamageClassList(limit, offset);
        // TODO: test validations
    }

    /**
     * @throws ApiException if the Api call fails
     */
    @Test
    public void moveDamageClassReadTest() throws ApiException {
        Integer id = null;
        String response = api.moveDamageClassRead(id);
        // TODO: test validations
    }

}
