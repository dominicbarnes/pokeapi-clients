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

#include "OpenAPIItemApi.h"

#include "OpenAPIItemApiOperations.h"
#include "OpenAPIModule.h"

#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace OpenAPI
{

OpenAPIItemApi::OpenAPIItemApi()
: Url(TEXT("https://pokeapi.co"))
{
}

OpenAPIItemApi::~OpenAPIItemApi() {}

void OpenAPIItemApi::SetURL(const FString& InUrl)
{
	Url = InUrl;
}

void OpenAPIItemApi::AddHeaderParam(const FString& Key, const FString& Value)
{
	AdditionalHeaderParams.Add(Key, Value);
}

void OpenAPIItemApi::ClearHeaderParams()
{
	AdditionalHeaderParams.Reset();
}

bool OpenAPIItemApi::IsValid() const
{
	if (Url.IsEmpty())
	{
		UE_LOG(LogOpenAPI, Error, TEXT("OpenAPIItemApi: Endpoint Url is not set, request cannot be performed"));
		return false;
	}

	return true;
}

void OpenAPIItemApi::SetHttpRetryManager(FHttpRetrySystem::FManager& InRetryManager)
{
	if(RetryManager != &GetHttpRetryManager())
	{
		DefaultRetryManager.Reset();
		RetryManager = &InRetryManager;
	}
}

FHttpRetrySystem::FManager& OpenAPIItemApi::GetHttpRetryManager()
{
	checkf(RetryManager, TEXT("OpenAPIItemApi: RetryManager is null.  You may have meant to set it with SetHttpRetryManager first, or you may not be using a custom RetryManager at all."))
	return *RetryManager;
}

FHttpRequestRef OpenAPIItemApi::CreateHttpRequest(const Request& Request) const
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

void OpenAPIItemApi::HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const
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

FHttpRequestPtr OpenAPIItemApi::ItemList(const ItemListRequest& Request, const FItemListDelegate& Delegate /*= FItemListDelegate()*/) const
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

	HttpRequest->OnProcessRequestComplete().BindRaw(this, &OpenAPIItemApi::OnItemListResponse, Delegate);
	HttpRequest->ProcessRequest();
	return HttpRequest;
}

void OpenAPIItemApi::OnItemListResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FItemListDelegate Delegate) const
{
	ItemListResponse Response;
	HandleResponse(HttpResponse, bSucceeded, Response);
	Delegate.ExecuteIfBound(Response);
}

FHttpRequestPtr OpenAPIItemApi::ItemRead(const ItemReadRequest& Request, const FItemReadDelegate& Delegate /*= FItemReadDelegate()*/) const
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

	HttpRequest->OnProcessRequestComplete().BindRaw(this, &OpenAPIItemApi::OnItemReadResponse, Delegate);
	HttpRequest->ProcessRequest();
	return HttpRequest;
}

void OpenAPIItemApi::OnItemReadResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FItemReadDelegate Delegate) const
{
	ItemReadResponse Response;
	HandleResponse(HttpResponse, bSucceeded, Response);
	Delegate.ExecuteIfBound(Response);
}

}
