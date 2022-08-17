(ns .api.berry-flavor
  (:require [.core :refer [call-api check-required-params with-collection-format *api-context*]]
            [clojure.spec.alpha :as s]
            [spec-tools.core :as st]
            [orchestra.core :refer [defn-spec]]
            )
  (:import (java.io File)))


(defn-spec berry-flavor-list-with-http-info any?
  ""
  ([] (berry-flavor-list-with-http-info nil))
  ([{:keys [limit offset]} (s/map-of keyword? any?)]
   (call-api "/api/v2/berry-flavor/" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"limit" limit "offset" offset }
              :form-params   {}
              :content-types []
              :accepts       ["text/plain"]
              :auth-names    []})))

(defn-spec berry-flavor-list string?
  ""
  ([] (berry-flavor-list nil))
  ([optional-params any?]
   (let [res (:data (berry-flavor-list-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode string? res st/string-transformer)
        res))))


(defn-spec berry-flavor-read-with-http-info any?
  ""
  [id int?]
  (check-required-params id)
  (call-api "/api/v2/berry-flavor/{id}/" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["text/plain"]
             :auth-names    []}))

(defn-spec berry-flavor-read string?
  ""
  [id int?]
  (let [res (:data (berry-flavor-read-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode string? res st/string-transformer)
       res)))


