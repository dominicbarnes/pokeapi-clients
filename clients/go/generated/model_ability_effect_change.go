/*


No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 20220523
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// AbilityEffectChange struct for AbilityEffectChange
type AbilityEffectChange struct {
	EffectEntries []Effect `json:"effect_entries"`
	VersionGroup NamedAPIResource `json:"version_group"`
}

// NewAbilityEffectChange instantiates a new AbilityEffectChange object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAbilityEffectChange(effectEntries []Effect, versionGroup NamedAPIResource) *AbilityEffectChange {
	this := AbilityEffectChange{}
	this.EffectEntries = effectEntries
	this.VersionGroup = versionGroup
	return &this
}

// NewAbilityEffectChangeWithDefaults instantiates a new AbilityEffectChange object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAbilityEffectChangeWithDefaults() *AbilityEffectChange {
	this := AbilityEffectChange{}
	return &this
}

// GetEffectEntries returns the EffectEntries field value
func (o *AbilityEffectChange) GetEffectEntries() []Effect {
	if o == nil {
		var ret []Effect
		return ret
	}

	return o.EffectEntries
}

// GetEffectEntriesOk returns a tuple with the EffectEntries field value
// and a boolean to check if the value has been set.
func (o *AbilityEffectChange) GetEffectEntriesOk() ([]Effect, bool) {
	if o == nil {
    return nil, false
	}
	return o.EffectEntries, true
}

// SetEffectEntries sets field value
func (o *AbilityEffectChange) SetEffectEntries(v []Effect) {
	o.EffectEntries = v
}

// GetVersionGroup returns the VersionGroup field value
func (o *AbilityEffectChange) GetVersionGroup() NamedAPIResource {
	if o == nil {
		var ret NamedAPIResource
		return ret
	}

	return o.VersionGroup
}

// GetVersionGroupOk returns a tuple with the VersionGroup field value
// and a boolean to check if the value has been set.
func (o *AbilityEffectChange) GetVersionGroupOk() (*NamedAPIResource, bool) {
	if o == nil {
    return nil, false
	}
	return &o.VersionGroup, true
}

// SetVersionGroup sets field value
func (o *AbilityEffectChange) SetVersionGroup(v NamedAPIResource) {
	o.VersionGroup = v
}

func (o AbilityEffectChange) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["effect_entries"] = o.EffectEntries
	}
	if true {
		toSerialize["version_group"] = o.VersionGroup
	}
	return json.Marshal(toSerialize)
}

type NullableAbilityEffectChange struct {
	value *AbilityEffectChange
	isSet bool
}

func (v NullableAbilityEffectChange) Get() *AbilityEffectChange {
	return v.value
}

func (v *NullableAbilityEffectChange) Set(val *AbilityEffectChange) {
	v.value = val
	v.isSet = true
}

func (v NullableAbilityEffectChange) IsSet() bool {
	return v.isSet
}

func (v *NullableAbilityEffectChange) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAbilityEffectChange(val *AbilityEffectChange) *NullableAbilityEffectChange {
	return &NullableAbilityEffectChange{value: val, isSet: true}
}

func (v NullableAbilityEffectChange) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAbilityEffectChange) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

