/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="UnprotectDocumentRequest.cpp">
*   Copyright (c) 2019 Aspose.Words for Cloud
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
#include "UnprotectDocumentRequest.h"
namespace aspose{
namespace words{
namespace cloud{
namespace api{
namespace models{
UnprotectDocumentRequest::UnprotectDocumentRequest(
        utility::string_t name,
                std::shared_ptr<ProtectionRequest> protectionRequest,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password,
                boost::optional<utility::string_t> destFileName
        ) : 
            m_name(std::move(name)),
            m_protectionRequest(std::move(protectionRequest)),
            m_folder(std::move(folder)),
            m_storage(std::move(storage)),
            m_loadEncoding(std::move(loadEncoding)),
            m_password(std::move(password)),
            m_destFileName(std::move(destFileName))
        {
            
        }

        utility::string_t UnprotectDocumentRequest::getName() const
        {
            return m_name;
        }
        void UnprotectDocumentRequest::setName(utility::string_t name){
            m_name = std::move(name);
        }
        std::shared_ptr<ProtectionRequest> UnprotectDocumentRequest::getProtectionRequest() const
        {
            return m_protectionRequest;
        }
        void UnprotectDocumentRequest::setProtectionRequest(std::shared_ptr<ProtectionRequest> protectionRequest){
            m_protectionRequest = std::move(protectionRequest);
        }
        boost::optional<utility::string_t> UnprotectDocumentRequest::getFolder() const
        {
            return m_folder;
        }
        void UnprotectDocumentRequest::setFolder(boost::optional<utility::string_t> folder){
            m_folder = std::move(folder);
        }
        boost::optional<utility::string_t> UnprotectDocumentRequest::getStorage() const
        {
            return m_storage;
        }
        void UnprotectDocumentRequest::setStorage(boost::optional<utility::string_t> storage){
            m_storage = std::move(storage);
        }
        boost::optional<utility::string_t> UnprotectDocumentRequest::getLoadEncoding() const
        {
            return m_loadEncoding;
        }
        void UnprotectDocumentRequest::setLoadEncoding(boost::optional<utility::string_t> loadEncoding){
            m_loadEncoding = std::move(loadEncoding);
        }
        boost::optional<utility::string_t> UnprotectDocumentRequest::getPassword() const
        {
            return m_password;
        }
        void UnprotectDocumentRequest::setPassword(boost::optional<utility::string_t> password){
            m_password = std::move(password);
        }
        boost::optional<utility::string_t> UnprotectDocumentRequest::getDestFileName() const
        {
            return m_destFileName;
        }
        void UnprotectDocumentRequest::setDestFileName(boost::optional<utility::string_t> destFileName){
            m_destFileName = std::move(destFileName);
        }

}
}
}
}
}
