/*


No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 20220523
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// PokemonSpeciesDexEntry An entry of a Pokemon species seen in the Pokedex.
type PokemonSpeciesDexEntry struct {
	// The index number of the Pokedex entry.
	EntryNumber *int32 `json:"entry_number,omitempty"`
	Pokedex *NamedAPIResource `json:"pokedex,omitempty"`
}

// NewPokemonSpeciesDexEntry instantiates a new PokemonSpeciesDexEntry object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPokemonSpeciesDexEntry() *PokemonSpeciesDexEntry {
	this := PokemonSpeciesDexEntry{}
	return &this
}

// NewPokemonSpeciesDexEntryWithDefaults instantiates a new PokemonSpeciesDexEntry object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPokemonSpeciesDexEntryWithDefaults() *PokemonSpeciesDexEntry {
	this := PokemonSpeciesDexEntry{}
	return &this
}

// GetEntryNumber returns the EntryNumber field value if set, zero value otherwise.
func (o *PokemonSpeciesDexEntry) GetEntryNumber() int32 {
	if o == nil || isNil(o.EntryNumber) {
		var ret int32
		return ret
	}
	return *o.EntryNumber
}

// GetEntryNumberOk returns a tuple with the EntryNumber field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PokemonSpeciesDexEntry) GetEntryNumberOk() (*int32, bool) {
	if o == nil || isNil(o.EntryNumber) {
    return nil, false
	}
	return o.EntryNumber, true
}

// HasEntryNumber returns a boolean if a field has been set.
func (o *PokemonSpeciesDexEntry) HasEntryNumber() bool {
	if o != nil && !isNil(o.EntryNumber) {
		return true
	}

	return false
}

// SetEntryNumber gets a reference to the given int32 and assigns it to the EntryNumber field.
func (o *PokemonSpeciesDexEntry) SetEntryNumber(v int32) {
	o.EntryNumber = &v
}

// GetPokedex returns the Pokedex field value if set, zero value otherwise.
func (o *PokemonSpeciesDexEntry) GetPokedex() NamedAPIResource {
	if o == nil || isNil(o.Pokedex) {
		var ret NamedAPIResource
		return ret
	}
	return *o.Pokedex
}

// GetPokedexOk returns a tuple with the Pokedex field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PokemonSpeciesDexEntry) GetPokedexOk() (*NamedAPIResource, bool) {
	if o == nil || isNil(o.Pokedex) {
    return nil, false
	}
	return o.Pokedex, true
}

// HasPokedex returns a boolean if a field has been set.
func (o *PokemonSpeciesDexEntry) HasPokedex() bool {
	if o != nil && !isNil(o.Pokedex) {
		return true
	}

	return false
}

// SetPokedex gets a reference to the given NamedAPIResource and assigns it to the Pokedex field.
func (o *PokemonSpeciesDexEntry) SetPokedex(v NamedAPIResource) {
	o.Pokedex = &v
}

func (o PokemonSpeciesDexEntry) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if !isNil(o.EntryNumber) {
		toSerialize["entry_number"] = o.EntryNumber
	}
	if !isNil(o.Pokedex) {
		toSerialize["pokedex"] = o.Pokedex
	}
	return json.Marshal(toSerialize)
}

type NullablePokemonSpeciesDexEntry struct {
	value *PokemonSpeciesDexEntry
	isSet bool
}

func (v NullablePokemonSpeciesDexEntry) Get() *PokemonSpeciesDexEntry {
	return v.value
}

func (v *NullablePokemonSpeciesDexEntry) Set(val *PokemonSpeciesDexEntry) {
	v.value = val
	v.isSet = true
}

func (v NullablePokemonSpeciesDexEntry) IsSet() bool {
	return v.isSet
}

func (v *NullablePokemonSpeciesDexEntry) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePokemonSpeciesDexEntry(val *PokemonSpeciesDexEntry) *NullablePokemonSpeciesDexEntry {
	return &NullablePokemonSpeciesDexEntry{value: val, isSet: true}
}

func (v NullablePokemonSpeciesDexEntry) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePokemonSpeciesDexEntry) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

