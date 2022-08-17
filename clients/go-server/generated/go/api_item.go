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

// ItemApiController binds http requests to an api service and writes the service results to the http response
type ItemApiController struct {
	service ItemApiServicer
	errorHandler ErrorHandler
}

// ItemApiOption for how the controller is set up.
type ItemApiOption func(*ItemApiController)

// WithItemApiErrorHandler inject ErrorHandler into controller
func WithItemApiErrorHandler(h ErrorHandler) ItemApiOption {
	return func(c *ItemApiController) {
		c.errorHandler = h
	}
}

// NewItemApiController creates a default api controller
func NewItemApiController(s ItemApiServicer, opts ...ItemApiOption) Router {
	controller := &ItemApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the ItemApiController
func (c *ItemApiController) Routes() Routes {
	return Routes{ 
		{
			"ItemList",
			strings.ToUpper("Get"),
			"/api/v2/item/",
			c.ItemList,
		},
		{
			"ItemRead",
			strings.ToUpper("Get"),
			"/api/v2/item/{id}/",
			c.ItemRead,
		},
	}
}

// ItemList - 
func (c *ItemApiController) ItemList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.ItemList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// ItemRead - 
func (c *ItemApiController) ItemRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseInt32Parameter(params["id"], true)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}

	result, err := c.service.ItemRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}
