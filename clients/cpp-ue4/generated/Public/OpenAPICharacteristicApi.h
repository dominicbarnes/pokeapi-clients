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

class OPENAPI_API OpenAPICharacteristicApi
{
public:
	OpenAPICharacteristicApi();
	~OpenAPICharacteristicApi();

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

	class CharacteristicListRequest;
	class CharacteristicListResponse;
	class CharacteristicReadRequest;
	class CharacteristicReadResponse;
	
    DECLARE_DELEGATE_OneParam(FCharacteristicListDelegate, const CharacteristicListResponse&);
    DECLARE_DELEGATE_OneParam(FCharacteristicReadDelegate, const CharacteristicReadResponse&);
    
    FHttpRequestPtr CharacteristicList(const CharacteristicListRequest& Request, const FCharacteristicListDelegate& Delegate = FCharacteristicListDelegate()) const;
    FHttpRequestPtr CharacteristicRead(const CharacteristicReadRequest& Request, const FCharacteristicReadDelegate& Delegate = FCharacteristicReadDelegate()) const;
    
private:
    void OnCharacteristicListResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCharacteristicListDelegate Delegate) const;
    void OnCharacteristicReadResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCharacteristicReadDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
