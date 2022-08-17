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

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QDebug>

#include "OAIRegionApiHandler.h"
#include "OAIRegionApiRequest.h"

namespace OpenAPI {

OAIRegionApiHandler::OAIRegionApiHandler(){

}

OAIRegionApiHandler::~OAIRegionApiHandler(){

}

void OAIRegionApiHandler::regionList(qint32 limit, qint32 offset) {
    Q_UNUSED(limit);
    Q_UNUSED(offset);
    auto reqObj = qobject_cast<OAIRegionApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        QString res;
        reqObj->regionListResponse(res);
    }
}
void OAIRegionApiHandler::regionRead(qint32 id) {
    Q_UNUSED(id);
    auto reqObj = qobject_cast<OAIRegionApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        QString res;
        reqObj->regionReadResponse(res);
    }
}


}
