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

export interface MoveLearnMethodListRequest {
    limit?: number;
    offset?: number;
}

export interface MoveLearnMethodReadRequest {
    id: number;
}

/**
 * no description
 */
export class MoveLearnMethodApi extends BaseAPI {

    /**
     */
    moveLearnMethodList({ limit, offset }: MoveLearnMethodListRequest): Observable<string>
    moveLearnMethodList({ limit, offset }: MoveLearnMethodListRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    moveLearnMethodList({ limit, offset }: MoveLearnMethodListRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {

        const query: HttpQuery = {};

        if (limit != null) { query['limit'] = limit; }
        if (offset != null) { query['offset'] = offset; }

        return this.request<string>({
            url: '/api/v2/move-learn-method/',
            method: 'GET',
            query,
        }, opts?.responseOpts);
    };

    /**
     */
    moveLearnMethodRead({ id }: MoveLearnMethodReadRequest): Observable<string>
    moveLearnMethodRead({ id }: MoveLearnMethodReadRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    moveLearnMethodRead({ id }: MoveLearnMethodReadRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {
        throwIfNullOrUndefined(id, 'id', 'moveLearnMethodRead');

        return this.request<string>({
            url: '/api/v2/move-learn-method/{id}/'.replace('{id}', encodeURI(id)),
            method: 'GET',
        }, opts?.responseOpts);
    };

}
