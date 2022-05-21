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

/*
 * SuperContestEffectApi.h
 *
 * 
 */

#ifndef SuperContestEffectApi_H_
#define SuperContestEffectApi_H_


#include <memory>
#include <utility>
#include <exception>

#include <corvusoft/restbed/session.hpp>
#include <corvusoft/restbed/resource.hpp>
#include <corvusoft/restbed/request.hpp>
#include <corvusoft/restbed/service.hpp>
#include <corvusoft/restbed/settings.hpp>

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

///
/// Exception to flag problems in the handlers
///
class  SuperContestEffectApiException: public std::exception
{
public:
    SuperContestEffectApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  SuperContestEffectApiApiV2Super-contest-effectResource: public restbed::Resource
{
public:
    SuperContestEffectApiApiV2Super-contest-effectResource(const std::string& context = "");
    virtual ~SuperContestEffectApiApiV2Super-contest-effectResource();

protected:
    //////////////////////////////////////////////////////////
    // Override these to implement the server functionality //
    //////////////////////////////////////////////////////////

    virtual std::pair<int, std::string> handler_GET(
        int32_t const & limit, int32_t const & offset);


protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string extractBodyContent(const std::shared_ptr<restbed::Session>& session);

    virtual int32_t getQueryParam_limit(const std::shared_ptr<const restbed::Request>& request)
    {
        return request->get_query_parameter("limit", 0);
    }

    virtual int32_t getQueryParam_offset(const std::shared_ptr<const restbed::Request>& request)
    {
        return request->get_query_parameter("offset", 0);
    }



    virtual std::pair<int, std::string> handleSuperContestEffectApiException(const SuperContestEffectApiException& e);
    virtual std::pair<int, std::string> handleStdException(const std::exception& e);
    virtual std::pair<int, std::string> handleUnspecifiedException();

    virtual void setResponseHeader(const std::shared_ptr<restbed::Session>& session,
        const std::string& header);


    virtual void returnResponse(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result, const std::string& contentType);
    virtual void defaultSessionClose(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result);

private:
    void handler_GET_internal(const std::shared_ptr<restbed::Session> session);
};


/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  SuperContestEffectApiApiV2Super-contest-effectIdResource: public restbed::Resource
{
public:
    SuperContestEffectApiApiV2Super-contest-effectIdResource(const std::string& context = "");
    virtual ~SuperContestEffectApiApiV2Super-contest-effectIdResource();

protected:
    //////////////////////////////////////////////////////////
    // Override these to implement the server functionality //
    //////////////////////////////////////////////////////////

    virtual std::pair<int, std::string> handler_GET(
        int32_t const & id);


protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string extractBodyContent(const std::shared_ptr<restbed::Session>& session);

    virtual int32_t getPathParam_id(const std::shared_ptr<const restbed::Request>& request)
    {
        return request->get_path_parameter("id", 0);
    }



    virtual std::pair<int, std::string> handleSuperContestEffectApiException(const SuperContestEffectApiException& e);
    virtual std::pair<int, std::string> handleStdException(const std::exception& e);
    virtual std::pair<int, std::string> handleUnspecifiedException();

    virtual void setResponseHeader(const std::shared_ptr<restbed::Session>& session,
        const std::string& header);


    virtual void returnResponse(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result, const std::string& contentType);
    virtual void defaultSessionClose(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result);

private:
    void handler_GET_internal(const std::shared_ptr<restbed::Session> session);
};



//
// The restbed service to actually implement the REST server
//
class  SuperContestEffectApi
{
public:
    explicit SuperContestEffectApi(std::shared_ptr<restbed::Service> const& restbedService);
	virtual ~SuperContestEffectApi();

    virtual void setSuperContestEffectApiApiV2Super-contest-effectResource(std::shared_ptr<SuperContestEffectApiApiV2Super-contest-effectResource> spSuperContestEffectApiApiV2Super-contest-effectResource);
    virtual void setSuperContestEffectApiApiV2Super-contest-effectIdResource(std::shared_ptr<SuperContestEffectApiApiV2Super-contest-effectIdResource> spSuperContestEffectApiApiV2Super-contest-effectIdResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
	std::shared_ptr<SuperContestEffectApiApiV2Super-contest-effectResource> m_spSuperContestEffectApiApiV2Super-contest-effectResource;
	std::shared_ptr<SuperContestEffectApiApiV2Super-contest-effectIdResource> m_spSuperContestEffectApiApiV2Super-contest-effectIdResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* SuperContestEffectApi_H_ */

