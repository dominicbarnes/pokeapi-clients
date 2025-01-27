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

// MoveBattleStyleApiService is a service that implements the logic for the MoveBattleStyleApiServicer
// This service should implement the business logic for every endpoint for the MoveBattleStyleApi API.
// Include any external packages or services that will be required by this service.
type MoveBattleStyleApiService struct {
}

// NewMoveBattleStyleApiService creates a default api service
func NewMoveBattleStyleApiService() MoveBattleStyleApiServicer {
	return &MoveBattleStyleApiService{}
}

// MoveBattleStyleList - 
func (s *MoveBattleStyleApiService) MoveBattleStyleList(ctx context.Context, limit int32, offset int32) (ImplResponse, error) {
	// TODO - update MoveBattleStyleList with the required logic for this service method.
	// Add api_move_battle_style_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	//return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("MoveBattleStyleList method not implemented")
}

// MoveBattleStyleRead - 
func (s *MoveBattleStyleApiService) MoveBattleStyleRead(ctx context.Context, id int32) (ImplResponse, error) {
	// TODO - update MoveBattleStyleRead with the required logic for this service method.
	// Add api_move_battle_style_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	//return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("MoveBattleStyleRead method not implemented")
}
