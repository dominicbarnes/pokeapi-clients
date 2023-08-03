/*


No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 20220523
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// EffectEffect The various effects of the move `effect_entries`
type EffectEffect struct {
	// The localized effect text of this effect
	Effect string `json:"effect"`
	Language Language `json:"language"`
}

// NewEffectEffect instantiates a new EffectEffect object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewEffectEffect(effect string, language Language) *EffectEffect {
	this := EffectEffect{}
	this.Effect = effect
	this.Language = language
	return &this
}

// NewEffectEffectWithDefaults instantiates a new EffectEffect object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewEffectEffectWithDefaults() *EffectEffect {
	this := EffectEffect{}
	return &this
}

// GetEffect returns the Effect field value
func (o *EffectEffect) GetEffect() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Effect
}

// GetEffectOk returns a tuple with the Effect field value
// and a boolean to check if the value has been set.
func (o *EffectEffect) GetEffectOk() (*string, bool) {
	if o == nil {
    return nil, false
	}
	return &o.Effect, true
}

// SetEffect sets field value
func (o *EffectEffect) SetEffect(v string) {
	o.Effect = v
}

// GetLanguage returns the Language field value
func (o *EffectEffect) GetLanguage() Language {
	if o == nil {
		var ret Language
		return ret
	}

	return o.Language
}

// GetLanguageOk returns a tuple with the Language field value
// and a boolean to check if the value has been set.
func (o *EffectEffect) GetLanguageOk() (*Language, bool) {
	if o == nil {
    return nil, false
	}
	return &o.Language, true
}

// SetLanguage sets field value
func (o *EffectEffect) SetLanguage(v Language) {
	o.Language = v
}

func (o EffectEffect) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["effect"] = o.Effect
	}
	if true {
		toSerialize["language"] = o.Language
	}
	return json.Marshal(toSerialize)
}

type NullableEffectEffect struct {
	value *EffectEffect
	isSet bool
}

func (v NullableEffectEffect) Get() *EffectEffect {
	return v.value
}

func (v *NullableEffectEffect) Set(val *EffectEffect) {
	v.value = val
	v.isSet = true
}

func (v NullableEffectEffect) IsSet() bool {
	return v.isSet
}

func (v *NullableEffectEffect) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableEffectEffect(val *EffectEffect) *NullableEffectEffect {
	return &NullableEffectEffect{value: val, isSet: true}
}

func (v NullableEffectEffect) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableEffectEffect) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

