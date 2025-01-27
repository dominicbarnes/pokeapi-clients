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

/*
* VersionGroupApiImpl.h
*
* 
*/

#ifndef VERSION_GROUP_API_IMPL_H_
#define VERSION_GROUP_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <VersionGroupApi.h>


#include <string>

namespace org::openapitools::server::api
{



class VersionGroupApiImpl : public org::openapitools::server::api::VersionGroupApi {
public:
    explicit VersionGroupApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~VersionGroupApiImpl() override = default;

    void version_group_list(const std::optional<int32_t> &limit, const std::optional<int32_t> &offset, Pistache::Http::ResponseWriter &response);
    void version_group_read(const int32_t &id, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
