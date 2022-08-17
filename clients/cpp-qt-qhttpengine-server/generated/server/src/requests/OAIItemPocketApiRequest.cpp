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

#include "OAIHelpers.h"
#include "OAIItemPocketApiRequest.h"

namespace OpenAPI {

OAIItemPocketApiRequest::OAIItemPocketApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIItemPocketApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIItemPocketApiRequest::~OAIItemPocketApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIItemPocketApiRequest::~OAIItemPocketApiRequest()";
}

QMap<QString, QString>
OAIItemPocketApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIItemPocketApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIItemPocketApiRequest::getRawSocket(){
    return socket;
}


void OAIItemPocketApiRequest::itemPocketListRequest(){
    qDebug() << "/api/v2/item-pocket/";
    connect(this, &OAIItemPocketApiRequest::itemPocketList, handler.data(), &OAIItemPocketApiHandler::itemPocketList);

    
    qint32 limit;
    if(socket->queryString().keys().contains("limit")){
        fromStringValue(socket->queryString().value("limit"), limit);
    }
    
    qint32 offset;
    if(socket->queryString().keys().contains("offset")){
        fromStringValue(socket->queryString().value("offset"), offset);
    }
    


    emit itemPocketList(limit, offset);
}


void OAIItemPocketApiRequest::itemPocketReadRequest(const QString& idstr){
    qDebug() << "/api/v2/item-pocket/{id}/";
    connect(this, &OAIItemPocketApiRequest::itemPocketRead, handler.data(), &OAIItemPocketApiHandler::itemPocketRead);

    
    qint32 id;
    fromStringValue(idstr, id);
    

    emit itemPocketRead(id);
}



void OAIItemPocketApiRequest::itemPocketListResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIItemPocketApiRequest::itemPocketReadResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIItemPocketApiRequest::itemPocketListError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIItemPocketApiRequest::itemPocketReadError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIItemPocketApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIItemPocketApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
