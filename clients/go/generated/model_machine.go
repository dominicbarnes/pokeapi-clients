/*


No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 20220523
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// Machine struct for Machine
type Machine struct {
	Id *int32 `json:"id,omitempty"`
	Item *NamedAPIResource `json:"item,omitempty"`
	Move *NamedAPIResource `json:"move,omitempty"`
	VersionGroup *NamedAPIResource `json:"version_group,omitempty"`
}

// NewMachine instantiates a new Machine object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewMachine() *Machine {
	this := Machine{}
	return &this
}

// NewMachineWithDefaults instantiates a new Machine object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewMachineWithDefaults() *Machine {
	this := Machine{}
	return &this
}

// GetId returns the Id field value if set, zero value otherwise.
func (o *Machine) GetId() int32 {
	if o == nil || isNil(o.Id) {
		var ret int32
		return ret
	}
	return *o.Id
}

// GetIdOk returns a tuple with the Id field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Machine) GetIdOk() (*int32, bool) {
	if o == nil || isNil(o.Id) {
    return nil, false
	}
	return o.Id, true
}

// HasId returns a boolean if a field has been set.
func (o *Machine) HasId() bool {
	if o != nil && !isNil(o.Id) {
		return true
	}

	return false
}

// SetId gets a reference to the given int32 and assigns it to the Id field.
func (o *Machine) SetId(v int32) {
	o.Id = &v
}

// GetItem returns the Item field value if set, zero value otherwise.
func (o *Machine) GetItem() NamedAPIResource {
	if o == nil || isNil(o.Item) {
		var ret NamedAPIResource
		return ret
	}
	return *o.Item
}

// GetItemOk returns a tuple with the Item field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Machine) GetItemOk() (*NamedAPIResource, bool) {
	if o == nil || isNil(o.Item) {
    return nil, false
	}
	return o.Item, true
}

// HasItem returns a boolean if a field has been set.
func (o *Machine) HasItem() bool {
	if o != nil && !isNil(o.Item) {
		return true
	}

	return false
}

// SetItem gets a reference to the given NamedAPIResource and assigns it to the Item field.
func (o *Machine) SetItem(v NamedAPIResource) {
	o.Item = &v
}

// GetMove returns the Move field value if set, zero value otherwise.
func (o *Machine) GetMove() NamedAPIResource {
	if o == nil || isNil(o.Move) {
		var ret NamedAPIResource
		return ret
	}
	return *o.Move
}

// GetMoveOk returns a tuple with the Move field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Machine) GetMoveOk() (*NamedAPIResource, bool) {
	if o == nil || isNil(o.Move) {
    return nil, false
	}
	return o.Move, true
}

// HasMove returns a boolean if a field has been set.
func (o *Machine) HasMove() bool {
	if o != nil && !isNil(o.Move) {
		return true
	}

	return false
}

// SetMove gets a reference to the given NamedAPIResource and assigns it to the Move field.
func (o *Machine) SetMove(v NamedAPIResource) {
	o.Move = &v
}

// GetVersionGroup returns the VersionGroup field value if set, zero value otherwise.
func (o *Machine) GetVersionGroup() NamedAPIResource {
	if o == nil || isNil(o.VersionGroup) {
		var ret NamedAPIResource
		return ret
	}
	return *o.VersionGroup
}

// GetVersionGroupOk returns a tuple with the VersionGroup field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Machine) GetVersionGroupOk() (*NamedAPIResource, bool) {
	if o == nil || isNil(o.VersionGroup) {
    return nil, false
	}
	return o.VersionGroup, true
}

// HasVersionGroup returns a boolean if a field has been set.
func (o *Machine) HasVersionGroup() bool {
	if o != nil && !isNil(o.VersionGroup) {
		return true
	}

	return false
}

// SetVersionGroup gets a reference to the given NamedAPIResource and assigns it to the VersionGroup field.
func (o *Machine) SetVersionGroup(v NamedAPIResource) {
	o.VersionGroup = &v
}

func (o Machine) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if !isNil(o.Id) {
		toSerialize["id"] = o.Id
	}
	if !isNil(o.Item) {
		toSerialize["item"] = o.Item
	}
	if !isNil(o.Move) {
		toSerialize["move"] = o.Move
	}
	if !isNil(o.VersionGroup) {
		toSerialize["version_group"] = o.VersionGroup
	}
	return json.Marshal(toSerialize)
}

type NullableMachine struct {
	value *Machine
	isSet bool
}

func (v NullableMachine) Get() *Machine {
	return v.value
}

func (v *NullableMachine) Set(val *Machine) {
	v.value = val
	v.isSet = true
}

func (v NullableMachine) IsSet() bool {
	return v.isSet
}

func (v *NullableMachine) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableMachine(val *Machine) *NullableMachine {
	return &NullableMachine{value: val, isSet: true}
}

func (v NullableMachine) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableMachine) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

