/*
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Net;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Azure.WebJobs;
using Microsoft.Azure.WebJobs.Extensions.Http;

namespace Org.OpenAPITools.Apis
{ 
    public partial class MoveApi
    { 
        [FunctionName("MoveApi_MoveList")]
        public async Task<IActionResult> _MoveList([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/api/v2/move/")]HttpRequest req, ExecutionContext context)
        {
            var method = this.GetType().GetMethod("MoveList");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("MoveApi_MoveRead")]
        public async Task<IActionResult> _MoveRead([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/api/v2/move/{id}/")]HttpRequest req, ExecutionContext context, int id)
        {
            var method = this.GetType().GetMethod("MoveRead");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context,  })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }
    }
}
