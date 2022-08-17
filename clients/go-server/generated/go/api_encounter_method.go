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

// EncounterMethodApiController binds http requests to an api service and writes the service results to the http response
type EncounterMethodApiController struct {
	service EncounterMethodApiServicer
	errorHandler ErrorHandler
}

// EncounterMethodApiOption for how the controller is set up.
type EncounterMethodApiOption func(*EncounterMethodApiController)

// WithEncounterMethodApiErrorHandler inject ErrorHandler into controller
func WithEncounterMethodApiErrorHandler(h ErrorHandler) EncounterMethodApiOption {
	return func(c *EncounterMethodApiController) {
		c.errorHandler = h
	}
}

// NewEncounterMethodApiController creates a default api controller
func NewEncounterMethodApiController(s EncounterMethodApiServicer, opts ...EncounterMethodApiOption) Router {
	controller := &EncounterMethodApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the EncounterMethodApiController
func (c *EncounterMethodApiController) Routes() Routes {
	return Routes{ 
		{
			"EncounterMethodList",
			strings.ToUpper("Get"),
			"/api/v2/encounter-method/",
			c.EncounterMethodList,
		},
		{
			"EncounterMethodRead",
			strings.ToUpper("Get"),
			"/api/v2/encounter-method/{id}/",
			c.EncounterMethodRead,
		},
	}
}

// EncounterMethodList - 
func (c *EncounterMethodApiController) EncounterMethodList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.EncounterMethodList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// EncounterMethodRead - 
func (c *EncounterMethodApiController) EncounterMethodRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseInt32Parameter(params["id"], true)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}

	result, err := c.service.EncounterMethodRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}
