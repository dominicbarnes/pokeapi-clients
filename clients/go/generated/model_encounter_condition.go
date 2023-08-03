/*


No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 20220523
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// EncounterCondition struct for EncounterCondition
type EncounterCondition struct {
	// The identifier for this encounter condition resource
	Id int32 `json:"id"`
	// The name for this encounter condition resource
	Name string `json:"name"`
	// A list of values that are used with this encounter condition
	Values []NamedAPIResource `json:"values"`
	// The name of this encounter condition listed in different languages
	Names []Name `json:"names"`
}

// NewEncounterCondition instantiates a new EncounterCondition object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewEncounterCondition(id int32, name string, values []NamedAPIResource, names []Name) *EncounterCondition {
	this := EncounterCondition{}
	this.Id = id
	this.Name = name
	this.Values = values
	this.Names = names
	return &this
}

// NewEncounterConditionWithDefaults instantiates a new EncounterCondition object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewEncounterConditionWithDefaults() *EncounterCondition {
	this := EncounterCondition{}
	return &this
}

// GetId returns the Id field value
func (o *EncounterCondition) GetId() int32 {
	if o == nil {
		var ret int32
		return ret
	}

	return o.Id
}

// GetIdOk returns a tuple with the Id field value
// and a boolean to check if the value has been set.
func (o *EncounterCondition) GetIdOk() (*int32, bool) {
	if o == nil {
    return nil, false
	}
	return &o.Id, true
}

// SetId sets field value
func (o *EncounterCondition) SetId(v int32) {
	o.Id = v
}

// GetName returns the Name field value
func (o *EncounterCondition) GetName() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Name
}

// GetNameOk returns a tuple with the Name field value
// and a boolean to check if the value has been set.
func (o *EncounterCondition) GetNameOk() (*string, bool) {
	if o == nil {
    return nil, false
	}
	return &o.Name, true
}

// SetName sets field value
func (o *EncounterCondition) SetName(v string) {
	o.Name = v
}

// GetValues returns the Values field value
func (o *EncounterCondition) GetValues() []NamedAPIResource {
	if o == nil {
		var ret []NamedAPIResource
		return ret
	}

	return o.Values
}

// GetValuesOk returns a tuple with the Values field value
// and a boolean to check if the value has been set.
func (o *EncounterCondition) GetValuesOk() ([]NamedAPIResource, bool) {
	if o == nil {
    return nil, false
	}
	return o.Values, true
}

// SetValues sets field value
func (o *EncounterCondition) SetValues(v []NamedAPIResource) {
	o.Values = v
}

// GetNames returns the Names field value
func (o *EncounterCondition) GetNames() []Name {
	if o == nil {
		var ret []Name
		return ret
	}

	return o.Names
}

// GetNamesOk returns a tuple with the Names field value
// and a boolean to check if the value has been set.
func (o *EncounterCondition) GetNamesOk() ([]Name, bool) {
	if o == nil {
    return nil, false
	}
	return o.Names, true
}

// SetNames sets field value
func (o *EncounterCondition) SetNames(v []Name) {
	o.Names = v
}

func (o EncounterCondition) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["id"] = o.Id
	}
	if true {
		toSerialize["name"] = o.Name
	}
	if true {
		toSerialize["values"] = o.Values
	}
	if true {
		toSerialize["names"] = o.Names
	}
	return json.Marshal(toSerialize)
}

type NullableEncounterCondition struct {
	value *EncounterCondition
	isSet bool
}

func (v NullableEncounterCondition) Get() *EncounterCondition {
	return v.value
}

func (v *NullableEncounterCondition) Set(val *EncounterCondition) {
	v.value = val
	v.isSet = true
}

func (v NullableEncounterCondition) IsSet() bool {
	return v.isSet
}

func (v *NullableEncounterCondition) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableEncounterCondition(val *EncounterCondition) *NullableEncounterCondition {
	return &NullableEncounterCondition{value: val, isSet: true}
}

func (v NullableEncounterCondition) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableEncounterCondition) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

