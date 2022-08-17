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

#include "CoreMinimal.h"
#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

class OPENAPI_API OpenAPIGenerationApi
{
public:
	OpenAPIGenerationApi();
	~OpenAPIGenerationApi();

	/* Sets the URL Endpoint.
	* Note: several fallback endpoints can be configured in request retry policies, see Request::SetShouldRetry */
	void SetURL(const FString& Url);

	/* Adds global header params to all requests */
	void AddHeaderParam(const FString& Key, const FString& Value);
	void ClearHeaderParams();

	/* Sets the retry manager to the user-defined retry manager. User must manage the lifetime of the retry manager.
	* If no retry manager is specified and a request needs retries, a default retry manager will be used.
	* See also: Request::SetShouldRetry */
	void SetHttpRetryManager(FHttpRetrySystem::FManager& RetryManager);
	FHttpRetrySystem::FManager& GetHttpRetryManager();

	class GenerationListRequest;
	class GenerationListResponse;
	class GenerationReadRequest;
	class GenerationReadResponse;
	
    DECLARE_DELEGATE_OneParam(FGenerationListDelegate, const GenerationListResponse&);
    DECLARE_DELEGATE_OneParam(FGenerationReadDelegate, const GenerationReadResponse&);
    
    FHttpRequestPtr GenerationList(const GenerationListRequest& Request, const FGenerationListDelegate& Delegate = FGenerationListDelegate()) const;
    FHttpRequestPtr GenerationRead(const GenerationReadRequest& Request, const FGenerationReadDelegate& Delegate = FGenerationReadDelegate()) const;
    
private:
    void OnGenerationListResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGenerationListDelegate Delegate) const;
    void OnGenerationReadResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGenerationReadDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
