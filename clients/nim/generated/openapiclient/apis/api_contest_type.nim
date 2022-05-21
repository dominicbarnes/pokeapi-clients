#
# 
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
# The version of the OpenAPI document: 1.0.0
# 
# Generated by: https://openapi-generator.tech
#

import httpclient
import json
import logging
import marshal
import options
import strformat
import strutils
import tables
import typetraits
import uri


const basepath = "https://pokeapi.co"

template constructResult[T](response: Response): untyped =
  if response.code in {Http200, Http201, Http202, Http204, Http206}:
    try:
      when name(stripGenericParams(T.typedesc).typedesc) == name(Table):
        (some(json.to(parseJson(response.body), T.typedesc)), response)
      else:
        (some(marshal.to[T](response.body)), response)
    except JsonParsingError:
      # The server returned a malformed response though the response code is 2XX
      # TODO: need better error handling
      error("JsonParsingError")
      (none(T.typedesc), response)
  else:
    (none(T.typedesc), response)


proc contestTypeList*(httpClient: HttpClient, limit: int, offset: int): (Option[string], Response) =
  ## 
  let query_for_api_call = encodeQuery([
    ("limit", $limit), # 
    ("offset", $offset), # 
  ])

  let response = httpClient.get(basepath & "/api/v2/contest-type/" & "?" & query_for_api_call)
  constructResult[string](response)


proc contestTypeRead*(httpClient: HttpClient, id: int): (Option[string], Response) =
  ## 

  let response = httpClient.get(basepath & fmt"/api/v2/contest-type/{id}/")
  constructResult[string](response)

