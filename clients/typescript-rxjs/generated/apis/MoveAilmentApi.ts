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

export interface MoveAilmentListRequest {
    limit?: number;
    offset?: number;
}

export interface MoveAilmentReadRequest {
    id: number;
}

/**
 * no description
 */
export class MoveAilmentApi extends BaseAPI {

    /**
     */
    moveAilmentList({ limit, offset }: MoveAilmentListRequest): Observable<string>
    moveAilmentList({ limit, offset }: MoveAilmentListRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    moveAilmentList({ limit, offset }: MoveAilmentListRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {

        const query: HttpQuery = {};

        if (limit != null) { query['limit'] = limit; }
        if (offset != null) { query['offset'] = offset; }

        return this.request<string>({
            url: '/api/v2/move-ailment/',
            method: 'GET',
            query,
        }, opts?.responseOpts);
    };

    /**
     */
    moveAilmentRead({ id }: MoveAilmentReadRequest): Observable<string>
    moveAilmentRead({ id }: MoveAilmentReadRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    moveAilmentRead({ id }: MoveAilmentReadRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {
        throwIfNullOrUndefined(id, 'id', 'moveAilmentRead');

        return this.request<string>({
            url: '/api/v2/move-ailment/{id}/'.replace('{id}', encodeURI(id)),
            method: 'GET',
        }, opts?.responseOpts);
    };

}
