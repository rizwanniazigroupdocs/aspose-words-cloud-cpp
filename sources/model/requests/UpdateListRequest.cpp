/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="UpdateListRequest.cpp">
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

#include "UpdateListRequest.h"
namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {
UpdateListRequest::UpdateListRequest(
    utility::string_t name,
    std::shared_ptr<ListUpdate> listUpdate,
    int32_t listId,
    boost::optional< utility::string_t > folder,
    boost::optional< utility::string_t > storage,
    boost::optional< utility::string_t > loadEncoding,
    boost::optional< utility::string_t > password,
    boost::optional< utility::string_t > destFileName,
    boost::optional< utility::string_t > revisionAuthor,
    boost::optional< utility::string_t > revisionDateTime
) : m_Name(std::move(name)),
m_ListUpdate(std::move(listUpdate)),
m_ListId(std::move(listId)),
m_Folder(std::move(folder)),
m_Storage(std::move(storage)),
m_LoadEncoding(std::move(loadEncoding)),
m_Password(std::move(password)),
m_DestFileName(std::move(destFileName)),
m_RevisionAuthor(std::move(revisionAuthor)),
m_RevisionDateTime(std::move(revisionDateTime))
{
}

utility::string_t UpdateListRequest::getName() const
{
    return m_Name;
}

void UpdateListRequest::setName(utility::string_t name)
{
    m_Name = std::move(name);
}

std::shared_ptr<ListUpdate> UpdateListRequest::getListUpdate() const
{
    return m_ListUpdate;
}

void UpdateListRequest::setListUpdate(std::shared_ptr<ListUpdate> listUpdate)
{
    m_ListUpdate = std::move(listUpdate);
}

int32_t UpdateListRequest::getListId() const
{
    return m_ListId;
}

void UpdateListRequest::setListId(int32_t listId)
{
    m_ListId = std::move(listId);
}

boost::optional< utility::string_t > UpdateListRequest::getFolder() const
{
    return m_Folder;
}

void UpdateListRequest::setFolder(boost::optional< utility::string_t > folder)
{
    m_Folder = std::move(folder);
}

boost::optional< utility::string_t > UpdateListRequest::getStorage() const
{
    return m_Storage;
}

void UpdateListRequest::setStorage(boost::optional< utility::string_t > storage)
{
    m_Storage = std::move(storage);
}

boost::optional< utility::string_t > UpdateListRequest::getLoadEncoding() const
{
    return m_LoadEncoding;
}

void UpdateListRequest::setLoadEncoding(boost::optional< utility::string_t > loadEncoding)
{
    m_LoadEncoding = std::move(loadEncoding);
}

boost::optional< utility::string_t > UpdateListRequest::getPassword() const
{
    return m_Password;
}

void UpdateListRequest::setPassword(boost::optional< utility::string_t > password)
{
    m_Password = std::move(password);
}

boost::optional< utility::string_t > UpdateListRequest::getDestFileName() const
{
    return m_DestFileName;
}

void UpdateListRequest::setDestFileName(boost::optional< utility::string_t > destFileName)
{
    m_DestFileName = std::move(destFileName);
}

boost::optional< utility::string_t > UpdateListRequest::getRevisionAuthor() const
{
    return m_RevisionAuthor;
}

void UpdateListRequest::setRevisionAuthor(boost::optional< utility::string_t > revisionAuthor)
{
    m_RevisionAuthor = std::move(revisionAuthor);
}

boost::optional< utility::string_t > UpdateListRequest::getRevisionDateTime() const
{
    return m_RevisionDateTime;
}

void UpdateListRequest::setRevisionDateTime(boost::optional< utility::string_t > revisionDateTime)
{
    m_RevisionDateTime = std::move(revisionDateTime);
}

}
}
}
}
}
