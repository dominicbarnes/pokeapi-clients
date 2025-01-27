/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */


package org.openapitools.server.api


import java.io.File

import org.scalatra.ScalatraServlet
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{ FileUploadSupport, MultipartConfig, SizeConstraintExceededException }

import scala.collection.JavaConverters._

class EncounterConditionValueApi(implicit val swagger: Swagger) extends ScalatraServlet
  with FileUploadSupport
  with JacksonJsonSupport
  with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "EncounterConditionValueApi"

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val encounterConditionValueListOperation = (apiOperation[String]("encounterConditionValueList")
    summary ""
    parameters(queryParam[Int]("limit").description("").optional, queryParam[Int]("offset").description("").optional)
  )

  get("/api/v2/encounter-condition-value/", operation(encounterConditionValueListOperation)) {
            val limit = params.getAs[Int]("limit")

    //println("limit: " + limit)
            val offset = params.getAs[Int]("offset")

    //println("offset: " + offset)
  }

  

  val encounterConditionValueReadOperation = (apiOperation[String]("encounterConditionValueRead")
    summary ""
    parameters(pathParam[Int]("id").description(""))
  )

  get("/api/v2/encounter-condition-value/:id/", operation(encounterConditionValueReadOperation)) {
    val id = params.getOrElse("id", halt(400))
    //println("id: " + id)
  }

}
