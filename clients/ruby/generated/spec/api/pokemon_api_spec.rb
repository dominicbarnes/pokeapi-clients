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

# Unit tests for PokeApiClient::PokemonApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'PokemonApi' do
  before do
    # run before each test
    @api_instance = PokeApiClient::PokemonApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of PokemonApi' do
    it 'should create an instance of PokemonApi' do
      expect(@api_instance).to be_instance_of(PokeApiClient::PokemonApi)
    end
  end

  # unit tests for pokemon_list
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :limit 
  # @option opts [Integer] :offset 
  # @return [String]
  describe 'pokemon_list test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for pokemon_read
  # @param id 
  # @param [Hash] opts the optional parameters
  # @return [String]
  describe 'pokemon_read test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
