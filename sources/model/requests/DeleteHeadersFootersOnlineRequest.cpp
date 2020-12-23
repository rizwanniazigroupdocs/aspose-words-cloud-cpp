/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="DeleteHeadersFootersOnlineRequest.cpp">
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

#include "DeleteHeadersFootersOnlineRequest.h"
namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {
DeleteHeadersFootersOnlineRequest::DeleteHeadersFootersOnlineRequest(
    std::shared_ptr<HttpContent> document,
    utility::string_t sectionPath,
    boost::optional< utility::string_t > loadEncoding,
    boost::optional< utility::string_t > password,
    boost::optional< utility::string_t > destFileName,
    boost::optional< utility::string_t > revisionAuthor,
    boost::optional< utility::string_t > revisionDateTime,
    boost::optional< utility::string_t > headersFootersTypes
) : m_Document(std::move(document)),
m_SectionPath(std::move(sectionPath)),
m_LoadEncoding(std::move(loadEncoding)),
m_Password(std::move(password)),
m_DestFileName(std::move(destFileName)),
m_RevisionAuthor(std::move(revisionAuthor)),
m_RevisionDateTime(std::move(revisionDateTime)),
m_HeadersFootersTypes(std::move(headersFootersTypes))
{
}

std::shared_ptr<HttpContent> DeleteHeadersFootersOnlineRequest::getDocument() const
{
    return m_Document;
}

void DeleteHeadersFootersOnlineRequest::setDocument(std::shared_ptr<HttpContent> document)
{
    m_Document = std::move(document);
}

utility::string_t DeleteHeadersFootersOnlineRequest::getSectionPath() const
{
    return m_SectionPath;
}

void DeleteHeadersFootersOnlineRequest::setSectionPath(utility::string_t sectionPath)
{
    m_SectionPath = std::move(sectionPath);
}

boost::optional< utility::string_t > DeleteHeadersFootersOnlineRequest::getLoadEncoding() const
{
    return m_LoadEncoding;
}

void DeleteHeadersFootersOnlineRequest::setLoadEncoding(boost::optional< utility::string_t > loadEncoding)
{
    m_LoadEncoding = std::move(loadEncoding);
}

boost::optional< utility::string_t > DeleteHeadersFootersOnlineRequest::getPassword() const
{
    return m_Password;
}

void DeleteHeadersFootersOnlineRequest::setPassword(boost::optional< utility::string_t > password)
{
    m_Password = std::move(password);
}

boost::optional< utility::string_t > DeleteHeadersFootersOnlineRequest::getDestFileName() const
{
    return m_DestFileName;
}

void DeleteHeadersFootersOnlineRequest::setDestFileName(boost::optional< utility::string_t > destFileName)
{
    m_DestFileName = std::move(destFileName);
}

boost::optional< utility::string_t > DeleteHeadersFootersOnlineRequest::getRevisionAuthor() const
{
    return m_RevisionAuthor;
}

void DeleteHeadersFootersOnlineRequest::setRevisionAuthor(boost::optional< utility::string_t > revisionAuthor)
{
    m_RevisionAuthor = std::move(revisionAuthor);
}

boost::optional< utility::string_t > DeleteHeadersFootersOnlineRequest::getRevisionDateTime() const
{
    return m_RevisionDateTime;
}

void DeleteHeadersFootersOnlineRequest::setRevisionDateTime(boost::optional< utility::string_t > revisionDateTime)
{
    m_RevisionDateTime = std::move(revisionDateTime);
}

boost::optional< utility::string_t > DeleteHeadersFootersOnlineRequest::getHeadersFootersTypes() const
{
    return m_HeadersFootersTypes;
}

void DeleteHeadersFootersOnlineRequest::setHeadersFootersTypes(boost::optional< utility::string_t > headersFootersTypes)
{
    m_HeadersFootersTypes = std::move(headersFootersTypes);
}

}
}
}
}
}
