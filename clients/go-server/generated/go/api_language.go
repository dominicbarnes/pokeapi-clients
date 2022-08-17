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

// LanguageApiController binds http requests to an api service and writes the service results to the http response
type LanguageApiController struct {
	service LanguageApiServicer
	errorHandler ErrorHandler
}

// LanguageApiOption for how the controller is set up.
type LanguageApiOption func(*LanguageApiController)

// WithLanguageApiErrorHandler inject ErrorHandler into controller
func WithLanguageApiErrorHandler(h ErrorHandler) LanguageApiOption {
	return func(c *LanguageApiController) {
		c.errorHandler = h
	}
}

// NewLanguageApiController creates a default api controller
func NewLanguageApiController(s LanguageApiServicer, opts ...LanguageApiOption) Router {
	controller := &LanguageApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the LanguageApiController
func (c *LanguageApiController) Routes() Routes {
	return Routes{ 
		{
			"LanguageList",
			strings.ToUpper("Get"),
			"/api/v2/language/",
			c.LanguageList,
		},
		{
			"LanguageRead",
			strings.ToUpper("Get"),
			"/api/v2/language/{id}/",
			c.LanguageRead,
		},
	}
}

// LanguageList - 
func (c *LanguageApiController) LanguageList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.LanguageList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// LanguageRead - 
func (c *LanguageApiController) LanguageRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseInt32Parameter(params["id"], true)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}

	result, err := c.service.LanguageRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}
