/*


No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 20220523
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// PokemonColor struct for PokemonColor
type PokemonColor struct {
	// The identifier for this Pokemon color resource
	Id *int32 `json:"id,omitempty"`
	// The name for this Pokemon color resource
	Name *string `json:"name,omitempty"`
}

// NewPokemonColor instantiates a new PokemonColor object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPokemonColor() *PokemonColor {
	this := PokemonColor{}
	return &this
}

// NewPokemonColorWithDefaults instantiates a new PokemonColor object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPokemonColorWithDefaults() *PokemonColor {
	this := PokemonColor{}
	return &this
}

// GetId returns the Id field value if set, zero value otherwise.
func (o *PokemonColor) GetId() int32 {
	if o == nil || isNil(o.Id) {
		var ret int32
		return ret
	}
	return *o.Id
}

// GetIdOk returns a tuple with the Id field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PokemonColor) GetIdOk() (*int32, bool) {
	if o == nil || isNil(o.Id) {
    return nil, false
	}
	return o.Id, true
}

// HasId returns a boolean if a field has been set.
func (o *PokemonColor) HasId() bool {
	if o != nil && !isNil(o.Id) {
		return true
	}

	return false
}

// SetId gets a reference to the given int32 and assigns it to the Id field.
func (o *PokemonColor) SetId(v int32) {
	o.Id = &v
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *PokemonColor) GetName() string {
	if o == nil || isNil(o.Name) {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PokemonColor) GetNameOk() (*string, bool) {
	if o == nil || isNil(o.Name) {
    return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *PokemonColor) HasName() bool {
	if o != nil && !isNil(o.Name) {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *PokemonColor) SetName(v string) {
	o.Name = &v
}

func (o PokemonColor) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if !isNil(o.Id) {
		toSerialize["id"] = o.Id
	}
	if !isNil(o.Name) {
		toSerialize["name"] = o.Name
	}
	return json.Marshal(toSerialize)
}

type NullablePokemonColor struct {
	value *PokemonColor
	isSet bool
}

func (v NullablePokemonColor) Get() *PokemonColor {
	return v.value
}

func (v *NullablePokemonColor) Set(val *PokemonColor) {
	v.value = val
	v.isSet = true
}

func (v NullablePokemonColor) IsSet() bool {
	return v.isSet
}

func (v *NullablePokemonColor) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePokemonColor(val *PokemonColor) *NullablePokemonColor {
	return &NullablePokemonColor{value: val, isSet: true}
}

func (v NullablePokemonColor) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePokemonColor) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

