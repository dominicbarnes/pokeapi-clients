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
#include "OAILocationAreaApiRequest.h"

namespace OpenAPI {

OAILocationAreaApiRequest::OAILocationAreaApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAILocationAreaApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAILocationAreaApiRequest::~OAILocationAreaApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAILocationAreaApiRequest::~OAILocationAreaApiRequest()";
}

QMap<QString, QString>
OAILocationAreaApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAILocationAreaApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAILocationAreaApiRequest::getRawSocket(){
    return socket;
}


void OAILocationAreaApiRequest::locationAreaListRequest(){
    qDebug() << "/api/v2/location-area/";
    connect(this, &OAILocationAreaApiRequest::locationAreaList, handler.data(), &OAILocationAreaApiHandler::locationAreaList);

    
    qint32 limit;
    if(socket->queryString().keys().contains("limit")){
        fromStringValue(socket->queryString().value("limit"), limit);
    }
    
    qint32 offset;
    if(socket->queryString().keys().contains("offset")){
        fromStringValue(socket->queryString().value("offset"), offset);
    }
    


    emit locationAreaList(limit, offset);
}


void OAILocationAreaApiRequest::locationAreaReadRequest(const QString& idstr){
    qDebug() << "/api/v2/location-area/{id}/";
    connect(this, &OAILocationAreaApiRequest::locationAreaRead, handler.data(), &OAILocationAreaApiHandler::locationAreaRead);

    
    qint32 id;
    fromStringValue(idstr, id);
    

    emit locationAreaRead(id);
}



void OAILocationAreaApiRequest::locationAreaListResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAILocationAreaApiRequest::locationAreaReadResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAILocationAreaApiRequest::locationAreaListError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAILocationAreaApiRequest::locationAreaReadError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAILocationAreaApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAILocationAreaApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
