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

#include "OpenAPIPokemonApi.h"

#include "OpenAPIPokemonApiOperations.h"
#include "OpenAPIModule.h"

#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace OpenAPI
{

OpenAPIPokemonApi::OpenAPIPokemonApi()
: Url(TEXT("https://pokeapi.co"))
{
}

OpenAPIPokemonApi::~OpenAPIPokemonApi() {}

void OpenAPIPokemonApi::SetURL(const FString& InUrl)
{
	Url = InUrl;
}

void OpenAPIPokemonApi::AddHeaderParam(const FString& Key, const FString& Value)
{
	AdditionalHeaderParams.Add(Key, Value);
}

void OpenAPIPokemonApi::ClearHeaderParams()
{
	AdditionalHeaderParams.Reset();
}

bool OpenAPIPokemonApi::IsValid() const
{
	if (Url.IsEmpty())
	{
		UE_LOG(LogOpenAPI, Error, TEXT("OpenAPIPokemonApi: Endpoint Url is not set, request cannot be performed"));
		return false;
	}

	return true;
}

void OpenAPIPokemonApi::SetHttpRetryManager(FHttpRetrySystem::FManager& InRetryManager)
{
	if(RetryManager != &GetHttpRetryManager())
	{
		DefaultRetryManager.Reset();
		RetryManager = &InRetryManager;
	}
}

FHttpRetrySystem::FManager& OpenAPIPokemonApi::GetHttpRetryManager()
{
	checkf(RetryManager, TEXT("OpenAPIPokemonApi: RetryManager is null.  You may have meant to set it with SetHttpRetryManager first, or you may not be using a custom RetryManager at all."))
	return *RetryManager;
}

FHttpRequestRef OpenAPIPokemonApi::CreateHttpRequest(const Request& Request) const
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

void OpenAPIPokemonApi::HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const
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

FHttpRequestPtr OpenAPIPokemonApi::PokemonList(const PokemonListRequest& Request, const FPokemonListDelegate& Delegate /*= FPokemonListDelegate()*/) const
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

	HttpRequest->OnProcessRequestComplete().BindRaw(this, &OpenAPIPokemonApi::OnPokemonListResponse, Delegate);
	HttpRequest->ProcessRequest();
	return HttpRequest;
}

void OpenAPIPokemonApi::OnPokemonListResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FPokemonListDelegate Delegate) const
{
	PokemonListResponse Response;
	HandleResponse(HttpResponse, bSucceeded, Response);
	Delegate.ExecuteIfBound(Response);
}

FHttpRequestPtr OpenAPIPokemonApi::PokemonRead(const PokemonReadRequest& Request, const FPokemonReadDelegate& Delegate /*= FPokemonReadDelegate()*/) const
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

	HttpRequest->OnProcessRequestComplete().BindRaw(this, &OpenAPIPokemonApi::OnPokemonReadResponse, Delegate);
	HttpRequest->ProcessRequest();
	return HttpRequest;
}

void OpenAPIPokemonApi::OnPokemonReadResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FPokemonReadDelegate Delegate) const
{
	PokemonReadResponse Response;
	HandleResponse(HttpResponse, bSucceeded, Response);
	Delegate.ExecuteIfBound(Response);
}

}
