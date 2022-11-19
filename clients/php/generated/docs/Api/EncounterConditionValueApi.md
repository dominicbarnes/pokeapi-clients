# OpenAPI\Client\EncounterConditionValueApi

All URIs are relative to https://pokeapi.co, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**encounterConditionValueList()**](EncounterConditionValueApi.md#encounterConditionValueList) | **GET** /api/v2/encounter-condition-value/ |  |
| [**encounterConditionValueRead()**](EncounterConditionValueApi.md#encounterConditionValueRead) | **GET** /api/v2/encounter-condition-value/{id}/ |  |


## `encounterConditionValueList()`

```php
encounterConditionValueList($limit, $offset): string
```



### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



$apiInstance = new OpenAPI\Client\Api\EncounterConditionValueApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$limit = 56; // int
$offset = 56; // int

try {
    $result = $apiInstance->encounterConditionValueList($limit, $offset);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling EncounterConditionValueApi->encounterConditionValueList: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **limit** | **int**|  | [optional] |
| **offset** | **int**|  | [optional] |

### Return type

**string**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `text/plain`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `encounterConditionValueRead()`

```php
encounterConditionValueRead($id): string
```



### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



$apiInstance = new OpenAPI\Client\Api\EncounterConditionValueApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$id = 56; // int

try {
    $result = $apiInstance->encounterConditionValueRead($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling EncounterConditionValueApi->encounterConditionValueRead: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **int**|  | |

### Return type

**string**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `text/plain`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
