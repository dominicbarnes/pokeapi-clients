/*


No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 20220523
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// Genus struct for Genus
type Genus struct {
	Genus *string `json:"genus,omitempty"`
	Language *Language `json:"language,omitempty"`
}

// NewGenus instantiates a new Genus object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewGenus() *Genus {
	this := Genus{}
	return &this
}

// NewGenusWithDefaults instantiates a new Genus object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewGenusWithDefaults() *Genus {
	this := Genus{}
	return &this
}

// GetGenus returns the Genus field value if set, zero value otherwise.
func (o *Genus) GetGenus() string {
	if o == nil || isNil(o.Genus) {
		var ret string
		return ret
	}
	return *o.Genus
}

// GetGenusOk returns a tuple with the Genus field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Genus) GetGenusOk() (*string, bool) {
	if o == nil || isNil(o.Genus) {
    return nil, false
	}
	return o.Genus, true
}

// HasGenus returns a boolean if a field has been set.
func (o *Genus) HasGenus() bool {
	if o != nil && !isNil(o.Genus) {
		return true
	}

	return false
}

// SetGenus gets a reference to the given string and assigns it to the Genus field.
func (o *Genus) SetGenus(v string) {
	o.Genus = &v
}

// GetLanguage returns the Language field value if set, zero value otherwise.
func (o *Genus) GetLanguage() Language {
	if o == nil || isNil(o.Language) {
		var ret Language
		return ret
	}
	return *o.Language
}

// GetLanguageOk returns a tuple with the Language field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Genus) GetLanguageOk() (*Language, bool) {
	if o == nil || isNil(o.Language) {
    return nil, false
	}
	return o.Language, true
}

// HasLanguage returns a boolean if a field has been set.
func (o *Genus) HasLanguage() bool {
	if o != nil && !isNil(o.Language) {
		return true
	}

	return false
}

// SetLanguage gets a reference to the given Language and assigns it to the Language field.
func (o *Genus) SetLanguage(v Language) {
	o.Language = &v
}

func (o Genus) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if !isNil(o.Genus) {
		toSerialize["genus"] = o.Genus
	}
	if !isNil(o.Language) {
		toSerialize["language"] = o.Language
	}
	return json.Marshal(toSerialize)
}

type NullableGenus struct {
	value *Genus
	isSet bool
}

func (v NullableGenus) Get() *Genus {
	return v.value
}

func (v *NullableGenus) Set(val *Genus) {
	v.value = val
	v.isSet = true
}

func (v NullableGenus) IsSet() bool {
	return v.isSet
}

func (v *NullableGenus) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGenus(val *Genus) *NullableGenus {
	return &NullableGenus{value: val, isSet: true}
}

func (v NullableGenus) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGenus) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

