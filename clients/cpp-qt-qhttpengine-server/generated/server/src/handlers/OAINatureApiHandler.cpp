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

#include "OAINatureApiHandler.h"
#include "OAINatureApiRequest.h"

namespace OpenAPI {

OAINatureApiHandler::OAINatureApiHandler(){

}

OAINatureApiHandler::~OAINatureApiHandler(){

}

void OAINatureApiHandler::natureList(qint32 limit, qint32 offset) {
    Q_UNUSED(limit);
    Q_UNUSED(offset);
    auto reqObj = qobject_cast<OAINatureApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        QString res;
        reqObj->natureListResponse(res);
    }
}
void OAINatureApiHandler::natureRead(qint32 id) {
    Q_UNUSED(id);
    auto reqObj = qobject_cast<OAINatureApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        QString res;
        reqObj->natureReadResponse(res);
    }
}


}
