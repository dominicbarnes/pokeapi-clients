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
package org.openapitools.client.core

sealed trait ResponseState

object ResponseState {

  case object Success extends ResponseState

  case object Error extends ResponseState

}

case class ApiRequest[U](
  // required fields
  method: ApiMethod,
  basePath: String,
  operationPath: String,
  contentType: String,

  // optional fields
  responses: Map[Int, (Manifest[_], ResponseState)] = Map.empty,
  bodyParam: Option[Any] = None,
  formParams: Map[String, Any] = Map.empty,
  pathParams: Map[String, Any] = Map.empty,
  queryParams: Map[String, Any] = Map.empty,
  headerParams: Map[String, Any] = Map.empty,
  credentials: Seq[Credentials] = List.empty) {

  def withCredentials(cred: Credentials): ApiRequest[U] = copy[U](credentials = credentials :+ cred)

  def withApiKey(key: ApiKeyValue, keyName: String, location: ApiKeyLocation): ApiRequest[U] = withCredentials(ApiKeyCredentials(key, keyName, location))

  def withSuccessResponse[T](code: Int)(implicit m: Manifest[T]): ApiRequest[U] = copy[U](responses = responses + (code -> (m, ResponseState.Success)))

  def withErrorResponse[T](code: Int)(implicit m: Manifest[T]): ApiRequest[U] = copy[U](responses = responses + (code -> (m, ResponseState.Error)))

  def withDefaultSuccessResponse[T](implicit m: Manifest[T]): ApiRequest[U] = withSuccessResponse[T](0)

  def withDefaultErrorResponse[T](implicit m: Manifest[T]): ApiRequest[U] = withErrorResponse[T](0)

  def responseForCode(statusCode: Int): Option[(Manifest[_], ResponseState)] = responses.get(statusCode) orElse responses.get(0)

  def withoutBody(): ApiRequest[U] = copy[U](bodyParam = None)

  def withBody(body: Any): ApiRequest[U] = copy[U](bodyParam = Some(body))

  def withFormParam(name: String, value: Any): ApiRequest[U] = copy[U](formParams = formParams + (name -> value))

  def withPathParam(name: String, value: Any): ApiRequest[U] = copy[U](pathParams = pathParams + (name -> value))

  def withQueryParam(name: String, value: Any): ApiRequest[U] = copy[U](queryParams = queryParams + (name -> value))

  def withHeaderParam(name: String, value: Any): ApiRequest[U] = copy[U](headerParams = headerParams + (name -> value))
}
