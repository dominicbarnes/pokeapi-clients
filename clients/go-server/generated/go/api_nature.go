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

// NatureApiController binds http requests to an api service and writes the service results to the http response
type NatureApiController struct {
	service NatureApiServicer
	errorHandler ErrorHandler
}

// NatureApiOption for how the controller is set up.
type NatureApiOption func(*NatureApiController)

// WithNatureApiErrorHandler inject ErrorHandler into controller
func WithNatureApiErrorHandler(h ErrorHandler) NatureApiOption {
	return func(c *NatureApiController) {
		c.errorHandler = h
	}
}

// NewNatureApiController creates a default api controller
func NewNatureApiController(s NatureApiServicer, opts ...NatureApiOption) Router {
	controller := &NatureApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the NatureApiController
func (c *NatureApiController) Routes() Routes {
	return Routes{ 
		{
			"NatureList",
			strings.ToUpper("Get"),
			"/api/v2/nature/",
			c.NatureList,
		},
		{
			"NatureRead",
			strings.ToUpper("Get"),
			"/api/v2/nature/{id}/",
			c.NatureRead,
		},
	}
}

// NatureList - 
func (c *NatureApiController) NatureList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.NatureList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// NatureRead - 
func (c *NatureApiController) NatureRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseInt32Parameter(params["id"], true)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}

	result, err := c.service.NatureRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}
