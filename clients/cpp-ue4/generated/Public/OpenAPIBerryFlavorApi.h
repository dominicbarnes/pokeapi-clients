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

class OPENAPI_API OpenAPIBerryFlavorApi
{
public:
	OpenAPIBerryFlavorApi();
	~OpenAPIBerryFlavorApi();

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

	class BerryFlavorListRequest;
	class BerryFlavorListResponse;
	class BerryFlavorReadRequest;
	class BerryFlavorReadResponse;
	
    DECLARE_DELEGATE_OneParam(FBerryFlavorListDelegate, const BerryFlavorListResponse&);
    DECLARE_DELEGATE_OneParam(FBerryFlavorReadDelegate, const BerryFlavorReadResponse&);
    
    FHttpRequestPtr BerryFlavorList(const BerryFlavorListRequest& Request, const FBerryFlavorListDelegate& Delegate = FBerryFlavorListDelegate()) const;
    FHttpRequestPtr BerryFlavorRead(const BerryFlavorReadRequest& Request, const FBerryFlavorReadDelegate& Delegate = FBerryFlavorReadDelegate()) const;
    
private:
    void OnBerryFlavorListResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBerryFlavorListDelegate Delegate) const;
    void OnBerryFlavorReadResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBerryFlavorReadDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
