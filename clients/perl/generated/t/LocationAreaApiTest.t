=begin comment



No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 20220523
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator
# Please update the test cases below to test the API endpoints.
# Ref: https://openapi-generator.tech
#
use Test::More tests => 1; #TODO update number of test cases
use Test::Exception;

use lib 'lib';
use strict;
use warnings;

use_ok('WWW::OpenAPIClient::LocationAreaApi');

my $api = WWW::OpenAPIClient::LocationAreaApi->new();
isa_ok($api, 'WWW::OpenAPIClient::LocationAreaApi');

#
# location_area_list test
#
# uncomment below and update the test
#my $location_area_list_limit = undef; # replace NULL with a proper value
#my $location_area_list_offset = undef; # replace NULL with a proper value
#my $location_area_list_result = $api->location_area_list(limit => $location_area_list_limit, offset => $location_area_list_offset);

#
# location_area_read test
#
# uncomment below and update the test
#my $location_area_read_id = undef; # replace NULL with a proper value
#my $location_area_read_result = $api->location_area_read(id => $location_area_read_id);

