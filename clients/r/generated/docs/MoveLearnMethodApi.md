# MoveLearnMethodApi

All URIs are relative to *https://pokeapi.co*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MoveLearnMethodList**](MoveLearnMethodApi.md#MoveLearnMethodList) | **GET** /api/v2/move-learn-method/ | 
[**MoveLearnMethodRead**](MoveLearnMethodApi.md#MoveLearnMethodRead) | **GET** /api/v2/move-learn-method/{id}/ | 


# **MoveLearnMethodList**
> character MoveLearnMethodList(limit = var.limit, offset = var.offset)



### Example
```R
library(openapi)

var_limit <- 56 # integer | 
var_offset <- 56 # integer | 

api_instance <- MoveLearnMethodApi$new()
result <- api_instance$MoveLearnMethodList(limit = var_limit, offset = var_offset)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **integer**|  | [optional] 
 **offset** | **integer**|  | [optional] 

### Return type

**character**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **0** | Default response |  -  |

# **MoveLearnMethodRead**
> character MoveLearnMethodRead(id)



### Example
```R
library(openapi)

var_id <- 56 # integer | 

api_instance <- MoveLearnMethodApi$new()
result <- api_instance$MoveLearnMethodRead(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**|  | 

### Return type

**character**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **0** | Default response |  -  |

