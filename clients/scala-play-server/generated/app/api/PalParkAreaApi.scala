package api

import play.api.libs.json._

@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2022-08-17T11:04:30.996532Z[Etc/UTC]")
trait PalParkAreaApi {
  /**
    */
  def palParkAreaList(limit: Option[Int], offset: Option[Int]): String

  /**
    */
  def palParkAreaRead(id: Int): String
}
