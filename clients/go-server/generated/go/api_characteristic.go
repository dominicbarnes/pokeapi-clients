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
	"encoding/json"
	"net/http"
	"strings"

	"github.com/gorilla/mux"
)

// CharacteristicApiController binds http requests to an api service and writes the service results to the http response
type CharacteristicApiController struct {
	service CharacteristicApiServicer
	errorHandler ErrorHandler
}

// CharacteristicApiOption for how the controller is set up.
type CharacteristicApiOption func(*CharacteristicApiController)

// WithCharacteristicApiErrorHandler inject ErrorHandler into controller
func WithCharacteristicApiErrorHandler(h ErrorHandler) CharacteristicApiOption {
	return func(c *CharacteristicApiController) {
		c.errorHandler = h
	}
}

// NewCharacteristicApiController creates a default api controller
func NewCharacteristicApiController(s CharacteristicApiServicer, opts ...CharacteristicApiOption) Router {
	controller := &CharacteristicApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the CharacteristicApiController
func (c *CharacteristicApiController) Routes() Routes {
	return Routes{ 
		{
			"CharacteristicList",
			strings.ToUpper("Get"),
			"/api/v2/characteristic/",
			c.CharacteristicList,
		},
		{
			"CharacteristicRead",
			strings.ToUpper("Get"),
			"/api/v2/characteristic/{id}/",
			c.CharacteristicRead,
		},
	}
}

// CharacteristicList - 
func (c *CharacteristicApiController) CharacteristicList(w http.ResponseWriter, r *http.Request) {
	query := r.URL.Query()
	limitParam, err := parseInt32Parameter(query.Get("limit"), false)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	offsetParam, err := parseInt32Parameter(query.Get("offset"), false)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	result, err := c.service.CharacteristicList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// CharacteristicRead - 
func (c *CharacteristicApiController) CharacteristicRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseInt32Parameter(params["id"], true)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}

	result, err := c.service.CharacteristicRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}
