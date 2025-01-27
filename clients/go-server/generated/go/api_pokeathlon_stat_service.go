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

// PokeathlonStatApiService is a service that implements the logic for the PokeathlonStatApiServicer
// This service should implement the business logic for every endpoint for the PokeathlonStatApi API.
// Include any external packages or services that will be required by this service.
type PokeathlonStatApiService struct {
}

// NewPokeathlonStatApiService creates a default api service
func NewPokeathlonStatApiService() PokeathlonStatApiServicer {
	return &PokeathlonStatApiService{}
}

// PokeathlonStatList - 
func (s *PokeathlonStatApiService) PokeathlonStatList(ctx context.Context, limit int32, offset int32) (ImplResponse, error) {
	// TODO - update PokeathlonStatList with the required logic for this service method.
	// Add api_pokeathlon_stat_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	//return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("PokeathlonStatList method not implemented")
}

// PokeathlonStatRead - 
func (s *PokeathlonStatApiService) PokeathlonStatRead(ctx context.Context, id int32) (ImplResponse, error) {
	// TODO - update PokeathlonStatRead with the required logic for this service method.
	// Add api_pokeathlon_stat_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	//return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("PokeathlonStatRead method not implemented")
}
