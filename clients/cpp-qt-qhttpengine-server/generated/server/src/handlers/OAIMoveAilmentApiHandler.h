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

#ifndef OAI_OAIMoveAilmentApiHandler_H
#define OAI_OAIMoveAilmentApiHandler_H

#include <QObject>

#include <QString>

namespace OpenAPI {

class OAIMoveAilmentApiHandler : public QObject
{
    Q_OBJECT

public:
    OAIMoveAilmentApiHandler();
    virtual ~OAIMoveAilmentApiHandler();


public slots:
    virtual void moveAilmentList(qint32 limit, qint32 offset);
    virtual void moveAilmentRead(qint32 id);
    

};

}

#endif // OAI_OAIMoveAilmentApiHandler_H
