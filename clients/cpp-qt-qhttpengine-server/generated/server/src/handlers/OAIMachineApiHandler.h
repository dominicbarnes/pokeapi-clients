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

#ifndef OAI_OAIMachineApiHandler_H
#define OAI_OAIMachineApiHandler_H

#include <QObject>

#include <QString>

namespace OpenAPI {

class OAIMachineApiHandler : public QObject
{
    Q_OBJECT

public:
    OAIMachineApiHandler();
    virtual ~OAIMachineApiHandler();


public slots:
    virtual void machineList(qint32 limit, qint32 offset);
    virtual void machineRead(qint32 id);
    

};

}

#endif // OAI_OAIMachineApiHandler_H
