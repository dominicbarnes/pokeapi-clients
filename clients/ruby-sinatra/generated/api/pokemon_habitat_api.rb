require 'json'


MyApp.add_route('GET', '/api/v2/pokemon-habitat/', {
  "resourcePath" => "/PokemonHabitat",
  "summary" => "",
  "nickname" => "pokemon_habitat_list",
  "responseClass" => "String",
  "endpoint" => "/api/v2/pokemon-habitat/",
  "notes" => "",
  "parameters" => [
    {
      "name" => "limit",
      "description" => "",
      "dataType" => "Integer",
      "allowableValues" => "",
      "paramType" => "query",
    },
    {
      "name" => "offset",
      "description" => "",
      "dataType" => "Integer",
      "allowableValues" => "",
      "paramType" => "query",
    },
    ]}) do
  cross_origin
  # the guts live here

  {"message" => "yes, it worked"}.to_json
end


MyApp.add_route('GET', '/api/v2/pokemon-habitat/{id}/', {
  "resourcePath" => "/PokemonHabitat",
  "summary" => "",
  "nickname" => "pokemon_habitat_read",
  "responseClass" => "String",
  "endpoint" => "/api/v2/pokemon-habitat/{id}/",
  "notes" => "",
  "parameters" => [
    {
      "name" => "id",
      "description" => "",
      "dataType" => "Integer",
      "paramType" => "path",
    },
    ]}) do
  cross_origin
  # the guts live here

  {"message" => "yes, it worked"}.to_json
end

