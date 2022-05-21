/**
* 
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "ItemPocketApi.h"
#include "Helpers.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::helpers;


const std::string ItemPocketApi::base = "";

ItemPocketApi::ItemPocketApi(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr)
{
}

void ItemPocketApi::init() {
    setupRoutes();
}

void ItemPocketApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Get(*router, base + "/api/v2/item-pocket/", Routes::bind(&ItemPocketApi::item_pocket_list_handler, this));
    Routes::Get(*router, base + "/api/v2/item-pocket/:id/", Routes::bind(&ItemPocketApi::item_pocket_read_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&ItemPocketApi::item_pocket_api_default_handler, this));
}

std::pair<Pistache::Http::Code, std::string> ItemPocketApi::handleParsingException(const std::exception& ex) const noexcept
{
    try {
        throw;
    } catch (nlohmann::detail::exception &e) {
        return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
    } catch (org::openapitools::server::helpers::ValidationException &e) {
        return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
    } catch (std::exception &e) {
        return std::make_pair(Pistache::Http::Code::Internal_Server_Error, e.what());
    }
}

std::pair<Pistache::Http::Code, std::string> ItemPocketApi::handleOperationException(const std::exception& ex) const noexcept
{
    return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void ItemPocketApi::item_pocket_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the query params
    auto limitQuery = request.query().get("limit");
    std::optional<int32_t> limit;
    if(limitQuery.has_value()){
        int32_t valueQuery_instance;
        if(fromStringValue(limitQuery.value(), valueQuery_instance)){
            limit = valueQuery_instance;
        }
    }
    auto offsetQuery = request.query().get("offset");
    std::optional<int32_t> offset;
    if(offsetQuery.has_value()){
        int32_t valueQuery_instance;
        if(fromStringValue(offsetQuery.value(), valueQuery_instance)){
            offset = valueQuery_instance;
        }
    }
    
    try {
        this->item_pocket_list(limit, offset, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void ItemPocketApi::item_pocket_read_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto id = request.param(":id").as<int32_t>();
    
    try {
        this->item_pocket_read(id, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}

void ItemPocketApi::item_pocket_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

} // namespace org::openapitools::server::api

