/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 20220523
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPILocationApi.h"


namespace OpenAPI
{

/* 

*/
class OPENAPI_API OpenAPILocationApi::LocationListRequest : public Request
{
public:
    virtual ~LocationListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	TOptional<int32> Limit;
	TOptional<int32> Offset;
};

class OPENAPI_API OpenAPILocationApi::LocationListResponse : public Response
{
public:
    virtual ~LocationListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    FString Content;
};

/* 

*/
class OPENAPI_API OpenAPILocationApi::LocationReadRequest : public Request
{
public:
    virtual ~LocationReadRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	int32 Id = 0;
};

class OPENAPI_API OpenAPILocationApi::LocationReadResponse : public Response
{
public:
    virtual ~LocationReadResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    FString Content;
};

}
