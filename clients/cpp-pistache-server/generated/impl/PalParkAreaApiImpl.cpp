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

#include "PalParkAreaApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {



PalParkAreaApiImpl::PalParkAreaApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : PalParkAreaApi(rtr)
{
}

void PalParkAreaApiImpl::pal_park_area_list(const std::optional<int32_t> &limit, const std::optional<int32_t> &offset, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void PalParkAreaApiImpl::pal_park_area_read(const int32_t &id, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

