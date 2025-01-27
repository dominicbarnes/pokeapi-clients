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

class OPENAPI_API OpenAPIPokeathlonStatApi
{
public:
	OpenAPIPokeathlonStatApi();
	~OpenAPIPokeathlonStatApi();

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

	class PokeathlonStatListRequest;
	class PokeathlonStatListResponse;
	class PokeathlonStatReadRequest;
	class PokeathlonStatReadResponse;
	
    DECLARE_DELEGATE_OneParam(FPokeathlonStatListDelegate, const PokeathlonStatListResponse&);
    DECLARE_DELEGATE_OneParam(FPokeathlonStatReadDelegate, const PokeathlonStatReadResponse&);
    
    FHttpRequestPtr PokeathlonStatList(const PokeathlonStatListRequest& Request, const FPokeathlonStatListDelegate& Delegate = FPokeathlonStatListDelegate()) const;
    FHttpRequestPtr PokeathlonStatRead(const PokeathlonStatReadRequest& Request, const FPokeathlonStatReadDelegate& Delegate = FPokeathlonStatReadDelegate()) const;
    
private:
    void OnPokeathlonStatListResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FPokeathlonStatListDelegate Delegate) const;
    void OnPokeathlonStatReadResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FPokeathlonStatReadDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
