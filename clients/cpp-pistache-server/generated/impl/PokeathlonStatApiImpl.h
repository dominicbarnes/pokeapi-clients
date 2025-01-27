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
* PokeathlonStatApiImpl.h
*
* 
*/

#ifndef POKEATHLON_STAT_API_IMPL_H_
#define POKEATHLON_STAT_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <PokeathlonStatApi.h>


#include <string>

namespace org::openapitools::server::api
{



class PokeathlonStatApiImpl : public org::openapitools::server::api::PokeathlonStatApi {
public:
    explicit PokeathlonStatApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~PokeathlonStatApiImpl() override = default;

    void pokeathlon_stat_list(const std::optional<int32_t> &limit, const std::optional<int32_t> &offset, Pistache::Http::ResponseWriter &response);
    void pokeathlon_stat_read(const int32_t &id, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
