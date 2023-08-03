/*


No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 20220523
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// Ability struct for Ability
type Ability struct {
	// The identifier for this ability resource.
	Id *int32 `json:"id,omitempty"`
	// The name for this ability resource.
	Name *string `json:"name,omitempty"`
	// Whether or not this ability originated in the main series of the video games.
	IsMainSeries *bool `json:"is_main_series,omitempty"`
	Generation *AbilityGeneration `json:"generation,omitempty"`
	Names []AbilityNamesInner `json:"names,omitempty"`
}

// NewAbility instantiates a new Ability object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAbility() *Ability {
	this := Ability{}
	return &this
}

// NewAbilityWithDefaults instantiates a new Ability object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAbilityWithDefaults() *Ability {
	this := Ability{}
	return &this
}

// GetId returns the Id field value if set, zero value otherwise.
func (o *Ability) GetId() int32 {
	if o == nil || isNil(o.Id) {
		var ret int32
		return ret
	}
	return *o.Id
}

// GetIdOk returns a tuple with the Id field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Ability) GetIdOk() (*int32, bool) {
	if o == nil || isNil(o.Id) {
    return nil, false
	}
	return o.Id, true
}

// HasId returns a boolean if a field has been set.
func (o *Ability) HasId() bool {
	if o != nil && !isNil(o.Id) {
		return true
	}

	return false
}

// SetId gets a reference to the given int32 and assigns it to the Id field.
func (o *Ability) SetId(v int32) {
	o.Id = &v
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *Ability) GetName() string {
	if o == nil || isNil(o.Name) {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Ability) GetNameOk() (*string, bool) {
	if o == nil || isNil(o.Name) {
    return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *Ability) HasName() bool {
	if o != nil && !isNil(o.Name) {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *Ability) SetName(v string) {
	o.Name = &v
}

// GetIsMainSeries returns the IsMainSeries field value if set, zero value otherwise.
func (o *Ability) GetIsMainSeries() bool {
	if o == nil || isNil(o.IsMainSeries) {
		var ret bool
		return ret
	}
	return *o.IsMainSeries
}

// GetIsMainSeriesOk returns a tuple with the IsMainSeries field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Ability) GetIsMainSeriesOk() (*bool, bool) {
	if o == nil || isNil(o.IsMainSeries) {
    return nil, false
	}
	return o.IsMainSeries, true
}

// HasIsMainSeries returns a boolean if a field has been set.
func (o *Ability) HasIsMainSeries() bool {
	if o != nil && !isNil(o.IsMainSeries) {
		return true
	}

	return false
}

// SetIsMainSeries gets a reference to the given bool and assigns it to the IsMainSeries field.
func (o *Ability) SetIsMainSeries(v bool) {
	o.IsMainSeries = &v
}

// GetGeneration returns the Generation field value if set, zero value otherwise.
func (o *Ability) GetGeneration() AbilityGeneration {
	if o == nil || isNil(o.Generation) {
		var ret AbilityGeneration
		return ret
	}
	return *o.Generation
}

// GetGenerationOk returns a tuple with the Generation field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Ability) GetGenerationOk() (*AbilityGeneration, bool) {
	if o == nil || isNil(o.Generation) {
    return nil, false
	}
	return o.Generation, true
}

// HasGeneration returns a boolean if a field has been set.
func (o *Ability) HasGeneration() bool {
	if o != nil && !isNil(o.Generation) {
		return true
	}

	return false
}

// SetGeneration gets a reference to the given AbilityGeneration and assigns it to the Generation field.
func (o *Ability) SetGeneration(v AbilityGeneration) {
	o.Generation = &v
}

// GetNames returns the Names field value if set, zero value otherwise.
func (o *Ability) GetNames() []AbilityNamesInner {
	if o == nil || isNil(o.Names) {
		var ret []AbilityNamesInner
		return ret
	}
	return o.Names
}

// GetNamesOk returns a tuple with the Names field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Ability) GetNamesOk() ([]AbilityNamesInner, bool) {
	if o == nil || isNil(o.Names) {
    return nil, false
	}
	return o.Names, true
}

// HasNames returns a boolean if a field has been set.
func (o *Ability) HasNames() bool {
	if o != nil && !isNil(o.Names) {
		return true
	}

	return false
}

// SetNames gets a reference to the given []AbilityNamesInner and assigns it to the Names field.
func (o *Ability) SetNames(v []AbilityNamesInner) {
	o.Names = v
}

func (o Ability) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if !isNil(o.Id) {
		toSerialize["id"] = o.Id
	}
	if !isNil(o.Name) {
		toSerialize["name"] = o.Name
	}
	if !isNil(o.IsMainSeries) {
		toSerialize["is_main_series"] = o.IsMainSeries
	}
	if !isNil(o.Generation) {
		toSerialize["generation"] = o.Generation
	}
	if !isNil(o.Names) {
		toSerialize["names"] = o.Names
	}
	return json.Marshal(toSerialize)
}

type NullableAbility struct {
	value *Ability
	isSet bool
}

func (v NullableAbility) Get() *Ability {
	return v.value
}

func (v *NullableAbility) Set(val *Ability) {
	v.value = val
	v.isSet = true
}

func (v NullableAbility) IsSet() bool {
	return v.isSet
}

func (v *NullableAbility) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAbility(val *Ability) *NullableAbility {
	return &NullableAbility{value: val, isSet: true}
}

func (v NullableAbility) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAbility) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

