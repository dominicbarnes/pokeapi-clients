/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */



import ApiClient from "../ApiClient";

/**
* BerryFirmness service.
* @module api/BerryFirmnessApi
* @version 20220523
*/
export default class BerryFirmnessApi extends ApiClient {

    /**
    * Constructs a new BerryFirmnessApi. 
    * @alias module:api/BerryFirmnessApi
    * @class
    */
    constructor() {
      super();
      this.baseURL = null;
    }


    /**
     * @param {Object} opts Optional parameters
     * @param {Number} opts.limit 
     * @param {Number} opts.offset 
     * @return {Promise<String>}
     */
    async berryFirmnessList(opts) {
      opts = opts || {};
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
        'limit': opts['limit'],
        'offset': opts['offset']
      };
      let headerParams = {
        'User-Agent': 'OpenAPI-Generator/20220523/Javascript',
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = [];
      let accepts = ['text/plain'];
      let returnType = 'String';

      return this.callApi(
        '/api/v2/berry-firmness/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType
      );
    }

    /**
     * @param {Number} id 
     * @return {Promise<String>}
     */
    async berryFirmnessRead(id) {
      let postBody = null;
      // verify the required parameter 'id' is set
      if (id === undefined || id === null) {
        throw new Error("Missing the required parameter 'id' when calling berryFirmnessRead");
      }

      let pathParams = {
        'id': id
      };
      let queryParams = {
      };
      let headerParams = {
        'User-Agent': 'OpenAPI-Generator/20220523/Javascript',
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = [];
      let accepts = ['text/plain'];
      let returnType = 'String';

      return this.callApi(
        '/api/v2/berry-firmness/{id}/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType
      );
    }


}
