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

use_ok('WWW::OpenAPIClient::MachineApi');

my $api = WWW::OpenAPIClient::MachineApi->new();
isa_ok($api, 'WWW::OpenAPIClient::MachineApi');

#
# machine_list test
#
# uncomment below and update the test
#my $machine_list_limit = undef; # replace NULL with a proper value
#my $machine_list_offset = undef; # replace NULL with a proper value
#my $machine_list_result = $api->machine_list(limit => $machine_list_limit, offset => $machine_list_offset);

#
# machine_read test
#
# uncomment below and update the test
#my $machine_read_id = undef; # replace NULL with a proper value
#my $machine_read_result = $api->machine_read(id => $machine_read_id);

