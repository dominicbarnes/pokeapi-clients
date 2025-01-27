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

// EvolutionChainApiController binds http requests to an api service and writes the service results to the http response
type EvolutionChainApiController struct {
	service EvolutionChainApiServicer
	errorHandler ErrorHandler
}

// EvolutionChainApiOption for how the controller is set up.
type EvolutionChainApiOption func(*EvolutionChainApiController)

// WithEvolutionChainApiErrorHandler inject ErrorHandler into controller
func WithEvolutionChainApiErrorHandler(h ErrorHandler) EvolutionChainApiOption {
	return func(c *EvolutionChainApiController) {
		c.errorHandler = h
	}
}

// NewEvolutionChainApiController creates a default api controller
func NewEvolutionChainApiController(s EvolutionChainApiServicer, opts ...EvolutionChainApiOption) Router {
	controller := &EvolutionChainApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the EvolutionChainApiController
func (c *EvolutionChainApiController) Routes() Routes {
	return Routes{ 
		{
			"EvolutionChainList",
			strings.ToUpper("Get"),
			"/api/v2/evolution-chain/",
			c.EvolutionChainList,
		},
		{
			"EvolutionChainRead",
			strings.ToUpper("Get"),
			"/api/v2/evolution-chain/{id}/",
			c.EvolutionChainRead,
		},
	}
}

// EvolutionChainList - 
func (c *EvolutionChainApiController) EvolutionChainList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.EvolutionChainList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// EvolutionChainRead - 
func (c *EvolutionChainApiController) EvolutionChainRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseInt32Parameter(params["id"], true)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}

	result, err := c.service.EvolutionChainRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}
