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

#ifndef OAI_OAIItemAttributeApiHandler_H
#define OAI_OAIItemAttributeApiHandler_H

#include <QObject>

#include <QString>

namespace OpenAPI {

class OAIItemAttributeApiHandler : public QObject
{
    Q_OBJECT

public:
    OAIItemAttributeApiHandler();
    virtual ~OAIItemAttributeApiHandler();


public slots:
    virtual void itemAttributeList(qint32 limit, qint32 offset);
    virtual void itemAttributeRead(qint32 id);
    

};

}

#endif // OAI_OAIItemAttributeApiHandler_H
