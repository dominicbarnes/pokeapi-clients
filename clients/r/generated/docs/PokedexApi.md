# PokedexApi

All URIs are relative to *https://pokeapi.co*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PokedexList**](PokedexApi.md#PokedexList) | **GET** /api/v2/pokedex/ | 
[**PokedexRead**](PokedexApi.md#PokedexRead) | **GET** /api/v2/pokedex/{id}/ | 


# **PokedexList**
> character PokedexList(limit = var.limit, offset = var.offset)



### Example
```R
library(openapi)

var_limit <- 56 # integer | 
var_offset <- 56 # integer | 

api_instance <- PokedexApi$new()
result <- api_instance$PokedexList(limit = var_limit, offset = var_offset)
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

# **PokedexRead**
> character PokedexRead(id)



### Example
```R
library(openapi)

var_id <- 56 # integer | 

api_instance <- PokedexApi$new()
result <- api_instance$PokedexRead(var_id)
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

