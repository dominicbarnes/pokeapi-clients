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
    public partial class RegionApi
    { 
        [FunctionName("RegionApi_RegionList")]
        public async Task<ActionResult<string>> _RegionList([HttpTrigger(AuthorizationLevel.Anonymous, "Get", Route = "api/v2/region/")]HttpRequest req, ExecutionContext context)
        {
            var method = this.GetType().GetMethod("RegionList");
            if(method == null)
            {
                return new StatusCodeResult((int)HttpStatusCode.NotImplemented);
            }
            return (await ((Task<string>)method.Invoke(this, new object[] { req, context, id })).ConfigureAwait(false));
        }

        [FunctionName("RegionApi_RegionRead")]
        public async Task<ActionResult<string>> _RegionRead([HttpTrigger(AuthorizationLevel.Anonymous, "Get", Route = "api/v2/region/{id}/")]HttpRequest req, ExecutionContext context, int id)
        {
            var method = this.GetType().GetMethod("RegionRead");
            if(method == null)
            {
                return new StatusCodeResult((int)HttpStatusCode.NotImplemented);
            }
            return (await ((Task<string>)method.Invoke(this, new object[] { req, context, id })).ConfigureAwait(false));
        }
    }
}
