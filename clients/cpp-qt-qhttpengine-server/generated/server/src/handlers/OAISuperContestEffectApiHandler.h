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

#ifndef OAI_OAISuperContestEffectApiHandler_H
#define OAI_OAISuperContestEffectApiHandler_H

#include <QObject>

#include <QString>

namespace OpenAPI {

class OAISuperContestEffectApiHandler : public QObject
{
    Q_OBJECT

public:
    OAISuperContestEffectApiHandler();
    virtual ~OAISuperContestEffectApiHandler();


public slots:
    virtual void superContestEffectList(qint32 limit, qint32 offset);
    virtual void superContestEffectRead(qint32 id);
    

};

}

#endif // OAI_OAISuperContestEffectApiHandler_H
