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

// ItemPocketApiController binds http requests to an api service and writes the service results to the http response
type ItemPocketApiController struct {
	service ItemPocketApiServicer
	errorHandler ErrorHandler
}

// ItemPocketApiOption for how the controller is set up.
type ItemPocketApiOption func(*ItemPocketApiController)

// WithItemPocketApiErrorHandler inject ErrorHandler into controller
func WithItemPocketApiErrorHandler(h ErrorHandler) ItemPocketApiOption {
	return func(c *ItemPocketApiController) {
		c.errorHandler = h
	}
}

// NewItemPocketApiController creates a default api controller
func NewItemPocketApiController(s ItemPocketApiServicer, opts ...ItemPocketApiOption) Router {
	controller := &ItemPocketApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the ItemPocketApiController
func (c *ItemPocketApiController) Routes() Routes {
	return Routes{ 
		{
			"ItemPocketList",
			strings.ToUpper("Get"),
			"/api/v2/item-pocket/",
			c.ItemPocketList,
		},
		{
			"ItemPocketRead",
			strings.ToUpper("Get"),
			"/api/v2/item-pocket/{id}/",
			c.ItemPocketRead,
		},
	}
}

// ItemPocketList - 
func (c *ItemPocketApiController) ItemPocketList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.ItemPocketList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// ItemPocketRead - 
func (c *ItemPocketApiController) ItemPocketRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseInt32Parameter(params["id"], true)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}

	result, err := c.service.ItemPocketRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}
