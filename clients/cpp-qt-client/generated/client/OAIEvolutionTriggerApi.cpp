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

#include "OAIEvolutionTriggerApi.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIEvolutionTriggerApi::OAIEvolutionTriggerApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

OAIEvolutionTriggerApi::~OAIEvolutionTriggerApi() {
}

void OAIEvolutionTriggerApi::initializeServerConfigs() {
    //Default server
    QList<OAIServerConfiguration> defaultConf = QList<OAIServerConfiguration>();
    //varying endpoint server
    defaultConf.append(OAIServerConfiguration(
    QUrl("https://pokeapi.co/"),
    "No description provided",
    QMap<QString, OAIServerVariable>()));
    _serverConfigs.insert("evolutionTriggerList", defaultConf);
    _serverIndices.insert("evolutionTriggerList", 0);
    _serverConfigs.insert("evolutionTriggerRead", defaultConf);
    _serverIndices.insert("evolutionTriggerRead", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int OAIEvolutionTriggerApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIEvolutionTriggerApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void OAIEvolutionTriggerApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName,apiKey);
}

void OAIEvolutionTriggerApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void OAIEvolutionTriggerApi::setUsername(const QString &username) {
    _username = username;
}

void OAIEvolutionTriggerApi::setPassword(const QString &password) {
    _password = password;
}


void OAIEvolutionTriggerApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIEvolutionTriggerApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIEvolutionTriggerApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
    _manager = manager;
}

/**
    * Appends a new ServerConfiguration to the config map for a specific operation.
    * @param operation The id to the target operation.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    * returns the index of the new server config on success and -1 if the operation is not found
    */
int OAIEvolutionTriggerApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    if (_serverConfigs.contains(operation)) {
        _serverConfigs[operation].append(OAIServerConfiguration(
                    url,
                    description,
                    variables));
        return _serverConfigs[operation].size()-1;
    } else {
        return -1;
    }
}

/**
    * Appends a new ServerConfiguration to the config map for a all operations and sets the index to that server.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIEvolutionTriggerApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    for (auto keyIt = _serverIndices.keyBegin(); keyIt != _serverIndices.keyEnd(); keyIt++) {
        setServerIndex(*keyIt, addServerConfiguration(*keyIt, url, description, variables));
    }
#else
    for (auto &e : _serverIndices.keys()) {
        setServerIndex(e, addServerConfiguration(e, url, description, variables));
    }
#endif
}

/**
    * Appends a new ServerConfiguration to the config map for an operations and sets the index to that server.
    * @param URL A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIEvolutionTriggerApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void OAIEvolutionTriggerApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void OAIEvolutionTriggerApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void OAIEvolutionTriggerApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void OAIEvolutionTriggerApi::abortRequests() {
    emit abortRequestsSignal();
}

QString OAIEvolutionTriggerApi::getParamStylePrefix(const QString &style) {
    if (style == "matrix") {
        return ";";
    } else if (style == "label") {
        return ".";
    } else if (style == "form") {
        return "&";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "&";
    } else if (style == "pipeDelimited") {
        return "&";
    } else {
        return "none";
    }
}

QString OAIEvolutionTriggerApi::getParamStyleSuffix(const QString &style) {
    if (style == "matrix") {
        return "=";
    } else if (style == "label") {
        return "";
    } else if (style == "form") {
        return "=";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "=";
    } else if (style == "pipeDelimited") {
        return "=";
    } else {
        return "none";
    }
}

QString OAIEvolutionTriggerApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

    if (style == "matrix") {
        return (isExplode) ? ";" + name + "=" : ",";

    } else if (style == "label") {
        return (isExplode) ? "." : ",";

    } else if (style == "form") {
        return (isExplode) ? "&" + name + "=" : ",";

    } else if (style == "simple") {
        return ",";
    } else if (style == "spaceDelimited") {
        return (isExplode) ? "&" + name + "=" : " ";

    } else if (style == "pipeDelimited") {
        return (isExplode) ? "&" + name + "=" : "|";

    } else if (style == "deepObject") {
        return (isExplode) ? "&" : "none";

    } else {
        return "none";
    }
}

void OAIEvolutionTriggerApi::evolutionTriggerList(const ::OpenAPI::OptionalParam<qint32> &limit, const ::OpenAPI::OptionalParam<qint32> &offset) {
    QString fullPath = QString(_serverConfigs["evolutionTriggerList"][_serverIndices.value("evolutionTriggerList")].URL()+"/api/v2/evolution-trigger/");
    
    QString queryPrefix, querySuffix, queryDelimiter, queryStyle;
    if (limit.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "limit", true);
        if (fullPath.indexOf("?") > 0)
            fullPath.append(queryPrefix);
        else
            fullPath.append("?");

        fullPath.append(QUrl::toPercentEncoding("limit")).append(querySuffix).append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(limit.value())));
    }
    if (offset.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "offset", true);
        if (fullPath.indexOf("?") > 0)
            fullPath.append(queryPrefix);
        else
            fullPath.append("?");

        fullPath.append(QUrl::toPercentEncoding("offset")).append(querySuffix).append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(offset.value())));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIEvolutionTriggerApi::evolutionTriggerListCallback);
    connect(this, &OAIEvolutionTriggerApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIEvolutionTriggerApi::evolutionTriggerListCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    QString output;
    ::OpenAPI::fromStringValue(QString(worker->response), output);
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit evolutionTriggerListSignal(output);
        emit evolutionTriggerListSignalFull(worker, output);
    } else {
        emit evolutionTriggerListSignalE(output, error_type, error_str);
        emit evolutionTriggerListSignalEFull(worker, error_type, error_str);
    }
}

void OAIEvolutionTriggerApi::evolutionTriggerRead(const qint32 &id) {
    QString fullPath = QString(_serverConfigs["evolutionTriggerRead"][_serverIndices.value("evolutionTriggerRead")].URL()+"/api/v2/evolution-trigger/{id}/");
    
    
    {
        QString idPathParam("{");
        idPathParam.append("id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"id"+pathSuffix : pathPrefix;
        fullPath.replace(idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIEvolutionTriggerApi::evolutionTriggerReadCallback);
    connect(this, &OAIEvolutionTriggerApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIEvolutionTriggerApi::evolutionTriggerReadCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    QString output;
    ::OpenAPI::fromStringValue(QString(worker->response), output);
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit evolutionTriggerReadSignal(output);
        emit evolutionTriggerReadSignalFull(worker, output);
    } else {
        emit evolutionTriggerReadSignalE(output, error_type, error_str);
        emit evolutionTriggerReadSignalEFull(worker, error_type, error_str);
    }
}

void OAIEvolutionTriggerApi::tokenAvailable(){
  
    oauthToken token; 
    switch (_OauthMethod) {
    case 1: //implicit flow
        token = _implicitFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _implicitFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 2: //authorization flow
        token = _authFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _authFlow.removeToken(_latestScope.join(" "));    
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 3: //client credentials flow
        token = _credentialFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));    
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 4: //resource owner password flow
        token = _passwordFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));    
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    default:
        qDebug() << "No Oauth method set!";
        break;
    }
}
} // namespace OpenAPI
