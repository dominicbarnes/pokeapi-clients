/*


No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 20220523
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// NaturePokeathlonStatAffectSets struct for NaturePokeathlonStatAffectSets
type NaturePokeathlonStatAffectSets struct {
	Increase []PokeathlonStatAffect `json:"increase"`
	Decrease []PokeathlonStatAffect `json:"decrease"`
}

// NewNaturePokeathlonStatAffectSets instantiates a new NaturePokeathlonStatAffectSets object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewNaturePokeathlonStatAffectSets(increase []PokeathlonStatAffect, decrease []PokeathlonStatAffect) *NaturePokeathlonStatAffectSets {
	this := NaturePokeathlonStatAffectSets{}
	this.Increase = increase
	this.Decrease = decrease
	return &this
}

// NewNaturePokeathlonStatAffectSetsWithDefaults instantiates a new NaturePokeathlonStatAffectSets object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewNaturePokeathlonStatAffectSetsWithDefaults() *NaturePokeathlonStatAffectSets {
	this := NaturePokeathlonStatAffectSets{}
	return &this
}

// GetIncrease returns the Increase field value
func (o *NaturePokeathlonStatAffectSets) GetIncrease() []PokeathlonStatAffect {
	if o == nil {
		var ret []PokeathlonStatAffect
		return ret
	}

	return o.Increase
}

// GetIncreaseOk returns a tuple with the Increase field value
// and a boolean to check if the value has been set.
func (o *NaturePokeathlonStatAffectSets) GetIncreaseOk() ([]PokeathlonStatAffect, bool) {
	if o == nil {
    return nil, false
	}
	return o.Increase, true
}

// SetIncrease sets field value
func (o *NaturePokeathlonStatAffectSets) SetIncrease(v []PokeathlonStatAffect) {
	o.Increase = v
}

// GetDecrease returns the Decrease field value
func (o *NaturePokeathlonStatAffectSets) GetDecrease() []PokeathlonStatAffect {
	if o == nil {
		var ret []PokeathlonStatAffect
		return ret
	}

	return o.Decrease
}

// GetDecreaseOk returns a tuple with the Decrease field value
// and a boolean to check if the value has been set.
func (o *NaturePokeathlonStatAffectSets) GetDecreaseOk() ([]PokeathlonStatAffect, bool) {
	if o == nil {
    return nil, false
	}
	return o.Decrease, true
}

// SetDecrease sets field value
func (o *NaturePokeathlonStatAffectSets) SetDecrease(v []PokeathlonStatAffect) {
	o.Decrease = v
}

func (o NaturePokeathlonStatAffectSets) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["increase"] = o.Increase
	}
	if true {
		toSerialize["decrease"] = o.Decrease
	}
	return json.Marshal(toSerialize)
}

type NullableNaturePokeathlonStatAffectSets struct {
	value *NaturePokeathlonStatAffectSets
	isSet bool
}

func (v NullableNaturePokeathlonStatAffectSets) Get() *NaturePokeathlonStatAffectSets {
	return v.value
}

func (v *NullableNaturePokeathlonStatAffectSets) Set(val *NaturePokeathlonStatAffectSets) {
	v.value = val
	v.isSet = true
}

func (v NullableNaturePokeathlonStatAffectSets) IsSet() bool {
	return v.isSet
}

func (v *NullableNaturePokeathlonStatAffectSets) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableNaturePokeathlonStatAffectSets(val *NaturePokeathlonStatAffectSets) *NullableNaturePokeathlonStatAffectSets {
	return &NullableNaturePokeathlonStatAffectSets{value: val, isSet: true}
}

func (v NullableNaturePokeathlonStatAffectSets) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableNaturePokeathlonStatAffectSets) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

