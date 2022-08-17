{-
   
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 20220523
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.BerryFirmness exposing
    ( berryFirmnessList
    , berryFirmnessRead
    )

import Api
import Api.Data
import Dict
import Http
import Json.Decode
import Json.Encode



berryFirmnessList : Maybe Int -> Maybe Int -> Api.Request 
berryFirmnessList limit_query offset_query =
    Api.request
        "GET"
        "/api/v2/berry-firmness/"
        []
        [ ( "limit", Maybe.map String.fromInt limit_query ), ( "offset", Maybe.map String.fromInt offset_query ) ]
        []
        Nothing
        



berryFirmnessRead : Int -> Api.Request 
berryFirmnessRead id_path =
    Api.request
        "GET"
        "/api/v2/berry-firmness/{id}/"
        [ ( "id", String.fromInt id_path ) ]
        []
        []
        Nothing
        
