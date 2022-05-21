/**
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
package org.openapitools.client.api

import org.openapitools.client.core.JsonSupport._
import sttp.client._
import sttp.model.Method

object BerryFlavorApi {

def apply(baseUrl: String = "https://pokeapi.co") = new BerryFlavorApi(baseUrl)
}

class BerryFlavorApi(baseUrl: String) {

  /**
   * Expected answers:
   *   code 0 : String (Default response)
   * 
   * @param limit 
   * @param offset 
   */
  def berryFlavorList(limit: Option[Int] = None, offset: Option[Int] = None
): Request[Either[ResponseError[Exception], String], Nothing] =
    basicRequest
      .method(Method.GET, uri"$baseUrl/api/v2/berry-flavor/?limit=${ limit }&offset=${ offset }")
      .contentType("application/json")
      .response(asJson[String])

  /**
   * Expected answers:
   *   code 0 : String (Default response)
   * 
   * @param id 
   */
  def berryFlavorRead(id: Int
): Request[Either[ResponseError[Exception], String], Nothing] =
    basicRequest
      .method(Method.GET, uri"$baseUrl/api/v2/berry-flavor/${id}/")
      .contentType("application/json")
      .response(asJson[String])

}
