# #
#
##No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
#The version of the OpenAPI document: 20220523
#Contact: blah@cliffano.com
#Generated by: https://openapi-generator.tech
#OpenAPI Generator version: 6.2.1
#

require "../spec_helper"
require "json"
require "time"

# Unit tests for OpenAPIClient::EncounterMethodApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe "EncounterMethodApi" do
  describe "test an instance of EncounterMethodApi" do
    it "should create an instance of EncounterMethodApi" do
      api_instance = OpenAPIClient::EncounterMethodApi.new
      # TODO expect(api_instance).to be_instance_of(OpenAPIClient::EncounterMethodApi)
    end
  end

  # unit tests for encounter_method_list
  # @param [Hash] opts the optional parameters
  # @option opts [Int32] :limit 
  # @option opts [Int32] :offset 
  # @return [String]
  describe "encounter_method_list test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for encounter_method_read
  # @param id 
  # @param [Hash] opts the optional parameters
  # @return [String]
  describe "encounter_method_read test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

end
