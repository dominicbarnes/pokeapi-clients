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

export interface PokemonListRequest {
    limit?: number;
    offset?: number;
}

export interface PokemonReadRequest {
    id: number;
}

/**
 * no description
 */
export class PokemonApi extends BaseAPI {

    /**
     */
    pokemonList({ limit, offset }: PokemonListRequest): Observable<string>
    pokemonList({ limit, offset }: PokemonListRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    pokemonList({ limit, offset }: PokemonListRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {

        const query: HttpQuery = {};

        if (limit != null) { query['limit'] = limit; }
        if (offset != null) { query['offset'] = offset; }

        return this.request<string>({
            url: '/api/v2/pokemon/',
            method: 'GET',
            query,
        }, opts?.responseOpts);
    };

    /**
     */
    pokemonRead({ id }: PokemonReadRequest): Observable<string>
    pokemonRead({ id }: PokemonReadRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    pokemonRead({ id }: PokemonReadRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {
        throwIfNullOrUndefined(id, 'id', 'pokemonRead');

        return this.request<string>({
            url: '/api/v2/pokemon/{id}/'.replace('{id}', encodeURI(id)),
            method: 'GET',
        }, opts?.responseOpts);
    };

}
