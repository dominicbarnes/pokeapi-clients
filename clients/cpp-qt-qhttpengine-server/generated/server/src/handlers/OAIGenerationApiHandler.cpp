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

#include "OAIGenerationApiHandler.h"
#include "OAIGenerationApiRequest.h"

namespace OpenAPI {

OAIGenerationApiHandler::OAIGenerationApiHandler(){

}

OAIGenerationApiHandler::~OAIGenerationApiHandler(){

}

void OAIGenerationApiHandler::generationList(qint32 limit, qint32 offset) {
    Q_UNUSED(limit);
    Q_UNUSED(offset);
    auto reqObj = qobject_cast<OAIGenerationApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        QString res;
        reqObj->generationListResponse(res);
    }
}
void OAIGenerationApiHandler::generationRead(qint32 id) {
    Q_UNUSED(id);
    auto reqObj = qobject_cast<OAIGenerationApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        QString res;
        reqObj->generationReadResponse(res);
    }
}


}
