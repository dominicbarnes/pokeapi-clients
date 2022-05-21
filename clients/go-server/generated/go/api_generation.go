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

// GenerationApiController binds http requests to an api service and writes the service results to the http response
type GenerationApiController struct {
	service GenerationApiServicer
	errorHandler ErrorHandler
}

// GenerationApiOption for how the controller is set up.
type GenerationApiOption func(*GenerationApiController)

// WithGenerationApiErrorHandler inject ErrorHandler into controller
func WithGenerationApiErrorHandler(h ErrorHandler) GenerationApiOption {
	return func(c *GenerationApiController) {
		c.errorHandler = h
	}
}

// NewGenerationApiController creates a default api controller
func NewGenerationApiController(s GenerationApiServicer, opts ...GenerationApiOption) Router {
	controller := &GenerationApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all of the api route for the GenerationApiController
func (c *GenerationApiController) Routes() Routes {
	return Routes{ 
		{
			"GenerationList",
			strings.ToUpper("Get"),
			"/api/v2/generation/",
			c.GenerationList,
		},
		{
			"GenerationRead",
			strings.ToUpper("Get"),
			"/api/v2/generation/{id}/",
			c.GenerationRead,
		},
	}
}

// GenerationList - 
func (c *GenerationApiController) GenerationList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.GenerationList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// GenerationRead - 
func (c *GenerationApiController) GenerationRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseInt32Parameter(params["id"], true)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}

	result, err := c.service.GenerationRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}