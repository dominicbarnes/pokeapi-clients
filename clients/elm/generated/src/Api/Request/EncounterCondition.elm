{-
   
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 20220523
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.EncounterCondition exposing
    ( encounterConditionList
    , encounterConditionRead
    )

import Api
import Api.Data
import Dict
import Http
import Json.Decode
import Json.Encode



encounterConditionList : Maybe Int -> Maybe Int -> Api.Request 
encounterConditionList limit_query offset_query =
    Api.request
        "GET"
        "/api/v2/encounter-condition/"
        []
        [ ( "limit", Maybe.map String.fromInt limit_query ), ( "offset", Maybe.map String.fromInt offset_query ) ]
        []
        Nothing
        



encounterConditionRead : Int -> Api.Request 
encounterConditionRead id_path =
    Api.request
        "GET"
        "/api/v2/encounter-condition/{id}/"
        [ ( "id", String.fromInt id_path ) ]
        []
        []
        Nothing
        
