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

// GrowthRateApiController binds http requests to an api service and writes the service results to the http response
type GrowthRateApiController struct {
	service GrowthRateApiServicer
	errorHandler ErrorHandler
}

// GrowthRateApiOption for how the controller is set up.
type GrowthRateApiOption func(*GrowthRateApiController)

// WithGrowthRateApiErrorHandler inject ErrorHandler into controller
func WithGrowthRateApiErrorHandler(h ErrorHandler) GrowthRateApiOption {
	return func(c *GrowthRateApiController) {
		c.errorHandler = h
	}
}

// NewGrowthRateApiController creates a default api controller
func NewGrowthRateApiController(s GrowthRateApiServicer, opts ...GrowthRateApiOption) Router {
	controller := &GrowthRateApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all of the api route for the GrowthRateApiController
func (c *GrowthRateApiController) Routes() Routes {
	return Routes{ 
		{
			"GrowthRateList",
			strings.ToUpper("Get"),
			"/api/v2/growth-rate/",
			c.GrowthRateList,
		},
		{
			"GrowthRateRead",
			strings.ToUpper("Get"),
			"/api/v2/growth-rate/{id}/",
			c.GrowthRateRead,
		},
	}
}

// GrowthRateList - 
func (c *GrowthRateApiController) GrowthRateList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.GrowthRateList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// GrowthRateRead - 
func (c *GrowthRateApiController) GrowthRateRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseInt32Parameter(params["id"], true)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}

	result, err := c.service.GrowthRateRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}
