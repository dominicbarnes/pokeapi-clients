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

#include "MoveAilmentApi.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

MoveAilmentApiException::MoveAilmentApiException(int status_code, std::string what)
  : m_status(status_code),
    m_what(what)
{

}
int MoveAilmentApiException::getStatus() const
{
    return m_status;
}
const char* MoveAilmentApiException::what() const noexcept
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

MoveAilmentApiApiV2Move-ailmentResource::MoveAilmentApiApiV2Move-ailmentResource(const std::string& context /* = "" */)
{
	this->set_path(context + "/api/v2/move-ailment//");
	this->set_method_handler("GET",
		std::bind(&MoveAilmentApiApiV2Move-ailmentResource::handler_GET_internal, this,
			std::placeholders::_1));
}

MoveAilmentApiApiV2Move-ailmentResource::~MoveAilmentApiApiV2Move-ailmentResource()
{
}

std::pair<int, std::string> MoveAilmentApiApiV2Move-ailmentResource::handleMoveAilmentApiException(const MoveAilmentApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> MoveAilmentApiApiV2Move-ailmentResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> MoveAilmentApiApiV2Move-ailmentResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void MoveAilmentApiApiV2Move-ailmentResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void MoveAilmentApiApiV2Move-ailmentResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void MoveAilmentApiApiV2Move-ailmentResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void MoveAilmentApiApiV2Move-ailmentResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
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
    catch(const MoveAilmentApiException& e) {
        std::tie(status_code, result) = handleMoveAilmentApiException(e);
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


std::pair<int, std::string> MoveAilmentApiApiV2Move-ailmentResource::handler_GET(
        int32_t const & limit, int32_t const & offset)
{
    throw MoveAilmentApiException(501, "Not implemented");
}


std::string MoveAilmentApiApiV2Move-ailmentResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
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
MoveAilmentApiApiV2Move-ailmentIdResource::MoveAilmentApiApiV2Move-ailmentIdResource(const std::string& context /* = "" */)
{
	this->set_path(context + "/api/v2/move-ailment/{id: .*}//");
	this->set_method_handler("GET",
		std::bind(&MoveAilmentApiApiV2Move-ailmentIdResource::handler_GET_internal, this,
			std::placeholders::_1));
}

MoveAilmentApiApiV2Move-ailmentIdResource::~MoveAilmentApiApiV2Move-ailmentIdResource()
{
}

std::pair<int, std::string> MoveAilmentApiApiV2Move-ailmentIdResource::handleMoveAilmentApiException(const MoveAilmentApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> MoveAilmentApiApiV2Move-ailmentIdResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> MoveAilmentApiApiV2Move-ailmentIdResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void MoveAilmentApiApiV2Move-ailmentIdResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void MoveAilmentApiApiV2Move-ailmentIdResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void MoveAilmentApiApiV2Move-ailmentIdResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void MoveAilmentApiApiV2Move-ailmentIdResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
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
    catch(const MoveAilmentApiException& e) {
        std::tie(status_code, result) = handleMoveAilmentApiException(e);
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


std::pair<int, std::string> MoveAilmentApiApiV2Move-ailmentIdResource::handler_GET(
        int32_t const & id)
{
    throw MoveAilmentApiException(501, "Not implemented");
}


std::string MoveAilmentApiApiV2Move-ailmentIdResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
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

MoveAilmentApi::MoveAilmentApi(std::shared_ptr<restbed::Service> const& restbedService)
: m_service(restbedService)
{
}

MoveAilmentApi::~MoveAilmentApi() {}

void MoveAilmentApi::setMoveAilmentApiApiV2Move-ailmentResource(std::shared_ptr<MoveAilmentApiApiV2Move-ailmentResource> spMoveAilmentApiApiV2Move-ailmentResource) {
    m_spMoveAilmentApiApiV2Move-ailmentResource = spMoveAilmentApiApiV2Move-ailmentResource;
    m_service->publish(m_spMoveAilmentApiApiV2Move-ailmentResource);
}
void MoveAilmentApi::setMoveAilmentApiApiV2Move-ailmentIdResource(std::shared_ptr<MoveAilmentApiApiV2Move-ailmentIdResource> spMoveAilmentApiApiV2Move-ailmentIdResource) {
    m_spMoveAilmentApiApiV2Move-ailmentIdResource = spMoveAilmentApiApiV2Move-ailmentIdResource;
    m_service->publish(m_spMoveAilmentApiApiV2Move-ailmentIdResource);
}


void MoveAilmentApi::publishDefaultResources() {
    if (!m_spMoveAilmentApiApiV2Move-ailmentResource) {
        setMoveAilmentApiApiV2Move-ailmentResource(std::make_shared<MoveAilmentApiApiV2Move-ailmentResource>());
    }
    if (!m_spMoveAilmentApiApiV2Move-ailmentIdResource) {
        setMoveAilmentApiApiV2Move-ailmentIdResource(std::make_shared<MoveAilmentApiApiV2Move-ailmentIdResource>());
    }
}

std::shared_ptr<restbed::Service> MoveAilmentApi::service() {
    return m_service;
}


}
}
}
}

