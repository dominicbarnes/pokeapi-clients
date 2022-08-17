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

// SuperContestEffectApiController binds http requests to an api service and writes the service results to the http response
type SuperContestEffectApiController struct {
	service SuperContestEffectApiServicer
	errorHandler ErrorHandler
}

// SuperContestEffectApiOption for how the controller is set up.
type SuperContestEffectApiOption func(*SuperContestEffectApiController)

// WithSuperContestEffectApiErrorHandler inject ErrorHandler into controller
func WithSuperContestEffectApiErrorHandler(h ErrorHandler) SuperContestEffectApiOption {
	return func(c *SuperContestEffectApiController) {
		c.errorHandler = h
	}
}

// NewSuperContestEffectApiController creates a default api controller
func NewSuperContestEffectApiController(s SuperContestEffectApiServicer, opts ...SuperContestEffectApiOption) Router {
	controller := &SuperContestEffectApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the SuperContestEffectApiController
func (c *SuperContestEffectApiController) Routes() Routes {
	return Routes{ 
		{
			"SuperContestEffectList",
			strings.ToUpper("Get"),
			"/api/v2/super-contest-effect/",
			c.SuperContestEffectList,
		},
		{
			"SuperContestEffectRead",
			strings.ToUpper("Get"),
			"/api/v2/super-contest-effect/{id}/",
			c.SuperContestEffectRead,
		},
	}
}

// SuperContestEffectList - 
func (c *SuperContestEffectApiController) SuperContestEffectList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.SuperContestEffectList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// SuperContestEffectRead - 
func (c *SuperContestEffectApiController) SuperContestEffectRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseInt32Parameter(params["id"], true)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}

	result, err := c.service.SuperContestEffectRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}
