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

// MoveBattleStyleApiController binds http requests to an api service and writes the service results to the http response
type MoveBattleStyleApiController struct {
	service MoveBattleStyleApiServicer
	errorHandler ErrorHandler
}

// MoveBattleStyleApiOption for how the controller is set up.
type MoveBattleStyleApiOption func(*MoveBattleStyleApiController)

// WithMoveBattleStyleApiErrorHandler inject ErrorHandler into controller
func WithMoveBattleStyleApiErrorHandler(h ErrorHandler) MoveBattleStyleApiOption {
	return func(c *MoveBattleStyleApiController) {
		c.errorHandler = h
	}
}

// NewMoveBattleStyleApiController creates a default api controller
func NewMoveBattleStyleApiController(s MoveBattleStyleApiServicer, opts ...MoveBattleStyleApiOption) Router {
	controller := &MoveBattleStyleApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the MoveBattleStyleApiController
func (c *MoveBattleStyleApiController) Routes() Routes {
	return Routes{ 
		{
			"MoveBattleStyleList",
			strings.ToUpper("Get"),
			"/api/v2/move-battle-style/",
			c.MoveBattleStyleList,
		},
		{
			"MoveBattleStyleRead",
			strings.ToUpper("Get"),
			"/api/v2/move-battle-style/{id}/",
			c.MoveBattleStyleRead,
		},
	}
}

// MoveBattleStyleList - 
func (c *MoveBattleStyleApiController) MoveBattleStyleList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.MoveBattleStyleList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// MoveBattleStyleRead - 
func (c *MoveBattleStyleApiController) MoveBattleStyleRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseInt32Parameter(params["id"], true)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}

	result, err := c.service.MoveBattleStyleRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}
