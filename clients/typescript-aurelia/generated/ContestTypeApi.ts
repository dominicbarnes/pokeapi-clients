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
 */

import { autoinject } from 'aurelia-framework';
import { HttpClient } from 'aurelia-http-client';
import { Api } from './Api';
import { AuthStorage } from './AuthStorage';
import {
} from './models';

/**
 * contestTypeList - parameters interface
 */
export interface IContestTypeListParams {
  limit?: number;
  offset?: number;
}

/**
 * contestTypeRead - parameters interface
 */
export interface IContestTypeReadParams {
  id: number;
}

/**
 * ContestTypeApi - API class
 */
@autoinject()
export class ContestTypeApi extends Api {

  /**
   * Creates a new ContestTypeApi class.
   *
   * @param httpClient The Aurelia HTTP client to be injected.
   * @param authStorage A storage for authentication data.
   */
  constructor(httpClient: HttpClient, authStorage: AuthStorage) {
    super(httpClient, authStorage);
  }

  /**
   * @param params.limit 
   * @param params.offset 
   */
  async contestTypeList(params: IContestTypeListParams): Promise<string> {
    // Verify required parameters are set

    // Create URL to call
    const url = `${this.basePath}/api/v2/contest-type/`;

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()
      // Set query parameters
      .withParams({ 
        'limit': params['limit'],
        'offset': params['offset'],
      })

      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * @param params.id 
   */
  async contestTypeRead(params: IContestTypeReadParams): Promise<string> {
    // Verify required parameters are set
    this.ensureParamIsSet('contestTypeRead', params, 'id');

    // Create URL to call
    const url = `${this.basePath}/api/v2/contest-type/{id}/`
      .replace(`{${'id'}}`, encodeURIComponent(`${params['id']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()

      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

}

