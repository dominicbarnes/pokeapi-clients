// tslint:disable
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

import type { Observable } from 'rxjs';
import type { AjaxResponse } from 'rxjs/ajax';
import { BaseAPI, throwIfNullOrUndefined, encodeURI } from '../runtime';
import type { OperationOpts, HttpQuery } from '../runtime';

export interface StatListRequest {
    limit?: number;
    offset?: number;
}

export interface StatReadRequest {
    id: number;
}

/**
 * no description
 */
export class StatApi extends BaseAPI {

    /**
     */
    statList({ limit, offset }: StatListRequest): Observable<string>
    statList({ limit, offset }: StatListRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    statList({ limit, offset }: StatListRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {

        const query: HttpQuery = {};

        if (limit != null) { query['limit'] = limit; }
        if (offset != null) { query['offset'] = offset; }

        return this.request<string>({
            url: '/api/v2/stat/',
            method: 'GET',
            query,
        }, opts?.responseOpts);
    };

    /**
     */
    statRead({ id }: StatReadRequest): Observable<string>
    statRead({ id }: StatReadRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    statRead({ id }: StatReadRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {
        throwIfNullOrUndefined(id, 'id', 'statRead');

        return this.request<string>({
            url: '/api/v2/stat/{id}/'.replace('{id}', encodeURI(id)),
            method: 'GET',
        }, opts?.responseOpts);
    };

}
