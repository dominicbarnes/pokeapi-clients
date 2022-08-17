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

// ItemFlingEffectApiService is a service that implements the logic for the ItemFlingEffectApiServicer
// This service should implement the business logic for every endpoint for the ItemFlingEffectApi API.
// Include any external packages or services that will be required by this service.
type ItemFlingEffectApiService struct {
}

// NewItemFlingEffectApiService creates a default api service
func NewItemFlingEffectApiService() ItemFlingEffectApiServicer {
	return &ItemFlingEffectApiService{}
}

// ItemFlingEffectList - 
func (s *ItemFlingEffectApiService) ItemFlingEffectList(ctx context.Context, limit int32, offset int32) (ImplResponse, error) {
	// TODO - update ItemFlingEffectList with the required logic for this service method.
	// Add api_item_fling_effect_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	//return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("ItemFlingEffectList method not implemented")
}

// ItemFlingEffectRead - 
func (s *ItemFlingEffectApiService) ItemFlingEffectRead(ctx context.Context, id int32) (ImplResponse, error) {
	// TODO - update ItemFlingEffectRead with the required logic for this service method.
	// Add api_item_fling_effect_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	//return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("ItemFlingEffectRead method not implemented")
}
