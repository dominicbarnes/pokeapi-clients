=begin
#

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 20220523
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 6.2.1

=end

require 'spec_helper'
require 'json'

# Unit tests for PokeApiClient::EncounterConditionValueApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'EncounterConditionValueApi' do
  before do
    # run before each test
    @api_instance = PokeApiClient::EncounterConditionValueApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of EncounterConditionValueApi' do
    it 'should create an instance of EncounterConditionValueApi' do
      expect(@api_instance).to be_instance_of(PokeApiClient::EncounterConditionValueApi)
    end
  end

  # unit tests for encounter_condition_value_list
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :limit 
  # @option opts [Integer] :offset 
  # @return [String]
  describe 'encounter_condition_value_list test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for encounter_condition_value_read
  # @param id 
  # @param [Hash] opts the optional parameters
  # @return [String]
  describe 'encounter_condition_value_read test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
