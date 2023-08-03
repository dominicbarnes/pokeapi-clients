/*


No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 20220523
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// MoveContestEffect struct for MoveContestEffect
type MoveContestEffect struct {
	Url string `json:"url"`
}

// NewMoveContestEffect instantiates a new MoveContestEffect object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewMoveContestEffect(url string) *MoveContestEffect {
	this := MoveContestEffect{}
	this.Url = url
	return &this
}

// NewMoveContestEffectWithDefaults instantiates a new MoveContestEffect object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewMoveContestEffectWithDefaults() *MoveContestEffect {
	this := MoveContestEffect{}
	return &this
}

// GetUrl returns the Url field value
func (o *MoveContestEffect) GetUrl() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Url
}

// GetUrlOk returns a tuple with the Url field value
// and a boolean to check if the value has been set.
func (o *MoveContestEffect) GetUrlOk() (*string, bool) {
	if o == nil {
    return nil, false
	}
	return &o.Url, true
}

// SetUrl sets field value
func (o *MoveContestEffect) SetUrl(v string) {
	o.Url = v
}

func (o MoveContestEffect) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["url"] = o.Url
	}
	return json.Marshal(toSerialize)
}

type NullableMoveContestEffect struct {
	value *MoveContestEffect
	isSet bool
}

func (v NullableMoveContestEffect) Get() *MoveContestEffect {
	return v.value
}

func (v *NullableMoveContestEffect) Set(val *MoveContestEffect) {
	v.value = val
	v.isSet = true
}

func (v NullableMoveContestEffect) IsSet() bool {
	return v.isSet
}

func (v *NullableMoveContestEffect) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableMoveContestEffect(val *MoveContestEffect) *NullableMoveContestEffect {
	return &NullableMoveContestEffect{value: val, isSet: true}
}

func (v NullableMoveContestEffect) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableMoveContestEffect) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

