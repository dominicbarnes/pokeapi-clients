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
#include "OpenAPIMoveBattleStyleApi.h"


namespace OpenAPI
{

/* 

*/
class OPENAPI_API OpenAPIMoveBattleStyleApi::MoveBattleStyleListRequest : public Request
{
public:
    virtual ~MoveBattleStyleListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	TOptional<int32> Limit;
	TOptional<int32> Offset;
};

class OPENAPI_API OpenAPIMoveBattleStyleApi::MoveBattleStyleListResponse : public Response
{
public:
    virtual ~MoveBattleStyleListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    FString Content;
};

/* 

*/
class OPENAPI_API OpenAPIMoveBattleStyleApi::MoveBattleStyleReadRequest : public Request
{
public:
    virtual ~MoveBattleStyleReadRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	int32 Id = 0;
};

class OPENAPI_API OpenAPIMoveBattleStyleApi::MoveBattleStyleReadResponse : public Response
{
public:
    virtual ~MoveBattleStyleReadResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    FString Content;
};

}
