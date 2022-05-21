/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include <corvusoft/restbed/byte.hpp>
#include <corvusoft/restbed/string.hpp>
#include <corvusoft/restbed/settings.hpp>
#include <corvusoft/restbed/request.hpp>
#include <corvusoft/restbed/uri.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>

#include "BerryApi.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

BerryApiException::BerryApiException(int status_code, std::string what)
  : m_status(status_code),
    m_what(what)
{

}
int BerryApiException::getStatus() const
{
    return m_status;
}
const char* BerryApiException::what() const noexcept
{
    return m_what.c_str();
}


template<class MODEL_T>
std::shared_ptr<MODEL_T> extractJsonModelBodyParam(const std::string& bodyContent)
{
    std::stringstream sstream(bodyContent);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream, pt);

    auto model = std::make_shared<MODEL_T>(pt);
    return model;
}

template<class MODEL_T>
std::vector<std::shared_ptr<MODEL_T>> extractJsonArrayBodyParam(const std::string& bodyContent)
{
    std::stringstream sstream(bodyContent);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream, pt);

    auto arrayRet = std::vector<std::shared_ptr<MODEL_T>>();
    for (const auto& child: pt) {
        arrayRet.emplace_back(std::make_shared<MODEL_T>(child.second));
    }
    return arrayRet;
}

template <class KEY_T, class VAL_T>
std::string convertMapResponse(const std::map<KEY_T, VAL_T>& map)
{
    boost::property_tree::ptree pt;
    for(const auto &kv: map) {
    pt.push_back(boost::property_tree::ptree::value_type(
        boost::lexical_cast<std::string>(kv.first),
        boost::property_tree::ptree(
        boost::lexical_cast<std::string>(kv.second))));
    }
    std::stringstream sstream;
    write_json(sstream, pt);
    std::string result = sstream.str();
    return result;
}

BerryApiApiV2BerryResource::BerryApiApiV2BerryResource(const std::string& context /* = "" */)
{
	this->set_path(context + "/api/v2/berry//");
	this->set_method_handler("GET",
		std::bind(&BerryApiApiV2BerryResource::handler_GET_internal, this,
			std::placeholders::_1));
}

BerryApiApiV2BerryResource::~BerryApiApiV2BerryResource()
{
}

std::pair<int, std::string> BerryApiApiV2BerryResource::handleBerryApiException(const BerryApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> BerryApiApiV2BerryResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> BerryApiApiV2BerryResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void BerryApiApiV2BerryResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void BerryApiApiV2BerryResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void BerryApiApiV2BerryResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void BerryApiApiV2BerryResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
{
    const auto request = session->get_request();


    // Getting the query params
    const int32_t limit = getQueryParam_limit(request);
    const int32_t offset = getQueryParam_offset(request);


    int status_code = 500;
    std::string resultObject = "";
    std::string result = "";

    try {
        std::tie(status_code, resultObject) =
             handler_GET(limit, offset);
    }
    catch(const BerryApiException& e) {
        std::tie(status_code, result) = handleBerryApiException(e);
    }
    catch(const std::exception& e) {
        std::tie(status_code, result) = handleStdException(e);
    }
    catch(...) {
        std::tie(status_code, result) = handleUnspecifiedException();
    }

    if (status_code == 0) {
        result = resultObject;

        const constexpr auto contentType = "application/json";
        returnResponse(session, 0, result.empty() ? "Default response" : result, contentType);
        return;
    }
    defaultSessionClose(session, status_code, result);
}


std::pair<int, std::string> BerryApiApiV2BerryResource::handler_GET(
        int32_t const & limit, int32_t const & offset)
{
    throw BerryApiException(501, "Not implemented");
}


std::string BerryApiApiV2BerryResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
  const auto request = session->get_request();
  int content_length = request->get_header("Content-Length", 0);
  std::string bodyContent;
  session->fetch(content_length,
                 [&bodyContent](const std::shared_ptr<restbed::Session> session,
                                const restbed::Bytes &body) {
                   bodyContent = restbed::String::format(
                       "%.*s\n", (int)body.size(), body.data());
                 });
  return bodyContent;
}
BerryApiApiV2BerryIdResource::BerryApiApiV2BerryIdResource(const std::string& context /* = "" */)
{
	this->set_path(context + "/api/v2/berry/{id: .*}//");
	this->set_method_handler("GET",
		std::bind(&BerryApiApiV2BerryIdResource::handler_GET_internal, this,
			std::placeholders::_1));
}

BerryApiApiV2BerryIdResource::~BerryApiApiV2BerryIdResource()
{
}

std::pair<int, std::string> BerryApiApiV2BerryIdResource::handleBerryApiException(const BerryApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> BerryApiApiV2BerryIdResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> BerryApiApiV2BerryIdResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void BerryApiApiV2BerryIdResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void BerryApiApiV2BerryIdResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void BerryApiApiV2BerryIdResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void BerryApiApiV2BerryIdResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
{
    const auto request = session->get_request();

    // Getting the path params
    const int32_t id = getPathParam_id(request);



    int status_code = 500;
    std::string resultObject = "";
    std::string result = "";

    try {
        std::tie(status_code, resultObject) =
             handler_GET(id);
    }
    catch(const BerryApiException& e) {
        std::tie(status_code, result) = handleBerryApiException(e);
    }
    catch(const std::exception& e) {
        std::tie(status_code, result) = handleStdException(e);
    }
    catch(...) {
        std::tie(status_code, result) = handleUnspecifiedException();
    }

    if (status_code == 0) {
        result = resultObject;

        const constexpr auto contentType = "application/json";
        returnResponse(session, 0, result.empty() ? "Default response" : result, contentType);
        return;
    }
    defaultSessionClose(session, status_code, result);
}


std::pair<int, std::string> BerryApiApiV2BerryIdResource::handler_GET(
        int32_t const & id)
{
    throw BerryApiException(501, "Not implemented");
}


std::string BerryApiApiV2BerryIdResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
  const auto request = session->get_request();
  int content_length = request->get_header("Content-Length", 0);
  std::string bodyContent;
  session->fetch(content_length,
                 [&bodyContent](const std::shared_ptr<restbed::Session> session,
                                const restbed::Bytes &body) {
                   bodyContent = restbed::String::format(
                       "%.*s\n", (int)body.size(), body.data());
                 });
  return bodyContent;
}

BerryApi::BerryApi(std::shared_ptr<restbed::Service> const& restbedService)
: m_service(restbedService)
{
}

BerryApi::~BerryApi() {}

void BerryApi::setBerryApiApiV2BerryResource(std::shared_ptr<BerryApiApiV2BerryResource> spBerryApiApiV2BerryResource) {
    m_spBerryApiApiV2BerryResource = spBerryApiApiV2BerryResource;
    m_service->publish(m_spBerryApiApiV2BerryResource);
}
void BerryApi::setBerryApiApiV2BerryIdResource(std::shared_ptr<BerryApiApiV2BerryIdResource> spBerryApiApiV2BerryIdResource) {
    m_spBerryApiApiV2BerryIdResource = spBerryApiApiV2BerryIdResource;
    m_service->publish(m_spBerryApiApiV2BerryIdResource);
}


void BerryApi::publishDefaultResources() {
    if (!m_spBerryApiApiV2BerryResource) {
        setBerryApiApiV2BerryResource(std::make_shared<BerryApiApiV2BerryResource>());
    }
    if (!m_spBerryApiApiV2BerryIdResource) {
        setBerryApiApiV2BerryIdResource(std::make_shared<BerryApiApiV2BerryIdResource>());
    }
}

std::shared_ptr<restbed::Service> BerryApi::service() {
    return m_service;
}


}
}
}
}

