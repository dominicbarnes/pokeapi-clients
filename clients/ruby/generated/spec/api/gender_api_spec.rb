=begin
#

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 20220523
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 6.1.0-SNAPSHOT

=end

require 'spec_helper'
require 'json'

# Unit tests for PokeApiClient::GenderApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'GenderApi' do
  before do
    # run before each test
    @api_instance = PokeApiClient::GenderApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of GenderApi' do
    it 'should create an instance of GenderApi' do
      expect(@api_instance).to be_instance_of(PokeApiClient::GenderApi)
    end
  end

  # unit tests for gender_list
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :limit 
  # @option opts [Integer] :offset 
  # @return [String]
  describe 'gender_list test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for gender_read
  # @param id 
  # @param [Hash] opts the optional parameters
  # @return [String]
  describe 'gender_read test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
