# ItemCategoryApi

All URIs are relative to *https://pokeapi.co*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**itemCategoryList**](ItemCategoryApi.md#itemCategoryList) | **GET** /api/v2/item-category/ |  |
| [**itemCategoryRead**](ItemCategoryApi.md#itemCategoryRead) | **GET** /api/v2/item-category/{id}/ |  |


<a name="itemCategoryList"></a>
# **itemCategoryList**
> String itemCategoryList(limit, offset)



### Example
```java
// Import classes:
import com.cliffano.pokeapiclient.ApiClient;
import com.cliffano.pokeapiclient.ApiException;
import com.cliffano.pokeapiclient.Configuration;
import com.cliffano.pokeapiclient.models.*;
import com.cliffano.pokeapiclient.api.ItemCategoryApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://pokeapi.co");

    ItemCategoryApi apiInstance = new ItemCategoryApi(defaultClient);
    Integer limit = 56; // Integer | 
    Integer offset = 56; // Integer | 
    try {
      String result = apiInstance.itemCategoryList(limit, offset);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ItemCategoryApi#itemCategoryList");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **limit** | **Integer**|  | [optional] |
| **offset** | **Integer**|  | [optional] |

### Return type

**String**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **0** | Default response |  -  |

<a name="itemCategoryRead"></a>
# **itemCategoryRead**
> String itemCategoryRead(id)



### Example
```java
// Import classes:
import com.cliffano.pokeapiclient.ApiClient;
import com.cliffano.pokeapiclient.ApiException;
import com.cliffano.pokeapiclient.Configuration;
import com.cliffano.pokeapiclient.models.*;
import com.cliffano.pokeapiclient.api.ItemCategoryApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://pokeapi.co");

    ItemCategoryApi apiInstance = new ItemCategoryApi(defaultClient);
    Integer id = 56; // Integer | 
    try {
      String result = apiInstance.itemCategoryRead(id);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ItemCategoryApi#itemCategoryRead");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**|  | |

### Return type

**String**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **0** | Default response |  -  |

