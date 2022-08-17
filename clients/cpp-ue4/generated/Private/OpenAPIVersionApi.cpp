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

#include "OpenAPIVersionApi.h"

#include "OpenAPIVersionApiOperations.h"
#include "OpenAPIModule.h"

#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace OpenAPI
{

OpenAPIVersionApi::OpenAPIVersionApi()
: Url(TEXT("https://pokeapi.co"))
{
}

OpenAPIVersionApi::~OpenAPIVersionApi() {}

void OpenAPIVersionApi::SetURL(const FString& InUrl)
{
	Url = InUrl;
}

void OpenAPIVersionApi::AddHeaderParam(const FString& Key, const FString& Value)
{
	AdditionalHeaderParams.Add(Key, Value);
}

void OpenAPIVersionApi::ClearHeaderParams()
{
	AdditionalHeaderParams.Reset();
}

bool OpenAPIVersionApi::IsValid() const
{
	if (Url.IsEmpty())
	{
		UE_LOG(LogOpenAPI, Error, TEXT("OpenAPIVersionApi: Endpoint Url is not set, request cannot be performed"));
		return false;
	}

	return true;
}

void OpenAPIVersionApi::SetHttpRetryManager(FHttpRetrySystem::FManager& InRetryManager)
{
	if(RetryManager != &GetHttpRetryManager())
	{
		DefaultRetryManager.Reset();
		RetryManager = &InRetryManager;
	}
}

FHttpRetrySystem::FManager& OpenAPIVersionApi::GetHttpRetryManager()
{
	checkf(RetryManager, TEXT("OpenAPIVersionApi: RetryManager is null.  You may have meant to set it with SetHttpRetryManager first, or you may not be using a custom RetryManager at all."))
	return *RetryManager;
}

FHttpRequestRef OpenAPIVersionApi::CreateHttpRequest(const Request& Request) const
{
	if (!Request.GetRetryParams().IsSet())
	{
		return FHttpModule::Get().CreateRequest();
	}
	else
	{
		if (!RetryManager)
		{
			// Create default retry manager if none was specified
			DefaultRetryManager = MakeUnique<HttpRetryManager>(6, 60);
			RetryManager = DefaultRetryManager.Get();
		}

		const HttpRetryParams& Params = Request.GetRetryParams().GetValue();
		return RetryManager->CreateRequest(Params.RetryLimitCountOverride, Params.RetryTimeoutRelativeSecondsOverride, Params.RetryResponseCodes, Params.RetryVerbs, Params.RetryDomains);
	}
}

void OpenAPIVersionApi::HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const
{
	InOutResponse.SetHttpResponse(HttpResponse);
	InOutResponse.SetSuccessful(bSucceeded);

	if (bSucceeded && HttpResponse.IsValid())
	{
		InOutResponse.SetHttpResponseCode((EHttpResponseCodes::Type)HttpResponse->GetResponseCode());
		FString ContentType = HttpResponse->GetContentType();
		FString Content;

		if (ContentType.IsEmpty())
		{
			return; // Nothing to parse
		}
		else if (ContentType.StartsWith(TEXT("application/json")) || ContentType.StartsWith("text/json"))
		{
			Content = HttpResponse->GetContentAsString();

			TSharedPtr<FJsonValue> JsonValue;
			auto Reader = TJsonReaderFactory<>::Create(Content);

			if (FJsonSerializer::Deserialize(Reader, JsonValue) && JsonValue.IsValid())
			{
				if (InOutResponse.FromJson(JsonValue))
					return; // Successfully parsed
			}
		}
		else if(ContentType.StartsWith(TEXT("text/plain")))
		{
			Content = HttpResponse->GetContentAsString();
			InOutResponse.SetResponseString(Content);
			return; // Successfully parsed
		}

		// Report the parse error but do not mark the request as unsuccessful. Data could be partial or malformed, but the request succeeded.
		UE_LOG(LogOpenAPI, Error, TEXT("Failed to deserialize Http response content (type:%s):\n%s"), *ContentType , *Content);
		return;
	}

	// By default, assume we failed to establish connection
	InOutResponse.SetHttpResponseCode(EHttpResponseCodes::RequestTimeout);
}

FHttpRequestPtr OpenAPIVersionApi::VersionList(const VersionListRequest& Request, const FVersionListDelegate& Delegate /*= FVersionListDelegate()*/) const
{
	if (!IsValid())
		return nullptr;

	FHttpRequestRef HttpRequest = CreateHttpRequest(Request);
	HttpRequest->SetURL(*(Url + Request.ComputePath()));

	for(const auto& It : AdditionalHeaderParams)
	{
		HttpRequest->SetHeader(It.Key, It.Value);
	}

	Request.SetupHttpRequest(HttpRequest);

	HttpRequest->OnProcessRequestComplete().BindRaw(this, &OpenAPIVersionApi::OnVersionListResponse, Delegate);
	HttpRequest->ProcessRequest();
	return HttpRequest;
}

void OpenAPIVersionApi::OnVersionListResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FVersionListDelegate Delegate) const
{
	VersionListResponse Response;
	HandleResponse(HttpResponse, bSucceeded, Response);
	Delegate.ExecuteIfBound(Response);
}

FHttpRequestPtr OpenAPIVersionApi::VersionRead(const VersionReadRequest& Request, const FVersionReadDelegate& Delegate /*= FVersionReadDelegate()*/) const
{
	if (!IsValid())
		return nullptr;

	FHttpRequestRef HttpRequest = CreateHttpRequest(Request);
	HttpRequest->SetURL(*(Url + Request.ComputePath()));

	for(const auto& It : AdditionalHeaderParams)
	{
		HttpRequest->SetHeader(It.Key, It.Value);
	}

	Request.SetupHttpRequest(HttpRequest);

	HttpRequest->OnProcessRequestComplete().BindRaw(this, &OpenAPIVersionApi::OnVersionReadResponse, Delegate);
	HttpRequest->ProcessRequest();
	return HttpRequest;
}

void OpenAPIVersionApi::OnVersionReadResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FVersionReadDelegate Delegate) const
{
	VersionReadResponse Response;
	HandleResponse(HttpResponse, bSucceeded, Response);
	Delegate.ExecuteIfBound(Response);
}

}
