# MoveApi

All URIs are relative to *https://pokeapi.co*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MoveList**](MoveApi.md#MoveList) | **GET** /api/v2/move/ | 
[**MoveRead**](MoveApi.md#MoveRead) | **GET** /api/v2/move/{id}/ | 


# **MoveList**
> character MoveList(limit = var.limit, offset = var.offset)



### Example
```R
library(openapi)

var_limit <- 56 # integer | 
var_offset <- 56 # integer | 

api_instance <- MoveApi$new()
result <- api_instance$MoveList(limit = var_limit, offset = var_offset)
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

# **MoveRead**
> character MoveRead(id)



### Example
```R
library(openapi)

var_id <- 56 # integer | 

api_instance <- MoveApi$new()
result <- api_instance$MoveRead(var_id)
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

