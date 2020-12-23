/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="UpdateFormFieldOnlineRequest.cpp">
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

#include "UpdateFormFieldOnlineRequest.h"
namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {
UpdateFormFieldOnlineRequest::UpdateFormFieldOnlineRequest(
    std::shared_ptr<HttpContent> document,
    std::shared_ptr<FormField> formField,
    int32_t index,
    boost::optional< utility::string_t > nodePath,
    boost::optional< utility::string_t > loadEncoding,
    boost::optional< utility::string_t > password,
    boost::optional< utility::string_t > destFileName,
    boost::optional< utility::string_t > revisionAuthor,
    boost::optional< utility::string_t > revisionDateTime
) : m_Document(std::move(document)),
m_FormField(std::move(formField)),
m_Index(std::move(index)),
m_NodePath(std::move(nodePath)),
m_LoadEncoding(std::move(loadEncoding)),
m_Password(std::move(password)),
m_DestFileName(std::move(destFileName)),
m_RevisionAuthor(std::move(revisionAuthor)),
m_RevisionDateTime(std::move(revisionDateTime))
{
}

std::shared_ptr<HttpContent> UpdateFormFieldOnlineRequest::getDocument() const
{
    return m_Document;
}

void UpdateFormFieldOnlineRequest::setDocument(std::shared_ptr<HttpContent> document)
{
    m_Document = std::move(document);
}

std::shared_ptr<FormField> UpdateFormFieldOnlineRequest::getFormField() const
{
    return m_FormField;
}

void UpdateFormFieldOnlineRequest::setFormField(std::shared_ptr<FormField> formField)
{
    m_FormField = std::move(formField);
}

int32_t UpdateFormFieldOnlineRequest::getIndex() const
{
    return m_Index;
}

void UpdateFormFieldOnlineRequest::setIndex(int32_t index)
{
    m_Index = std::move(index);
}

boost::optional< utility::string_t > UpdateFormFieldOnlineRequest::getNodePath() const
{
    return m_NodePath;
}

void UpdateFormFieldOnlineRequest::setNodePath(boost::optional< utility::string_t > nodePath)
{
    m_NodePath = std::move(nodePath);
}

boost::optional< utility::string_t > UpdateFormFieldOnlineRequest::getLoadEncoding() const
{
    return m_LoadEncoding;
}

void UpdateFormFieldOnlineRequest::setLoadEncoding(boost::optional< utility::string_t > loadEncoding)
{
    m_LoadEncoding = std::move(loadEncoding);
}

boost::optional< utility::string_t > UpdateFormFieldOnlineRequest::getPassword() const
{
    return m_Password;
}

void UpdateFormFieldOnlineRequest::setPassword(boost::optional< utility::string_t > password)
{
    m_Password = std::move(password);
}

boost::optional< utility::string_t > UpdateFormFieldOnlineRequest::getDestFileName() const
{
    return m_DestFileName;
}

void UpdateFormFieldOnlineRequest::setDestFileName(boost::optional< utility::string_t > destFileName)
{
    m_DestFileName = std::move(destFileName);
}

boost::optional< utility::string_t > UpdateFormFieldOnlineRequest::getRevisionAuthor() const
{
    return m_RevisionAuthor;
}

void UpdateFormFieldOnlineRequest::setRevisionAuthor(boost::optional< utility::string_t > revisionAuthor)
{
    m_RevisionAuthor = std::move(revisionAuthor);
}

boost::optional< utility::string_t > UpdateFormFieldOnlineRequest::getRevisionDateTime() const
{
    return m_RevisionDateTime;
}

void UpdateFormFieldOnlineRequest::setRevisionDateTime(boost::optional< utility::string_t > revisionDateTime)
{
    m_RevisionDateTime = std::move(revisionDateTime);
}

}
}
}
}
}
