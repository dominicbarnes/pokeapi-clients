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
#include "OpenAPIItemPocketApi.h"


namespace OpenAPI
{

/* 

*/
class OPENAPI_API OpenAPIItemPocketApi::ItemPocketListRequest : public Request
{
public:
    virtual ~ItemPocketListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	TOptional<int32> Limit;
	TOptional<int32> Offset;
};

class OPENAPI_API OpenAPIItemPocketApi::ItemPocketListResponse : public Response
{
public:
    virtual ~ItemPocketListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    FString Content;
};

/* 

*/
class OPENAPI_API OpenAPIItemPocketApi::ItemPocketReadRequest : public Request
{
public:
    virtual ~ItemPocketReadRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	int32 Id = 0;
};

class OPENAPI_API OpenAPIItemPocketApi::ItemPocketReadResponse : public Response
{
public:
    virtual ~ItemPocketReadResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    FString Content;
};

}
