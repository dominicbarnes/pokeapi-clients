<a name="__pageTop"></a>
# pokeapiclient.apis.tags.version_api.VersionApi

All URIs are relative to *https://pokeapi.co*

Method | HTTP request | Description
------------- | ------------- | -------------
[**version_list**](#version_list) | **get** /api/v2/version/ | 
[**version_read**](#version_read) | **get** /api/v2/version/{id}/ | 

# **version_list**
<a name="version_list"></a>
> str version_list()



### Example

```python
import pokeapiclient
from pokeapiclient.apis.tags import version_api
from pprint import pprint
# Defining the host is optional and defaults to https://pokeapi.co
# See configuration.py for a list of all supported configuration parameters.
configuration = pokeapiclient.Configuration(
    host = "https://pokeapi.co"
)

# Enter a context with an instance of the API client
with pokeapiclient.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = version_api.VersionApi(api_client)

    # example passing only optional values
    query_params = {
        'limit': 1,
        'offset': 1,
    }
    try:
        api_response = api_instance.version_list(
            query_params=query_params,
        )
        pprint(api_response)
    except pokeapiclient.ApiException as e:
        print("Exception when calling VersionApi->version_list: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
query_params | RequestQueryParams | |
accept_content_types | typing.Tuple[str] | default is ('text/plain', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### query_params
#### RequestQueryParams

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
limit | LimitSchema | | optional
offset | OffsetSchema | | optional


# LimitSchema

Number of results to return per page.

## Model Type Info
Input Type | Accessed Type | Description | Notes
------------ | ------------- | ------------- | -------------
decimal.Decimal, int,  | decimal.Decimal,  | Number of results to return per page. | 

# OffsetSchema

The initial index from which to return the results.

## Model Type Info
Input Type | Accessed Type | Description | Notes
------------ | ------------- | ------------- | -------------
decimal.Decimal, int,  | decimal.Decimal,  | The initial index from which to return the results. | 

### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
default | [ApiResponseForDefault](#version_list.ApiResponseForDefault) | Default response

#### version_list.ApiResponseForDefault
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor0ResponseBodyTextPlain, ] |  |
headers | Unset | headers were not defined |

# SchemaFor0ResponseBodyTextPlain

## Model Type Info
Input Type | Accessed Type | Description | Notes
------------ | ------------- | ------------- | -------------
str,  | str,  |  | 

### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **version_read**
<a name="version_read"></a>
> str version_read(id)



### Example

```python
import pokeapiclient
from pokeapiclient.apis.tags import version_api
from pprint import pprint
# Defining the host is optional and defaults to https://pokeapi.co
# See configuration.py for a list of all supported configuration parameters.
configuration = pokeapiclient.Configuration(
    host = "https://pokeapi.co"
)

# Enter a context with an instance of the API client
with pokeapiclient.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = version_api.VersionApi(api_client)

    # example passing only required values which don't have defaults set
    path_params = {
        'id': 1,
    }
    try:
        api_response = api_instance.version_read(
            path_params=path_params,
        )
        pprint(api_response)
    except pokeapiclient.ApiException as e:
        print("Exception when calling VersionApi->version_read: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
path_params | RequestPathParams | |
accept_content_types | typing.Tuple[str] | default is ('text/plain', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### path_params
#### RequestPathParams

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
id | IdSchema | | 

# IdSchema

A unique integer value identifying this version.

## Model Type Info
Input Type | Accessed Type | Description | Notes
------------ | ------------- | ------------- | -------------
decimal.Decimal, int,  | decimal.Decimal,  | A unique integer value identifying this version. | 

### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
default | [ApiResponseForDefault](#version_read.ApiResponseForDefault) | Default response

#### version_read.ApiResponseForDefault
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor0ResponseBodyTextPlain, ] |  |
headers | Unset | headers were not defined |

# SchemaFor0ResponseBodyTextPlain

## Model Type Info
Input Type | Accessed Type | Description | Notes
------------ | ------------- | ------------- | -------------
str,  | str,  |  | 

### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

