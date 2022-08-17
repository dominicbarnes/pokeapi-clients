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
 * AbilityApi.h
 *
 * 
 */

#ifndef AbilityApi_H_
#define AbilityApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <nlohmann/json.hpp>
#include <optional>
#include <utility>

#include <string>

namespace org::openapitools::server::api
{

class  AbilityApi {
public:
    explicit AbilityApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    virtual ~AbilityApi() = default;
    void init();

    static const std::string base;

private:
    void setupRoutes();

    void ability_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void ability_read_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void ability_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    const std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Helper function to handle unexpected Exceptions during Parameter parsing and validation.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleParsingException(const std::exception& ex) const noexcept;

    /// <summary>
    /// Helper function to handle unexpected Exceptions during processing of the request in handler functions.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleOperationException(const std::exception& ex) const noexcept;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="limit"> (optional, default to 0)</param>
    /// <param name="offset"> (optional, default to 0)</param>
    virtual void ability_list(const std::optional<int32_t> &limit, const std::optional<int32_t> &offset, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    virtual void ability_read(const int32_t &id, Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace org::openapitools::server::api

#endif /* AbilityApi_H_ */

