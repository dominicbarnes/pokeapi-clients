/*


No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 20220523
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// MoveStatAffectSets struct for MoveStatAffectSets
type MoveStatAffectSets struct {
	Increase []MoveStatAffect `json:"increase"`
	Decrease []MoveStatAffect `json:"decrease"`
}

// NewMoveStatAffectSets instantiates a new MoveStatAffectSets object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewMoveStatAffectSets(increase []MoveStatAffect, decrease []MoveStatAffect) *MoveStatAffectSets {
	this := MoveStatAffectSets{}
	this.Increase = increase
	this.Decrease = decrease
	return &this
}

// NewMoveStatAffectSetsWithDefaults instantiates a new MoveStatAffectSets object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewMoveStatAffectSetsWithDefaults() *MoveStatAffectSets {
	this := MoveStatAffectSets{}
	return &this
}

// GetIncrease returns the Increase field value
func (o *MoveStatAffectSets) GetIncrease() []MoveStatAffect {
	if o == nil {
		var ret []MoveStatAffect
		return ret
	}

	return o.Increase
}

// GetIncreaseOk returns a tuple with the Increase field value
// and a boolean to check if the value has been set.
func (o *MoveStatAffectSets) GetIncreaseOk() ([]MoveStatAffect, bool) {
	if o == nil {
    return nil, false
	}
	return o.Increase, true
}

// SetIncrease sets field value
func (o *MoveStatAffectSets) SetIncrease(v []MoveStatAffect) {
	o.Increase = v
}

// GetDecrease returns the Decrease field value
func (o *MoveStatAffectSets) GetDecrease() []MoveStatAffect {
	if o == nil {
		var ret []MoveStatAffect
		return ret
	}

	return o.Decrease
}

// GetDecreaseOk returns a tuple with the Decrease field value
// and a boolean to check if the value has been set.
func (o *MoveStatAffectSets) GetDecreaseOk() ([]MoveStatAffect, bool) {
	if o == nil {
    return nil, false
	}
	return o.Decrease, true
}

// SetDecrease sets field value
func (o *MoveStatAffectSets) SetDecrease(v []MoveStatAffect) {
	o.Decrease = v
}

func (o MoveStatAffectSets) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["increase"] = o.Increase
	}
	if true {
		toSerialize["decrease"] = o.Decrease
	}
	return json.Marshal(toSerialize)
}

type NullableMoveStatAffectSets struct {
	value *MoveStatAffectSets
	isSet bool
}

func (v NullableMoveStatAffectSets) Get() *MoveStatAffectSets {
	return v.value
}

func (v *NullableMoveStatAffectSets) Set(val *MoveStatAffectSets) {
	v.value = val
	v.isSet = true
}

func (v NullableMoveStatAffectSets) IsSet() bool {
	return v.isSet
}

func (v *NullableMoveStatAffectSets) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableMoveStatAffectSets(val *MoveStatAffectSets) *NullableMoveStatAffectSets {
	return &NullableMoveStatAffectSets{value: val, isSet: true}
}

func (v NullableMoveStatAffectSets) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableMoveStatAffectSets) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

