# #
#
##No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
#The version of the OpenAPI document: 20220523
#Contact: blah@cliffano.com
#Generated by: https://openapi-generator.tech
#OpenAPI Generator version: 6.1.0-SNAPSHOT
#

require "../spec_helper"
require "json"
require "time"

# Unit tests for ::MoveBattleStyleApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe "MoveBattleStyleApi" do
  describe "test an instance of MoveBattleStyleApi" do
    it "should create an instance of MoveBattleStyleApi" do
      api_instance = ::MoveBattleStyleApi.new
      # TODO expect(api_instance).to be_instance_of(::MoveBattleStyleApi)
    end
  end

  # unit tests for move_battle_style_list
  # @param [Hash] opts the optional parameters
  # @option opts [Int32] :limit 
  # @option opts [Int32] :offset 
  # @return [String]
  describe "move_battle_style_list test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for move_battle_style_read
  # @param id 
  # @param [Hash] opts the optional parameters
  # @return [String]
  describe "move_battle_style_read test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

end
