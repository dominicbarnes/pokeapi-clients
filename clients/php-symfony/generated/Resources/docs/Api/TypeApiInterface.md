# OpenAPI\Server\Api\TypeApiInterface

All URIs are relative to *https://pokeapi.co*

Method | HTTP request | Description
------------- | ------------- | -------------
[**typeList**](TypeApiInterface.md#typeList) | **GET** /api/v2/type/ | 
[**typeRead**](TypeApiInterface.md#typeRead) | **GET** /api/v2/type/{id}/ | 


## Service Declaration
```yaml
# config/services.yml
services:
    # ...
    Acme\MyBundle\Api\TypeApi:
        tags:
            - { name: "open_api_server.api", api: "type" }
    # ...
```

## **typeList**
> string typeList($limit, $offset)



### Example Implementation
```php
<?php
// src/Acme/MyBundle/Api/TypeApiInterface.php

namespace Acme\MyBundle\Api;

use OpenAPI\Server\Api\TypeApiInterface;

class TypeApi implements TypeApiInterface
{

    // ...

    /**
     * Implementation of TypeApiInterface#typeList
     */
    public function typeList(?int $limit, ?int $offset, int &$responseCode, array &$responseHeaders): array|object|null
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

## **typeRead**
> string typeRead($id)



### Example Implementation
```php
<?php
// src/Acme/MyBundle/Api/TypeApiInterface.php

namespace Acme\MyBundle\Api;

use OpenAPI\Server\Api\TypeApiInterface;

class TypeApi implements TypeApiInterface
{

    // ...

    /**
     * Implementation of TypeApiInterface#typeRead
     */
    public function typeRead(int $id, int &$responseCode, array &$responseHeaders): array|object|null
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

