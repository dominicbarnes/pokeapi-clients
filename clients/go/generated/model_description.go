/*


No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 20220523
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// Description struct for Description
type Description struct {
	Description *string `json:"description,omitempty"`
	Language *Language `json:"language,omitempty"`
}

// NewDescription instantiates a new Description object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewDescription() *Description {
	this := Description{}
	return &this
}

// NewDescriptionWithDefaults instantiates a new Description object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewDescriptionWithDefaults() *Description {
	this := Description{}
	return &this
}

// GetDescription returns the Description field value if set, zero value otherwise.
func (o *Description) GetDescription() string {
	if o == nil || isNil(o.Description) {
		var ret string
		return ret
	}
	return *o.Description
}

// GetDescriptionOk returns a tuple with the Description field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Description) GetDescriptionOk() (*string, bool) {
	if o == nil || isNil(o.Description) {
    return nil, false
	}
	return o.Description, true
}

// HasDescription returns a boolean if a field has been set.
func (o *Description) HasDescription() bool {
	if o != nil && !isNil(o.Description) {
		return true
	}

	return false
}

// SetDescription gets a reference to the given string and assigns it to the Description field.
func (o *Description) SetDescription(v string) {
	o.Description = &v
}

// GetLanguage returns the Language field value if set, zero value otherwise.
func (o *Description) GetLanguage() Language {
	if o == nil || isNil(o.Language) {
		var ret Language
		return ret
	}
	return *o.Language
}

// GetLanguageOk returns a tuple with the Language field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Description) GetLanguageOk() (*Language, bool) {
	if o == nil || isNil(o.Language) {
    return nil, false
	}
	return o.Language, true
}

// HasLanguage returns a boolean if a field has been set.
func (o *Description) HasLanguage() bool {
	if o != nil && !isNil(o.Language) {
		return true
	}

	return false
}

// SetLanguage gets a reference to the given Language and assigns it to the Language field.
func (o *Description) SetLanguage(v Language) {
	o.Language = &v
}

func (o Description) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if !isNil(o.Description) {
		toSerialize["description"] = o.Description
	}
	if !isNil(o.Language) {
		toSerialize["language"] = o.Language
	}
	return json.Marshal(toSerialize)
}

type NullableDescription struct {
	value *Description
	isSet bool
}

func (v NullableDescription) Get() *Description {
	return v.value
}

func (v *NullableDescription) Set(val *Description) {
	v.value = val
	v.isSet = true
}

func (v NullableDescription) IsSet() bool {
	return v.isSet
}

func (v *NullableDescription) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableDescription(val *Description) *NullableDescription {
	return &NullableDescription{value: val, isSet: true}
}

func (v NullableDescription) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableDescription) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

