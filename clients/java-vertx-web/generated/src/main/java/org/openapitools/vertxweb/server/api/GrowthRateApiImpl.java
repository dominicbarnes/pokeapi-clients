package org.openapitools.vertxweb.server.api;


import org.openapitools.vertxweb.server.ApiResponse;

import io.vertx.core.Future;
import io.vertx.core.json.JsonObject;
import io.vertx.ext.web.handler.HttpException;

import java.util.List;
import java.util.Map;

// Implement this class

public class GrowthRateApiImpl implements GrowthRateApi {
    public Future<ApiResponse<String>> growthRateList(Integer limit, Integer offset) {
        return Future.failedFuture(new HttpException(501));
    }

    public Future<ApiResponse<String>> growthRateRead(Integer id) {
        return Future.failedFuture(new HttpException(501));
    }

}
