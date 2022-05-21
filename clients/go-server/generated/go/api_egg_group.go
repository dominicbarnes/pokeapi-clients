/*
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 1.0.0
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

import (
	"encoding/json"
	"net/http"
	"strings"

	"github.com/gorilla/mux"
)

// EggGroupApiController binds http requests to an api service and writes the service results to the http response
type EggGroupApiController struct {
	service EggGroupApiServicer
	errorHandler ErrorHandler
}

// EggGroupApiOption for how the controller is set up.
type EggGroupApiOption func(*EggGroupApiController)

// WithEggGroupApiErrorHandler inject ErrorHandler into controller
func WithEggGroupApiErrorHandler(h ErrorHandler) EggGroupApiOption {
	return func(c *EggGroupApiController) {
		c.errorHandler = h
	}
}

// NewEggGroupApiController creates a default api controller
func NewEggGroupApiController(s EggGroupApiServicer, opts ...EggGroupApiOption) Router {
	controller := &EggGroupApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all of the api route for the EggGroupApiController
func (c *EggGroupApiController) Routes() Routes {
	return Routes{ 
		{
			"EggGroupList",
			strings.ToUpper("Get"),
			"/api/v2/egg-group/",
			c.EggGroupList,
		},
		{
			"EggGroupRead",
			strings.ToUpper("Get"),
			"/api/v2/egg-group/{id}/",
			c.EggGroupRead,
		},
	}
}

// EggGroupList - 
func (c *EggGroupApiController) EggGroupList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.EggGroupList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// EggGroupRead - 
func (c *EggGroupApiController) EggGroupRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseInt32Parameter(params["id"], true)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}

	result, err := c.service.EggGroupRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}