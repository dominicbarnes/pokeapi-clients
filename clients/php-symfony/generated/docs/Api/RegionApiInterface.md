# OpenAPI\Server\Api\RegionApiInterface

All URIs are relative to *https://pokeapi.co*

Method | HTTP request | Description
------------- | ------------- | -------------
[**regionList**](RegionApiInterface.md#regionList) | **GET** /api/v2/region/ | 
[**regionRead**](RegionApiInterface.md#regionRead) | **GET** /api/v2/region/{id}/ | 


## Service Declaration
```yaml
# config/services.yaml
services:
    # ...
    Acme\MyBundle\Api\RegionApi:
        tags:
            - { name: "open_api_server.api", api: "region" }
    # ...
```

## **regionList**
> string regionList($limit, $offset)



### Example Implementation
```php
<?php
// src/Acme/MyBundle/Api/RegionApiInterface.php

namespace Acme\MyBundle\Api;

use OpenAPI\Server\Api\RegionApiInterface;

class RegionApi implements RegionApiInterface
{

    // ...

    /**
     * Implementation of RegionApiInterface#regionList
     */
    public function regionList(?int $limit, ?int $offset, int &$responseCode, array &$responseHeaders): array|object|null
    {
        // Implement the operation ...
    }

    // ...
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **int**|  | [optional]
 **offset** | **int**|  | [optional]

### Return type

**string**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

## **regionRead**
> string regionRead($id)



### Example Implementation
```php
<?php
// src/Acme/MyBundle/Api/RegionApiInterface.php

namespace Acme\MyBundle\Api;

use OpenAPI\Server\Api\RegionApiInterface;

class RegionApi implements RegionApiInterface
{

    // ...

    /**
     * Implementation of RegionApiInterface#regionRead
     */
    public function regionRead(int $id, int &$responseCode, array &$responseHeaders): array|object|null
    {
        // Implement the operation ...
    }

    // ...
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**|  |

### Return type

**string**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

