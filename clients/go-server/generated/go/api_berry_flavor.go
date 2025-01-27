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

// BerryFlavorApiController binds http requests to an api service and writes the service results to the http response
type BerryFlavorApiController struct {
	service BerryFlavorApiServicer
	errorHandler ErrorHandler
}

// BerryFlavorApiOption for how the controller is set up.
type BerryFlavorApiOption func(*BerryFlavorApiController)

// WithBerryFlavorApiErrorHandler inject ErrorHandler into controller
func WithBerryFlavorApiErrorHandler(h ErrorHandler) BerryFlavorApiOption {
	return func(c *BerryFlavorApiController) {
		c.errorHandler = h
	}
}

// NewBerryFlavorApiController creates a default api controller
func NewBerryFlavorApiController(s BerryFlavorApiServicer, opts ...BerryFlavorApiOption) Router {
	controller := &BerryFlavorApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the BerryFlavorApiController
func (c *BerryFlavorApiController) Routes() Routes {
	return Routes{ 
		{
			"BerryFlavorList",
			strings.ToUpper("Get"),
			"/api/v2/berry-flavor/",
			c.BerryFlavorList,
		},
		{
			"BerryFlavorRead",
			strings.ToUpper("Get"),
			"/api/v2/berry-flavor/{id}/",
			c.BerryFlavorRead,
		},
	}
}

// BerryFlavorList - 
func (c *BerryFlavorApiController) BerryFlavorList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.BerryFlavorList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// BerryFlavorRead - 
func (c *BerryFlavorApiController) BerryFlavorRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseInt32Parameter(params["id"], true)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}

	result, err := c.service.BerryFlavorRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}
