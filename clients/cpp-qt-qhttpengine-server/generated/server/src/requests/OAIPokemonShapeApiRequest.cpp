/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
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
#include "OAIPokemonShapeApiRequest.h"

namespace OpenAPI {

OAIPokemonShapeApiRequest::OAIPokemonShapeApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIPokemonShapeApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIPokemonShapeApiRequest::~OAIPokemonShapeApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIPokemonShapeApiRequest::~OAIPokemonShapeApiRequest()";
}

QMap<QString, QString>
OAIPokemonShapeApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIPokemonShapeApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIPokemonShapeApiRequest::getRawSocket(){
    return socket;
}


void OAIPokemonShapeApiRequest::pokemonShapeListRequest(){
    qDebug() << "/api/v2/pokemon-shape/";
    connect(this, &OAIPokemonShapeApiRequest::pokemonShapeList, handler.data(), &OAIPokemonShapeApiHandler::pokemonShapeList);

    
    qint32 limit;
    if(socket->queryString().keys().contains("limit")){
        fromStringValue(socket->queryString().value("limit"), limit);
    }
    
    qint32 offset;
    if(socket->queryString().keys().contains("offset")){
        fromStringValue(socket->queryString().value("offset"), offset);
    }
    


    emit pokemonShapeList(limit, offset);
}


void OAIPokemonShapeApiRequest::pokemonShapeReadRequest(const QString& idstr){
    qDebug() << "/api/v2/pokemon-shape/{id}/";
    connect(this, &OAIPokemonShapeApiRequest::pokemonShapeRead, handler.data(), &OAIPokemonShapeApiHandler::pokemonShapeRead);

    
    qint32 id;
    fromStringValue(idstr, id);
    

    emit pokemonShapeRead(id);
}



void OAIPokemonShapeApiRequest::pokemonShapeListResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIPokemonShapeApiRequest::pokemonShapeReadResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIPokemonShapeApiRequest::pokemonShapeListError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIPokemonShapeApiRequest::pokemonShapeReadError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIPokemonShapeApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIPokemonShapeApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
