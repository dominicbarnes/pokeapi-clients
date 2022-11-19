# OpenAPI\Server\Api\ItemPocketApiInterface

All URIs are relative to *https://pokeapi.co*

Method | HTTP request | Description
------------- | ------------- | -------------
[**itemPocketList**](ItemPocketApiInterface.md#itemPocketList) | **GET** /api/v2/item-pocket/ | 
[**itemPocketRead**](ItemPocketApiInterface.md#itemPocketRead) | **GET** /api/v2/item-pocket/{id}/ | 


## Service Declaration
```yaml
# config/services.yaml
services:
    # ...
    Acme\MyBundle\Api\ItemPocketApi:
        tags:
            - { name: "open_api_server.api", api: "itemPocket" }
    # ...
```

## **itemPocketList**
> string itemPocketList($limit, $offset)



### Example Implementation
```php
<?php
// src/Acme/MyBundle/Api/ItemPocketApiInterface.php

namespace Acme\MyBundle\Api;

use OpenAPI\Server\Api\ItemPocketApiInterface;

class ItemPocketApi implements ItemPocketApiInterface
{

    // ...

    /**
     * Implementation of ItemPocketApiInterface#itemPocketList
     */
    public function itemPocketList(?int $limit, ?int $offset, int &$responseCode, array &$responseHeaders): array|object|null
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

## **itemPocketRead**
> string itemPocketRead($id)



### Example Implementation
```php
<?php
// src/Acme/MyBundle/Api/ItemPocketApiInterface.php

namespace Acme\MyBundle\Api;

use OpenAPI\Server\Api\ItemPocketApiInterface;

class ItemPocketApi implements ItemPocketApiInterface
{

    // ...

    /**
     * Implementation of ItemPocketApiInterface#itemPocketRead
     */
    public function itemPocketRead(int $id, int &$responseCode, array &$responseHeaders): array|object|null
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

