using System.IO;
using System.Net;
using System.Threading.Tasks;
using System.ComponentModel.DataAnnotations;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Azure.WebJobs;
using Microsoft.Azure.WebJobs.Extensions.Http;
using Microsoft.Azure.WebJobs.Extensions.OpenApi.Core.Attributes;
using Microsoft.Azure.WebJobs.Extensions.OpenApi.Core.Enums;
using Microsoft.Extensions.Logging;
using Microsoft.OpenApi.Models;
using Newtonsoft.Json;
using Org.OpenAPITools.Models;

namespace Org.OpenAPITools.Functions
{ 
    public partial class BerryFlavorApi
    { 
        [FunctionName("BerryFlavorApi_BerryFlavorList")]
        public async Task<ActionResult<string>> _BerryFlavorList([HttpTrigger(AuthorizationLevel.Anonymous, "Get", Route = "api/v2/berry-flavor/")]HttpRequest req, ExecutionContext context)
        {
            var method = this.GetType().GetMethod("BerryFlavorList");
            if(method == null)
            {
                return new StatusCodeResult((int)HttpStatusCode.NotImplemented);
            }
            return (await ((Task<string>)method.Invoke(this, new object[] { req, context, id })).ConfigureAwait(false));
        }

        [FunctionName("BerryFlavorApi_BerryFlavorRead")]
        public async Task<ActionResult<string>> _BerryFlavorRead([HttpTrigger(AuthorizationLevel.Anonymous, "Get", Route = "api/v2/berry-flavor/{id}/")]HttpRequest req, ExecutionContext context, int id)
        {
            var method = this.GetType().GetMethod("BerryFlavorRead");
            if(method == null)
            {
                return new StatusCodeResult((int)HttpStatusCode.NotImplemented);
            }
            return (await ((Task<string>)method.Invoke(this, new object[] { req, context, id })).ConfigureAwait(false));
        }
    }
}
