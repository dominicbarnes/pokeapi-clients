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

export interface VersionGroupListRequest {
    limit?: number;
    offset?: number;
}

export interface VersionGroupReadRequest {
    id: number;
}

/**
 * no description
 */
export class VersionGroupApi extends BaseAPI {

    /**
     */
    versionGroupList({ limit, offset }: VersionGroupListRequest): Observable<string>
    versionGroupList({ limit, offset }: VersionGroupListRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    versionGroupList({ limit, offset }: VersionGroupListRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {

        const query: HttpQuery = {};

        if (limit != null) { query['limit'] = limit; }
        if (offset != null) { query['offset'] = offset; }

        return this.request<string>({
            url: '/api/v2/version-group/',
            method: 'GET',
            query,
        }, opts?.responseOpts);
    };

    /**
     */
    versionGroupRead({ id }: VersionGroupReadRequest): Observable<string>
    versionGroupRead({ id }: VersionGroupReadRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    versionGroupRead({ id }: VersionGroupReadRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {
        throwIfNullOrUndefined(id, 'id', 'versionGroupRead');

        return this.request<string>({
            url: '/api/v2/version-group/{id}/'.replace('{id}', encodeURI(id)),
            method: 'GET',
        }, opts?.responseOpts);
    };

}
