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

// BerryFirmnessApiService is a service that implements the logic for the BerryFirmnessApiServicer
// This service should implement the business logic for every endpoint for the BerryFirmnessApi API.
// Include any external packages or services that will be required by this service.
type BerryFirmnessApiService struct {
}

// NewBerryFirmnessApiService creates a default api service
func NewBerryFirmnessApiService() BerryFirmnessApiServicer {
	return &BerryFirmnessApiService{}
}

// BerryFirmnessList - 
func (s *BerryFirmnessApiService) BerryFirmnessList(ctx context.Context, limit int32, offset int32) (ImplResponse, error) {
	// TODO - update BerryFirmnessList with the required logic for this service method.
	// Add api_berry_firmness_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	//return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("BerryFirmnessList method not implemented")
}

// BerryFirmnessRead - 
func (s *BerryFirmnessApiService) BerryFirmnessRead(ctx context.Context, id int32) (ImplResponse, error) {
	// TODO - update BerryFirmnessRead with the required logic for this service method.
	// Add api_berry_firmness_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	//return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("BerryFirmnessRead method not implemented")
}
