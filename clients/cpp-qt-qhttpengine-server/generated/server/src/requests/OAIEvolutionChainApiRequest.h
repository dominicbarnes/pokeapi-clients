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

#ifndef OAI_OAIEvolutionChainApiRequest_H
#define OAI_OAIEvolutionChainApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include <QString>
#include "OAIEvolutionChainApiHandler.h"

namespace OpenAPI {

class OAIEvolutionChainApiRequest : public QObject
{
    Q_OBJECT

public:
    OAIEvolutionChainApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIEvolutionChainApiHandler> handler);
    virtual ~OAIEvolutionChainApiRequest();

    void evolutionChainListRequest();
    void evolutionChainReadRequest(const QString& id);
    

    void evolutionChainListResponse(const QString& res);
    void evolutionChainReadResponse(const QString& res);
    

    void evolutionChainListError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void evolutionChainReadError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

signals:
    void evolutionChainList(qint32 limit, qint32 offset);
    void evolutionChainRead(qint32 id);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAIEvolutionChainApiHandler> handler;

    inline void setSocketResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
    }
};

}

#endif // OAI_OAIEvolutionChainApiRequest_H
