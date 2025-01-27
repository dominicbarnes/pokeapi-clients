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

export interface EncounterConditionValueListRequest {
    limit?: number;
    offset?: number;
}

export interface EncounterConditionValueReadRequest {
    id: number;
}

/**
 * no description
 */
export class EncounterConditionValueApi extends BaseAPI {

    /**
     */
    encounterConditionValueList({ limit, offset }: EncounterConditionValueListRequest): Observable<string>
    encounterConditionValueList({ limit, offset }: EncounterConditionValueListRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    encounterConditionValueList({ limit, offset }: EncounterConditionValueListRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {

        const query: HttpQuery = {};

        if (limit != null) { query['limit'] = limit; }
        if (offset != null) { query['offset'] = offset; }

        return this.request<string>({
            url: '/api/v2/encounter-condition-value/',
            method: 'GET',
            query,
        }, opts?.responseOpts);
    };

    /**
     */
    encounterConditionValueRead({ id }: EncounterConditionValueReadRequest): Observable<string>
    encounterConditionValueRead({ id }: EncounterConditionValueReadRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    encounterConditionValueRead({ id }: EncounterConditionValueReadRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {
        throwIfNullOrUndefined(id, 'id', 'encounterConditionValueRead');

        return this.request<string>({
            url: '/api/v2/encounter-condition-value/{id}/'.replace('{id}', encodeURI(id)),
            method: 'GET',
        }, opts?.responseOpts);
    };

}
