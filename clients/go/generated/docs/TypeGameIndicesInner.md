# TypeGameIndicesInner

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**GameIndex** | Pointer to **int32** | The internal id of an api resource within game data. | [optional] 
**Generation** | Pointer to [**TypeGameIndicesInnerGeneration**](TypeGameIndicesInnerGeneration.md) |  | [optional] 

## Methods

### NewTypeGameIndicesInner

`func NewTypeGameIndicesInner() *TypeGameIndicesInner`

NewTypeGameIndicesInner instantiates a new TypeGameIndicesInner object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTypeGameIndicesInnerWithDefaults

`func NewTypeGameIndicesInnerWithDefaults() *TypeGameIndicesInner`

NewTypeGameIndicesInnerWithDefaults instantiates a new TypeGameIndicesInner object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetGameIndex

`func (o *TypeGameIndicesInner) GetGameIndex() int32`

GetGameIndex returns the GameIndex field if non-nil, zero value otherwise.

### GetGameIndexOk

`func (o *TypeGameIndicesInner) GetGameIndexOk() (*int32, bool)`

GetGameIndexOk returns a tuple with the GameIndex field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGameIndex

`func (o *TypeGameIndicesInner) SetGameIndex(v int32)`

SetGameIndex sets GameIndex field to given value.

### HasGameIndex

`func (o *TypeGameIndicesInner) HasGameIndex() bool`

HasGameIndex returns a boolean if a field has been set.

### GetGeneration

`func (o *TypeGameIndicesInner) GetGeneration() TypeGameIndicesInnerGeneration`

GetGeneration returns the Generation field if non-nil, zero value otherwise.

### GetGenerationOk

`func (o *TypeGameIndicesInner) GetGenerationOk() (*TypeGameIndicesInnerGeneration, bool)`

GetGenerationOk returns a tuple with the Generation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGeneration

`func (o *TypeGameIndicesInner) SetGeneration(v TypeGameIndicesInnerGeneration)`

SetGeneration sets Generation field to given value.

### HasGeneration

`func (o *TypeGameIndicesInner) HasGeneration() bool`

HasGeneration returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


