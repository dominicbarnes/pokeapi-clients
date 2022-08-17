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

class OPENAPI_API OpenAPIEvolutionTriggerApi
{
public:
	OpenAPIEvolutionTriggerApi();
	~OpenAPIEvolutionTriggerApi();

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

	class EvolutionTriggerListRequest;
	class EvolutionTriggerListResponse;
	class EvolutionTriggerReadRequest;
	class EvolutionTriggerReadResponse;
	
    DECLARE_DELEGATE_OneParam(FEvolutionTriggerListDelegate, const EvolutionTriggerListResponse&);
    DECLARE_DELEGATE_OneParam(FEvolutionTriggerReadDelegate, const EvolutionTriggerReadResponse&);
    
    FHttpRequestPtr EvolutionTriggerList(const EvolutionTriggerListRequest& Request, const FEvolutionTriggerListDelegate& Delegate = FEvolutionTriggerListDelegate()) const;
    FHttpRequestPtr EvolutionTriggerRead(const EvolutionTriggerReadRequest& Request, const FEvolutionTriggerReadDelegate& Delegate = FEvolutionTriggerReadDelegate()) const;
    
private:
    void OnEvolutionTriggerListResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FEvolutionTriggerListDelegate Delegate) const;
    void OnEvolutionTriggerReadResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FEvolutionTriggerReadDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
