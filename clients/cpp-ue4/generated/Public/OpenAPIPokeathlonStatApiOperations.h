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
#include "OpenAPIPokeathlonStatApi.h"


namespace OpenAPI
{

/* 

*/
class OPENAPI_API OpenAPIPokeathlonStatApi::PokeathlonStatListRequest : public Request
{
public:
    virtual ~PokeathlonStatListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	TOptional<int32> Limit;
	TOptional<int32> Offset;
};

class OPENAPI_API OpenAPIPokeathlonStatApi::PokeathlonStatListResponse : public Response
{
public:
    virtual ~PokeathlonStatListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    FString Content;
};

/* 

*/
class OPENAPI_API OpenAPIPokeathlonStatApi::PokeathlonStatReadRequest : public Request
{
public:
    virtual ~PokeathlonStatReadRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	int32 Id = 0;
};

class OPENAPI_API OpenAPIPokeathlonStatApi::PokeathlonStatReadResponse : public Response
{
public:
    virtual ~PokeathlonStatReadResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    FString Content;
};

}
