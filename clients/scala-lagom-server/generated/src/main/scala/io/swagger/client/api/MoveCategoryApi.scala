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

package io.swagger.client.api

import akka.{Done, NotUsed}
import com.lightbend.lagom.scaladsl.api.transport.Method
import com.lightbend.lagom.scaladsl.api.{Service, ServiceCall}
import play.api.libs.json._
import com.lightbend.lagom.scaladsl.api.deser.PathParamSerializer


trait MoveCategoryApi extends Service {


  final override def descriptor = {
    import Service._
    named("MoveCategoryApi").withCalls(
      restCall(Method.GET, "/api/v2/move-category/?limit&offset", moveCategoryList _), 
      restCall(Method.GET, "/api/v2/move-category/:id/", moveCategoryRead _)
    ).withAutoAcl(true)
  }

      
  /**
    * 
    * 
    *  
    * @param limit  (optional) 
    * @param offset  (optional)
    * @return String
    */
  def moveCategoryList(limit:           Option[Int] = None,offset:           Option[Int] = None): ServiceCall[NotUsed ,String]
  
  /**
    * 
    * 
    *  
    * @param id  
    * @return String
    */
  def moveCategoryRead(id: Int): ServiceCall[NotUsed ,String]
  

  }
