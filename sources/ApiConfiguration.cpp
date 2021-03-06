/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ApiConfiguration.cpp">
*   Copyright (c) 2020 Aspose.Words for Cloud
* </copyright>
* <summary>
*   Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
* 
*  The above copyright notice and this permission notice shall be included in all
*  copies or substantial portions of the Software.
* 
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
*  SOFTWARE.
* </summary> 
-------------------------------------------------------------------------------------------------------------------- **/

#include "ApiConfiguration.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {

ApiConfiguration::ApiConfiguration()
{
    web::http::client::http_client_config httpConfig;
    setHttpConfig(httpConfig);
}

ApiConfiguration::ApiConfiguration(utility::string_t clientId, utility::string_t clientSecret) : ApiConfiguration()
{
    setClientId(clientId);
    setClientSecret(clientSecret);
}

void ApiConfiguration::setClientSecret(utility::string_t clientSecret){
    if (clientSecret.empty()) {
        throw _XPLATSTR("ClientSecret could not be an empty string.");
    }

    m_clientSecret = std::move(clientSecret);
}

utility::string_t ApiConfiguration::getClientSecret() const {
    return m_clientSecret;
}

void ApiConfiguration::setClientId(utility::string_t clientId){
    if (clientId.empty()) {
        throw _XPLATSTR("clientId could not be an empty string.");
    }

    m_clientId = std::move(clientId);
}

utility::string_t ApiConfiguration::getClientId() const{
    return m_clientId;
}

utility::string_t ApiConfiguration::getApiVersion() const
{
    return utility::conversions::to_string_t("v4.0");
}

bool ApiConfiguration::isDebugMode() const {
    return m_DebugMode;
}

void ApiConfiguration::setDebugMode(bool debug) {
    m_DebugMode = debug;
}

web::http::client::http_client_config& ApiConfiguration::getHttpConfig()
{
    return m_HttpConfig;
}

void ApiConfiguration::setHttpConfig(const web::http::client::http_client_config& value )
{
    m_HttpConfig = value;
}

utility::string_t ApiConfiguration::getBaseUrl() const
{
    return m_BaseUrl;
}

void ApiConfiguration::setBaseUrl( utility::string_t value )
{
    m_BaseUrl = std::move(value);
}

utility::string_t ApiConfiguration::getUserAgent() const
{
    return m_UserAgent;
}

void ApiConfiguration::setUserAgent( utility::string_t value )
{
    m_UserAgent = std::move(value);
}

std::map<utility::string_t, utility::string_t>& ApiConfiguration::getDefaultHeaders()
{
    return m_DefaultHeaders;
}

utility::string_t ApiConfiguration::getClientSecret( const utility::string_t& prefix) const
{
    const auto result = m_clientSecrets.find(prefix);
    if( result != m_clientSecrets.end() )
    {
        return result->second;
    }
    return {};
}

void ApiConfiguration::setClientSecret( const utility::string_t& prefix, const utility::string_t& clientSecret )
{
    m_clientSecrets[prefix] = clientSecret;
}

}
}
}
}
