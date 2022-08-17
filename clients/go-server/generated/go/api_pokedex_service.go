/*
 * 
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 20220523
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

import (
	"context"
	"net/http"
	"errors"
)

// PokedexApiService is a service that implements the logic for the PokedexApiServicer
// This service should implement the business logic for every endpoint for the PokedexApi API.
// Include any external packages or services that will be required by this service.
type PokedexApiService struct {
}

// NewPokedexApiService creates a default api service
func NewPokedexApiService() PokedexApiServicer {
	return &PokedexApiService{}
}

// PokedexList - 
func (s *PokedexApiService) PokedexList(ctx context.Context, limit int32, offset int32) (ImplResponse, error) {
	// TODO - update PokedexList with the required logic for this service method.
	// Add api_pokedex_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	//return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("PokedexList method not implemented")
}

// PokedexRead - 
func (s *PokedexApiService) PokedexRead(ctx context.Context, id int32) (ImplResponse, error) {
	// TODO - update PokedexRead with the required logic for this service method.
	// Add api_pokedex_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	//return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("PokedexRead method not implemented")
}
