/**
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


package org.openapitools.api;

import org.junit.Test;
import org.junit.Before;
import static org.junit.Assert.*;

import javax.ws.rs.core.Response;
import org.apache.cxf.jaxrs.client.JAXRSClientFactory;
import org.apache.cxf.jaxrs.client.ClientConfiguration;
import org.apache.cxf.jaxrs.client.WebClient;


import com.fasterxml.jackson.jaxrs.json.JacksonJsonProvider;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;




/**
 * 
 *
 * <p>No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API tests for SuperContestEffectApi
 */
public class SuperContestEffectApiTest {


    private SuperContestEffectApi api;

    @Before
    public void setup() {
        JacksonJsonProvider provider = new JacksonJsonProvider();
        List providers = new ArrayList();
        providers.add(provider);

        api = JAXRSClientFactory.create("https://pokeapi.co", SuperContestEffectApi.class, providers);
        org.apache.cxf.jaxrs.client.Client client = WebClient.client(api);

        ClientConfiguration config = WebClient.getConfig(client);
    }

    
    /**
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void superContestEffectListTest() {
        Integer limit = null;
        Integer offset = null;
        //String response = api.superContestEffectList(limit, offset);
        //assertNotNull(response);
        // TODO: test validations


    }
    
    /**
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void superContestEffectReadTest() {
        Integer id = null;
        //String response = api.superContestEffectRead(id);
        //assertNotNull(response);
        // TODO: test validations


    }
    
}
