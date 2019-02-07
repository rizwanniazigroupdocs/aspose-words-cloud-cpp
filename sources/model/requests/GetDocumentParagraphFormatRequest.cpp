/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="GetDocumentParagraphFormatRequest.cpp">
*   Copyright (c) 2018 Aspose.Words for Cloud
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
#include "GetDocumentParagraphFormatRequest.h"
namespace io{
namespace swagger{
namespace client{
namespace model{
GetDocumentParagraphFormatRequest::GetDocumentParagraphFormatRequest(
        utility::string_t name,
                int32_t index,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password,
                boost::optional<utility::string_t> nodePath
        ) : 
            m_name(std::move(name)),
            m_index(std::move(index)),
            m_folder(std::move(folder)),
            m_storage(std::move(storage)),
            m_loadEncoding(std::move(loadEncoding)),
            m_password(std::move(password)),
            m_nodePath(std::move(nodePath))
        {
            
        }

        utility::string_t GetDocumentParagraphFormatRequest::getName() const
        {
            return m_name;
        }
        void GetDocumentParagraphFormatRequest::setName(utility::string_t name){
            m_name = std::move(name);
        }
        int32_t GetDocumentParagraphFormatRequest::getIndex() const
        {
            return m_index;
        }
        void GetDocumentParagraphFormatRequest::setIndex(int32_t index){
            m_index = std::move(index);
        }
        boost::optional<utility::string_t> GetDocumentParagraphFormatRequest::getFolder() const
        {
            return m_folder;
        }
        void GetDocumentParagraphFormatRequest::setFolder(boost::optional<utility::string_t> folder){
            m_folder = std::move(folder);
        }
        boost::optional<utility::string_t> GetDocumentParagraphFormatRequest::getStorage() const
        {
            return m_storage;
        }
        void GetDocumentParagraphFormatRequest::setStorage(boost::optional<utility::string_t> storage){
            m_storage = std::move(storage);
        }
        boost::optional<utility::string_t> GetDocumentParagraphFormatRequest::getLoadEncoding() const
        {
            return m_loadEncoding;
        }
        void GetDocumentParagraphFormatRequest::setLoadEncoding(boost::optional<utility::string_t> loadEncoding){
            m_loadEncoding = std::move(loadEncoding);
        }
        boost::optional<utility::string_t> GetDocumentParagraphFormatRequest::getPassword() const
        {
            return m_password;
        }
        void GetDocumentParagraphFormatRequest::setPassword(boost::optional<utility::string_t> password){
            m_password = std::move(password);
        }
        boost::optional<utility::string_t> GetDocumentParagraphFormatRequest::getNodePath() const
        {
            return m_nodePath;
        }
        void GetDocumentParagraphFormatRequest::setNodePath(boost::optional<utility::string_t> nodePath){
            m_nodePath = std::move(nodePath);
        }

}
}
}
}

