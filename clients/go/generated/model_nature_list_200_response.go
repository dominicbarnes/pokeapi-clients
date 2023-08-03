/*


No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 20220523
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// NatureList200Response struct for NatureList200Response
type NatureList200Response struct {
	// The total number of natures.
	Count *int32 `json:"count,omitempty"`
	// URL to retrieve the next page of natures.
	Next NullableString `json:"next,omitempty"`
	// URL to retrieve the previous page of natures.
	Previous NullableString `json:"previous,omitempty"`
	Results []Nature `json:"results,omitempty"`
}

// NewNatureList200Response instantiates a new NatureList200Response object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewNatureList200Response() *NatureList200Response {
	this := NatureList200Response{}
	return &this
}

// NewNatureList200ResponseWithDefaults instantiates a new NatureList200Response object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewNatureList200ResponseWithDefaults() *NatureList200Response {
	this := NatureList200Response{}
	return &this
}

// GetCount returns the Count field value if set, zero value otherwise.
func (o *NatureList200Response) GetCount() int32 {
	if o == nil || isNil(o.Count) {
		var ret int32
		return ret
	}
	return *o.Count
}

// GetCountOk returns a tuple with the Count field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *NatureList200Response) GetCountOk() (*int32, bool) {
	if o == nil || isNil(o.Count) {
    return nil, false
	}
	return o.Count, true
}

// HasCount returns a boolean if a field has been set.
func (o *NatureList200Response) HasCount() bool {
	if o != nil && !isNil(o.Count) {
		return true
	}

	return false
}

// SetCount gets a reference to the given int32 and assigns it to the Count field.
func (o *NatureList200Response) SetCount(v int32) {
	o.Count = &v
}

// GetNext returns the Next field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *NatureList200Response) GetNext() string {
	if o == nil || isNil(o.Next.Get()) {
		var ret string
		return ret
	}
	return *o.Next.Get()
}

// GetNextOk returns a tuple with the Next field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *NatureList200Response) GetNextOk() (*string, bool) {
	if o == nil {
    return nil, false
	}
	return o.Next.Get(), o.Next.IsSet()
}

// HasNext returns a boolean if a field has been set.
func (o *NatureList200Response) HasNext() bool {
	if o != nil && o.Next.IsSet() {
		return true
	}

	return false
}

// SetNext gets a reference to the given NullableString and assigns it to the Next field.
func (o *NatureList200Response) SetNext(v string) {
	o.Next.Set(&v)
}
// SetNextNil sets the value for Next to be an explicit nil
func (o *NatureList200Response) SetNextNil() {
	o.Next.Set(nil)
}

// UnsetNext ensures that no value is present for Next, not even an explicit nil
func (o *NatureList200Response) UnsetNext() {
	o.Next.Unset()
}

// GetPrevious returns the Previous field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *NatureList200Response) GetPrevious() string {
	if o == nil || isNil(o.Previous.Get()) {
		var ret string
		return ret
	}
	return *o.Previous.Get()
}

// GetPreviousOk returns a tuple with the Previous field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *NatureList200Response) GetPreviousOk() (*string, bool) {
	if o == nil {
    return nil, false
	}
	return o.Previous.Get(), o.Previous.IsSet()
}

// HasPrevious returns a boolean if a field has been set.
func (o *NatureList200Response) HasPrevious() bool {
	if o != nil && o.Previous.IsSet() {
		return true
	}

	return false
}

// SetPrevious gets a reference to the given NullableString and assigns it to the Previous field.
func (o *NatureList200Response) SetPrevious(v string) {
	o.Previous.Set(&v)
}
// SetPreviousNil sets the value for Previous to be an explicit nil
func (o *NatureList200Response) SetPreviousNil() {
	o.Previous.Set(nil)
}

// UnsetPrevious ensures that no value is present for Previous, not even an explicit nil
func (o *NatureList200Response) UnsetPrevious() {
	o.Previous.Unset()
}

// GetResults returns the Results field value if set, zero value otherwise.
func (o *NatureList200Response) GetResults() []Nature {
	if o == nil || isNil(o.Results) {
		var ret []Nature
		return ret
	}
	return o.Results
}

// GetResultsOk returns a tuple with the Results field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *NatureList200Response) GetResultsOk() ([]Nature, bool) {
	if o == nil || isNil(o.Results) {
    return nil, false
	}
	return o.Results, true
}

// HasResults returns a boolean if a field has been set.
func (o *NatureList200Response) HasResults() bool {
	if o != nil && !isNil(o.Results) {
		return true
	}

	return false
}

// SetResults gets a reference to the given []Nature and assigns it to the Results field.
func (o *NatureList200Response) SetResults(v []Nature) {
	o.Results = v
}

func (o NatureList200Response) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if !isNil(o.Count) {
		toSerialize["count"] = o.Count
	}
	if o.Next.IsSet() {
		toSerialize["next"] = o.Next.Get()
	}
	if o.Previous.IsSet() {
		toSerialize["previous"] = o.Previous.Get()
	}
	if !isNil(o.Results) {
		toSerialize["results"] = o.Results
	}
	return json.Marshal(toSerialize)
}

type NullableNatureList200Response struct {
	value *NatureList200Response
	isSet bool
}

func (v NullableNatureList200Response) Get() *NatureList200Response {
	return v.value
}

func (v *NullableNatureList200Response) Set(val *NatureList200Response) {
	v.value = val
	v.isSet = true
}

func (v NullableNatureList200Response) IsSet() bool {
	return v.isSet
}

func (v *NullableNatureList200Response) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableNatureList200Response(val *NatureList200Response) *NullableNatureList200Response {
	return &NullableNatureList200Response{value: val, isSet: true}
}

func (v NullableNatureList200Response) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableNatureList200Response) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

