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

#ifndef OAI_OAICharacteristicApiHandler_H
#define OAI_OAICharacteristicApiHandler_H

#include <QObject>

#include <QString>

namespace OpenAPI {

class OAICharacteristicApiHandler : public QObject
{
    Q_OBJECT

public:
    OAICharacteristicApiHandler();
    virtual ~OAICharacteristicApiHandler();


public slots:
    virtual void characteristicList(qint32 limit, qint32 offset);
    virtual void characteristicRead(qint32 id);
    

};

}

#endif // OAI_OAICharacteristicApiHandler_H
