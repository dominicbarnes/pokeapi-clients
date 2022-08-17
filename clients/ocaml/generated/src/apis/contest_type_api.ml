(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

let contest_type_list ?limit ?offset () =
    let open Lwt.Infix in
    let uri = Request.build_uri "/api/v2/contest-type/" in
    let headers = Request.default_headers in
    let uri = Request.maybe_add_query_param uri "limit" Int32.to_string limit in
    let uri = Request.maybe_add_query_param uri "offset" Int32.to_string offset in
    Cohttp_lwt_unix.Client.call `GET uri ~headers >>= fun (resp, body) ->
    Request.read_json_body_as (JsonSupport.to_string) resp body

let contest_type_read ~id =
    let open Lwt.Infix in
    let uri = Request.build_uri "/api/v2/contest-type/{id}/" in
    let headers = Request.default_headers in
    let uri = Request.replace_path_param uri "id" Int32.to_string id in
    Cohttp_lwt_unix.Client.call `GET uri ~headers >>= fun (resp, body) ->
    Request.read_json_body_as (JsonSupport.to_string) resp body

