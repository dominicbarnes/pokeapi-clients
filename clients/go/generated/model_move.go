/*


No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 20220523
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// Move struct for Move
type Move struct {
	// The identifier for this move resource
	Id int32 `json:"id"`
	// The name for this move resource
	Name string `json:"name"`
	// The percent value of how likely this move is to be successful
	Accuracy NullableInt32 `json:"accuracy,omitempty"`
	// The percent value of the additional effects this move has occuring
	EffectChance NullableInt32 `json:"effect_chance,omitempty"`
	// Power points. The number of times this move can be used
	Pp int32 `json:"pp"`
	// A value of 0 means this move goes last in the turn, and 1 means it goes first
	Priority int32 `json:"priority"`
	// The base power of this move with a value of 0 if it does not have a base power
	Power NullableInt32 `json:"power,omitempty"`
	ContestCombos *ContestComboSets `json:"contest_combos,omitempty"`
	ContestType *MoveContestType `json:"contest_type,omitempty"`
	ContestEffect *MoveContestEffect `json:"contest_effect,omitempty"`
	DamageClass *MoveContestType `json:"damage_class,omitempty"`
	EffectEntries []VerboseEffect `json:"effect_entries,omitempty"`
	EffectChanges []AbilityEffectChange `json:"effect_changes,omitempty"`
	Generation MoveContestType `json:"generation"`
	Meta *MoveMetaData `json:"meta,omitempty"`
	Names []Name `json:"names,omitempty"`
	PastValues []PastMoveStatValues `json:"past_values,omitempty"`
	StatChanges []MoveStatChange `json:"stat_changes,omitempty"`
	SuperContestEffect *MoveContestEffect `json:"super_contest_effect,omitempty"`
	Target MoveContestType `json:"target"`
	Type MoveContestType `json:"type"`
}

// NewMove instantiates a new Move object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewMove(id int32, name string, pp int32, priority int32, generation MoveContestType, target MoveContestType, type_ MoveContestType) *Move {
	this := Move{}
	this.Id = id
	this.Name = name
	this.Pp = pp
	this.Priority = priority
	this.Generation = generation
	this.Target = target
	this.Type = type_
	return &this
}

// NewMoveWithDefaults instantiates a new Move object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewMoveWithDefaults() *Move {
	this := Move{}
	return &this
}

// GetId returns the Id field value
func (o *Move) GetId() int32 {
	if o == nil {
		var ret int32
		return ret
	}

	return o.Id
}

// GetIdOk returns a tuple with the Id field value
// and a boolean to check if the value has been set.
func (o *Move) GetIdOk() (*int32, bool) {
	if o == nil {
    return nil, false
	}
	return &o.Id, true
}

// SetId sets field value
func (o *Move) SetId(v int32) {
	o.Id = v
}

// GetName returns the Name field value
func (o *Move) GetName() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Name
}

// GetNameOk returns a tuple with the Name field value
// and a boolean to check if the value has been set.
func (o *Move) GetNameOk() (*string, bool) {
	if o == nil {
    return nil, false
	}
	return &o.Name, true
}

// SetName sets field value
func (o *Move) SetName(v string) {
	o.Name = v
}

// GetAccuracy returns the Accuracy field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *Move) GetAccuracy() int32 {
	if o == nil || isNil(o.Accuracy.Get()) {
		var ret int32
		return ret
	}
	return *o.Accuracy.Get()
}

// GetAccuracyOk returns a tuple with the Accuracy field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *Move) GetAccuracyOk() (*int32, bool) {
	if o == nil {
    return nil, false
	}
	return o.Accuracy.Get(), o.Accuracy.IsSet()
}

// HasAccuracy returns a boolean if a field has been set.
func (o *Move) HasAccuracy() bool {
	if o != nil && o.Accuracy.IsSet() {
		return true
	}

	return false
}

// SetAccuracy gets a reference to the given NullableInt32 and assigns it to the Accuracy field.
func (o *Move) SetAccuracy(v int32) {
	o.Accuracy.Set(&v)
}
// SetAccuracyNil sets the value for Accuracy to be an explicit nil
func (o *Move) SetAccuracyNil() {
	o.Accuracy.Set(nil)
}

// UnsetAccuracy ensures that no value is present for Accuracy, not even an explicit nil
func (o *Move) UnsetAccuracy() {
	o.Accuracy.Unset()
}

// GetEffectChance returns the EffectChance field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *Move) GetEffectChance() int32 {
	if o == nil || isNil(o.EffectChance.Get()) {
		var ret int32
		return ret
	}
	return *o.EffectChance.Get()
}

// GetEffectChanceOk returns a tuple with the EffectChance field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *Move) GetEffectChanceOk() (*int32, bool) {
	if o == nil {
    return nil, false
	}
	return o.EffectChance.Get(), o.EffectChance.IsSet()
}

// HasEffectChance returns a boolean if a field has been set.
func (o *Move) HasEffectChance() bool {
	if o != nil && o.EffectChance.IsSet() {
		return true
	}

	return false
}

// SetEffectChance gets a reference to the given NullableInt32 and assigns it to the EffectChance field.
func (o *Move) SetEffectChance(v int32) {
	o.EffectChance.Set(&v)
}
// SetEffectChanceNil sets the value for EffectChance to be an explicit nil
func (o *Move) SetEffectChanceNil() {
	o.EffectChance.Set(nil)
}

// UnsetEffectChance ensures that no value is present for EffectChance, not even an explicit nil
func (o *Move) UnsetEffectChance() {
	o.EffectChance.Unset()
}

// GetPp returns the Pp field value
func (o *Move) GetPp() int32 {
	if o == nil {
		var ret int32
		return ret
	}

	return o.Pp
}

// GetPpOk returns a tuple with the Pp field value
// and a boolean to check if the value has been set.
func (o *Move) GetPpOk() (*int32, bool) {
	if o == nil {
    return nil, false
	}
	return &o.Pp, true
}

// SetPp sets field value
func (o *Move) SetPp(v int32) {
	o.Pp = v
}

// GetPriority returns the Priority field value
func (o *Move) GetPriority() int32 {
	if o == nil {
		var ret int32
		return ret
	}

	return o.Priority
}

// GetPriorityOk returns a tuple with the Priority field value
// and a boolean to check if the value has been set.
func (o *Move) GetPriorityOk() (*int32, bool) {
	if o == nil {
    return nil, false
	}
	return &o.Priority, true
}

// SetPriority sets field value
func (o *Move) SetPriority(v int32) {
	o.Priority = v
}

// GetPower returns the Power field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *Move) GetPower() int32 {
	if o == nil || isNil(o.Power.Get()) {
		var ret int32
		return ret
	}
	return *o.Power.Get()
}

// GetPowerOk returns a tuple with the Power field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *Move) GetPowerOk() (*int32, bool) {
	if o == nil {
    return nil, false
	}
	return o.Power.Get(), o.Power.IsSet()
}

// HasPower returns a boolean if a field has been set.
func (o *Move) HasPower() bool {
	if o != nil && o.Power.IsSet() {
		return true
	}

	return false
}

// SetPower gets a reference to the given NullableInt32 and assigns it to the Power field.
func (o *Move) SetPower(v int32) {
	o.Power.Set(&v)
}
// SetPowerNil sets the value for Power to be an explicit nil
func (o *Move) SetPowerNil() {
	o.Power.Set(nil)
}

// UnsetPower ensures that no value is present for Power, not even an explicit nil
func (o *Move) UnsetPower() {
	o.Power.Unset()
}

// GetContestCombos returns the ContestCombos field value if set, zero value otherwise.
func (o *Move) GetContestCombos() ContestComboSets {
	if o == nil || isNil(o.ContestCombos) {
		var ret ContestComboSets
		return ret
	}
	return *o.ContestCombos
}

// GetContestCombosOk returns a tuple with the ContestCombos field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Move) GetContestCombosOk() (*ContestComboSets, bool) {
	if o == nil || isNil(o.ContestCombos) {
    return nil, false
	}
	return o.ContestCombos, true
}

// HasContestCombos returns a boolean if a field has been set.
func (o *Move) HasContestCombos() bool {
	if o != nil && !isNil(o.ContestCombos) {
		return true
	}

	return false
}

// SetContestCombos gets a reference to the given ContestComboSets and assigns it to the ContestCombos field.
func (o *Move) SetContestCombos(v ContestComboSets) {
	o.ContestCombos = &v
}

// GetContestType returns the ContestType field value if set, zero value otherwise.
func (o *Move) GetContestType() MoveContestType {
	if o == nil || isNil(o.ContestType) {
		var ret MoveContestType
		return ret
	}
	return *o.ContestType
}

// GetContestTypeOk returns a tuple with the ContestType field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Move) GetContestTypeOk() (*MoveContestType, bool) {
	if o == nil || isNil(o.ContestType) {
    return nil, false
	}
	return o.ContestType, true
}

// HasContestType returns a boolean if a field has been set.
func (o *Move) HasContestType() bool {
	if o != nil && !isNil(o.ContestType) {
		return true
	}

	return false
}

// SetContestType gets a reference to the given MoveContestType and assigns it to the ContestType field.
func (o *Move) SetContestType(v MoveContestType) {
	o.ContestType = &v
}

// GetContestEffect returns the ContestEffect field value if set, zero value otherwise.
func (o *Move) GetContestEffect() MoveContestEffect {
	if o == nil || isNil(o.ContestEffect) {
		var ret MoveContestEffect
		return ret
	}
	return *o.ContestEffect
}

// GetContestEffectOk returns a tuple with the ContestEffect field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Move) GetContestEffectOk() (*MoveContestEffect, bool) {
	if o == nil || isNil(o.ContestEffect) {
    return nil, false
	}
	return o.ContestEffect, true
}

// HasContestEffect returns a boolean if a field has been set.
func (o *Move) HasContestEffect() bool {
	if o != nil && !isNil(o.ContestEffect) {
		return true
	}

	return false
}

// SetContestEffect gets a reference to the given MoveContestEffect and assigns it to the ContestEffect field.
func (o *Move) SetContestEffect(v MoveContestEffect) {
	o.ContestEffect = &v
}

// GetDamageClass returns the DamageClass field value if set, zero value otherwise.
func (o *Move) GetDamageClass() MoveContestType {
	if o == nil || isNil(o.DamageClass) {
		var ret MoveContestType
		return ret
	}
	return *o.DamageClass
}

// GetDamageClassOk returns a tuple with the DamageClass field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Move) GetDamageClassOk() (*MoveContestType, bool) {
	if o == nil || isNil(o.DamageClass) {
    return nil, false
	}
	return o.DamageClass, true
}

// HasDamageClass returns a boolean if a field has been set.
func (o *Move) HasDamageClass() bool {
	if o != nil && !isNil(o.DamageClass) {
		return true
	}

	return false
}

// SetDamageClass gets a reference to the given MoveContestType and assigns it to the DamageClass field.
func (o *Move) SetDamageClass(v MoveContestType) {
	o.DamageClass = &v
}

// GetEffectEntries returns the EffectEntries field value if set, zero value otherwise.
func (o *Move) GetEffectEntries() []VerboseEffect {
	if o == nil || isNil(o.EffectEntries) {
		var ret []VerboseEffect
		return ret
	}
	return o.EffectEntries
}

// GetEffectEntriesOk returns a tuple with the EffectEntries field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Move) GetEffectEntriesOk() ([]VerboseEffect, bool) {
	if o == nil || isNil(o.EffectEntries) {
    return nil, false
	}
	return o.EffectEntries, true
}

// HasEffectEntries returns a boolean if a field has been set.
func (o *Move) HasEffectEntries() bool {
	if o != nil && !isNil(o.EffectEntries) {
		return true
	}

	return false
}

// SetEffectEntries gets a reference to the given []VerboseEffect and assigns it to the EffectEntries field.
func (o *Move) SetEffectEntries(v []VerboseEffect) {
	o.EffectEntries = v
}

// GetEffectChanges returns the EffectChanges field value if set, zero value otherwise.
func (o *Move) GetEffectChanges() []AbilityEffectChange {
	if o == nil || isNil(o.EffectChanges) {
		var ret []AbilityEffectChange
		return ret
	}
	return o.EffectChanges
}

// GetEffectChangesOk returns a tuple with the EffectChanges field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Move) GetEffectChangesOk() ([]AbilityEffectChange, bool) {
	if o == nil || isNil(o.EffectChanges) {
    return nil, false
	}
	return o.EffectChanges, true
}

// HasEffectChanges returns a boolean if a field has been set.
func (o *Move) HasEffectChanges() bool {
	if o != nil && !isNil(o.EffectChanges) {
		return true
	}

	return false
}

// SetEffectChanges gets a reference to the given []AbilityEffectChange and assigns it to the EffectChanges field.
func (o *Move) SetEffectChanges(v []AbilityEffectChange) {
	o.EffectChanges = v
}

// GetGeneration returns the Generation field value
func (o *Move) GetGeneration() MoveContestType {
	if o == nil {
		var ret MoveContestType
		return ret
	}

	return o.Generation
}

// GetGenerationOk returns a tuple with the Generation field value
// and a boolean to check if the value has been set.
func (o *Move) GetGenerationOk() (*MoveContestType, bool) {
	if o == nil {
    return nil, false
	}
	return &o.Generation, true
}

// SetGeneration sets field value
func (o *Move) SetGeneration(v MoveContestType) {
	o.Generation = v
}

// GetMeta returns the Meta field value if set, zero value otherwise.
func (o *Move) GetMeta() MoveMetaData {
	if o == nil || isNil(o.Meta) {
		var ret MoveMetaData
		return ret
	}
	return *o.Meta
}

// GetMetaOk returns a tuple with the Meta field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Move) GetMetaOk() (*MoveMetaData, bool) {
	if o == nil || isNil(o.Meta) {
    return nil, false
	}
	return o.Meta, true
}

// HasMeta returns a boolean if a field has been set.
func (o *Move) HasMeta() bool {
	if o != nil && !isNil(o.Meta) {
		return true
	}

	return false
}

// SetMeta gets a reference to the given MoveMetaData and assigns it to the Meta field.
func (o *Move) SetMeta(v MoveMetaData) {
	o.Meta = &v
}

// GetNames returns the Names field value if set, zero value otherwise.
func (o *Move) GetNames() []Name {
	if o == nil || isNil(o.Names) {
		var ret []Name
		return ret
	}
	return o.Names
}

// GetNamesOk returns a tuple with the Names field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Move) GetNamesOk() ([]Name, bool) {
	if o == nil || isNil(o.Names) {
    return nil, false
	}
	return o.Names, true
}

// HasNames returns a boolean if a field has been set.
func (o *Move) HasNames() bool {
	if o != nil && !isNil(o.Names) {
		return true
	}

	return false
}

// SetNames gets a reference to the given []Name and assigns it to the Names field.
func (o *Move) SetNames(v []Name) {
	o.Names = v
}

// GetPastValues returns the PastValues field value if set, zero value otherwise.
func (o *Move) GetPastValues() []PastMoveStatValues {
	if o == nil || isNil(o.PastValues) {
		var ret []PastMoveStatValues
		return ret
	}
	return o.PastValues
}

// GetPastValuesOk returns a tuple with the PastValues field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Move) GetPastValuesOk() ([]PastMoveStatValues, bool) {
	if o == nil || isNil(o.PastValues) {
    return nil, false
	}
	return o.PastValues, true
}

// HasPastValues returns a boolean if a field has been set.
func (o *Move) HasPastValues() bool {
	if o != nil && !isNil(o.PastValues) {
		return true
	}

	return false
}

// SetPastValues gets a reference to the given []PastMoveStatValues and assigns it to the PastValues field.
func (o *Move) SetPastValues(v []PastMoveStatValues) {
	o.PastValues = v
}

// GetStatChanges returns the StatChanges field value if set, zero value otherwise.
func (o *Move) GetStatChanges() []MoveStatChange {
	if o == nil || isNil(o.StatChanges) {
		var ret []MoveStatChange
		return ret
	}
	return o.StatChanges
}

// GetStatChangesOk returns a tuple with the StatChanges field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Move) GetStatChangesOk() ([]MoveStatChange, bool) {
	if o == nil || isNil(o.StatChanges) {
    return nil, false
	}
	return o.StatChanges, true
}

// HasStatChanges returns a boolean if a field has been set.
func (o *Move) HasStatChanges() bool {
	if o != nil && !isNil(o.StatChanges) {
		return true
	}

	return false
}

// SetStatChanges gets a reference to the given []MoveStatChange and assigns it to the StatChanges field.
func (o *Move) SetStatChanges(v []MoveStatChange) {
	o.StatChanges = v
}

// GetSuperContestEffect returns the SuperContestEffect field value if set, zero value otherwise.
func (o *Move) GetSuperContestEffect() MoveContestEffect {
	if o == nil || isNil(o.SuperContestEffect) {
		var ret MoveContestEffect
		return ret
	}
	return *o.SuperContestEffect
}

// GetSuperContestEffectOk returns a tuple with the SuperContestEffect field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Move) GetSuperContestEffectOk() (*MoveContestEffect, bool) {
	if o == nil || isNil(o.SuperContestEffect) {
    return nil, false
	}
	return o.SuperContestEffect, true
}

// HasSuperContestEffect returns a boolean if a field has been set.
func (o *Move) HasSuperContestEffect() bool {
	if o != nil && !isNil(o.SuperContestEffect) {
		return true
	}

	return false
}

// SetSuperContestEffect gets a reference to the given MoveContestEffect and assigns it to the SuperContestEffect field.
func (o *Move) SetSuperContestEffect(v MoveContestEffect) {
	o.SuperContestEffect = &v
}

// GetTarget returns the Target field value
func (o *Move) GetTarget() MoveContestType {
	if o == nil {
		var ret MoveContestType
		return ret
	}

	return o.Target
}

// GetTargetOk returns a tuple with the Target field value
// and a boolean to check if the value has been set.
func (o *Move) GetTargetOk() (*MoveContestType, bool) {
	if o == nil {
    return nil, false
	}
	return &o.Target, true
}

// SetTarget sets field value
func (o *Move) SetTarget(v MoveContestType) {
	o.Target = v
}

// GetType returns the Type field value
func (o *Move) GetType() MoveContestType {
	if o == nil {
		var ret MoveContestType
		return ret
	}

	return o.Type
}

// GetTypeOk returns a tuple with the Type field value
// and a boolean to check if the value has been set.
func (o *Move) GetTypeOk() (*MoveContestType, bool) {
	if o == nil {
    return nil, false
	}
	return &o.Type, true
}

// SetType sets field value
func (o *Move) SetType(v MoveContestType) {
	o.Type = v
}

func (o Move) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["id"] = o.Id
	}
	if true {
		toSerialize["name"] = o.Name
	}
	if o.Accuracy.IsSet() {
		toSerialize["accuracy"] = o.Accuracy.Get()
	}
	if o.EffectChance.IsSet() {
		toSerialize["effect_chance"] = o.EffectChance.Get()
	}
	if true {
		toSerialize["pp"] = o.Pp
	}
	if true {
		toSerialize["priority"] = o.Priority
	}
	if o.Power.IsSet() {
		toSerialize["power"] = o.Power.Get()
	}
	if !isNil(o.ContestCombos) {
		toSerialize["contest_combos"] = o.ContestCombos
	}
	if !isNil(o.ContestType) {
		toSerialize["contest_type"] = o.ContestType
	}
	if !isNil(o.ContestEffect) {
		toSerialize["contest_effect"] = o.ContestEffect
	}
	if !isNil(o.DamageClass) {
		toSerialize["damage_class"] = o.DamageClass
	}
	if !isNil(o.EffectEntries) {
		toSerialize["effect_entries"] = o.EffectEntries
	}
	if !isNil(o.EffectChanges) {
		toSerialize["effect_changes"] = o.EffectChanges
	}
	if true {
		toSerialize["generation"] = o.Generation
	}
	if !isNil(o.Meta) {
		toSerialize["meta"] = o.Meta
	}
	if !isNil(o.Names) {
		toSerialize["names"] = o.Names
	}
	if !isNil(o.PastValues) {
		toSerialize["past_values"] = o.PastValues
	}
	if !isNil(o.StatChanges) {
		toSerialize["stat_changes"] = o.StatChanges
	}
	if !isNil(o.SuperContestEffect) {
		toSerialize["super_contest_effect"] = o.SuperContestEffect
	}
	if true {
		toSerialize["target"] = o.Target
	}
	if true {
		toSerialize["type"] = o.Type
	}
	return json.Marshal(toSerialize)
}

type NullableMove struct {
	value *Move
	isSet bool
}

func (v NullableMove) Get() *Move {
	return v.value
}

func (v *NullableMove) Set(val *Move) {
	v.value = val
	v.isSet = true
}

func (v NullableMove) IsSet() bool {
	return v.isSet
}

func (v *NullableMove) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableMove(val *Move) *NullableMove {
	return &NullableMove{value: val, isSet: true}
}

func (v NullableMove) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableMove) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

