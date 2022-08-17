{-
   
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 20220523
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.Gender exposing
    ( genderList
    , genderRead
    )

import Api
import Api.Data
import Dict
import Http
import Json.Decode
import Json.Encode



genderList : Maybe Int -> Maybe Int -> Api.Request 
genderList limit_query offset_query =
    Api.request
        "GET"
        "/api/v2/gender/"
        []
        [ ( "limit", Maybe.map String.fromInt limit_query ), ( "offset", Maybe.map String.fromInt offset_query ) ]
        []
        Nothing
        



genderRead : Int -> Api.Request 
genderRead id_path =
    Api.request
        "GET"
        "/api/v2/gender/{id}/"
        [ ( "id", String.fromInt id_path ) ]
        []
        []
        Nothing
        
