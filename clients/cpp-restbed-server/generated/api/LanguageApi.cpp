/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
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

#include "LanguageApi.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

LanguageApiException::LanguageApiException(int status_code, std::string what)
  : m_status(status_code),
    m_what(what)
{

}
int LanguageApiException::getStatus() const
{
    return m_status;
}
const char* LanguageApiException::what() const noexcept
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

LanguageApiApiV2LanguageResource::LanguageApiApiV2LanguageResource(const std::string& context /* = "" */)
{
	this->set_path(context + "/api/v2/language//");
	this->set_method_handler("GET",
		std::bind(&LanguageApiApiV2LanguageResource::handler_GET_internal, this,
			std::placeholders::_1));
}

LanguageApiApiV2LanguageResource::~LanguageApiApiV2LanguageResource()
{
}

std::pair<int, std::string> LanguageApiApiV2LanguageResource::handleLanguageApiException(const LanguageApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> LanguageApiApiV2LanguageResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> LanguageApiApiV2LanguageResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void LanguageApiApiV2LanguageResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void LanguageApiApiV2LanguageResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void LanguageApiApiV2LanguageResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void LanguageApiApiV2LanguageResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
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
    catch(const LanguageApiException& e) {
        std::tie(status_code, result) = handleLanguageApiException(e);
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


std::pair<int, std::string> LanguageApiApiV2LanguageResource::handler_GET(
        int32_t const & limit, int32_t const & offset)
{
    throw LanguageApiException(501, "Not implemented");
}


std::string LanguageApiApiV2LanguageResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
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
LanguageApiApiV2LanguageIdResource::LanguageApiApiV2LanguageIdResource(const std::string& context /* = "" */)
{
	this->set_path(context + "/api/v2/language/{id: .*}//");
	this->set_method_handler("GET",
		std::bind(&LanguageApiApiV2LanguageIdResource::handler_GET_internal, this,
			std::placeholders::_1));
}

LanguageApiApiV2LanguageIdResource::~LanguageApiApiV2LanguageIdResource()
{
}

std::pair<int, std::string> LanguageApiApiV2LanguageIdResource::handleLanguageApiException(const LanguageApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> LanguageApiApiV2LanguageIdResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> LanguageApiApiV2LanguageIdResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void LanguageApiApiV2LanguageIdResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void LanguageApiApiV2LanguageIdResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void LanguageApiApiV2LanguageIdResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void LanguageApiApiV2LanguageIdResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
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
    catch(const LanguageApiException& e) {
        std::tie(status_code, result) = handleLanguageApiException(e);
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


std::pair<int, std::string> LanguageApiApiV2LanguageIdResource::handler_GET(
        int32_t const & id)
{
    throw LanguageApiException(501, "Not implemented");
}


std::string LanguageApiApiV2LanguageIdResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
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

LanguageApi::LanguageApi(std::shared_ptr<restbed::Service> const& restbedService)
: m_service(restbedService)
{
}

LanguageApi::~LanguageApi() {}

void LanguageApi::setLanguageApiApiV2LanguageResource(std::shared_ptr<LanguageApiApiV2LanguageResource> spLanguageApiApiV2LanguageResource) {
    m_spLanguageApiApiV2LanguageResource = spLanguageApiApiV2LanguageResource;
    m_service->publish(m_spLanguageApiApiV2LanguageResource);
}
void LanguageApi::setLanguageApiApiV2LanguageIdResource(std::shared_ptr<LanguageApiApiV2LanguageIdResource> spLanguageApiApiV2LanguageIdResource) {
    m_spLanguageApiApiV2LanguageIdResource = spLanguageApiApiV2LanguageIdResource;
    m_service->publish(m_spLanguageApiApiV2LanguageIdResource);
}


void LanguageApi::publishDefaultResources() {
    if (!m_spLanguageApiApiV2LanguageResource) {
        setLanguageApiApiV2LanguageResource(std::make_shared<LanguageApiApiV2LanguageResource>());
    }
    if (!m_spLanguageApiApiV2LanguageIdResource) {
        setLanguageApiApiV2LanguageIdResource(std::make_shared<LanguageApiApiV2LanguageIdResource>());
    }
}

std::shared_ptr<restbed::Service> LanguageApi::service() {
    return m_service;
}


}
}
}
}

