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

export interface ItemCategoryListRequest {
    limit?: number;
    offset?: number;
}

export interface ItemCategoryReadRequest {
    id: number;
}

/**
 * no description
 */
export class ItemCategoryApi extends BaseAPI {

    /**
     */
    itemCategoryList({ limit, offset }: ItemCategoryListRequest): Observable<string>
    itemCategoryList({ limit, offset }: ItemCategoryListRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    itemCategoryList({ limit, offset }: ItemCategoryListRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {

        const query: HttpQuery = {};

        if (limit != null) { query['limit'] = limit; }
        if (offset != null) { query['offset'] = offset; }

        return this.request<string>({
            url: '/api/v2/item-category/',
            method: 'GET',
            query,
        }, opts?.responseOpts);
    };

    /**
     */
    itemCategoryRead({ id }: ItemCategoryReadRequest): Observable<string>
    itemCategoryRead({ id }: ItemCategoryReadRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    itemCategoryRead({ id }: ItemCategoryReadRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {
        throwIfNullOrUndefined(id, 'id', 'itemCategoryRead');

        return this.request<string>({
            url: '/api/v2/item-category/{id}/'.replace('{id}', encodeURI(id)),
            method: 'GET',
        }, opts?.responseOpts);
    };

}
