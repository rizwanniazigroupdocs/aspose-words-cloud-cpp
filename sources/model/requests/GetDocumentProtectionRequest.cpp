/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="GetDocumentProtectionRequest.cpp">
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
#include "GetDocumentProtectionRequest.h"
namespace io{
namespace swagger{
namespace client{
namespace model{
GetDocumentProtectionRequest::GetDocumentProtectionRequest(
        utility::string_t name,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password
        ) : 
            m_name(name),
            m_folder(folder),
            m_storage(storage),
            m_loadEncoding(loadEncoding),
            m_password(password)
        {
            
        }

        utility::string_t GetDocumentProtectionRequest::getName() const
        {
            return m_name;
        }
        void GetDocumentProtectionRequest::setName(utility::string_t name){
            m_name = name;
        }
        boost::optional<utility::string_t> GetDocumentProtectionRequest::getFolder() const
        {
            return m_folder;
        }
        void GetDocumentProtectionRequest::setFolder(boost::optional<utility::string_t> folder){
            m_folder = folder;
        }
        boost::optional<utility::string_t> GetDocumentProtectionRequest::getStorage() const
        {
            return m_storage;
        }
        void GetDocumentProtectionRequest::setStorage(boost::optional<utility::string_t> storage){
            m_storage = storage;
        }
        boost::optional<utility::string_t> GetDocumentProtectionRequest::getLoadEncoding() const
        {
            return m_loadEncoding;
        }
        void GetDocumentProtectionRequest::setLoadEncoding(boost::optional<utility::string_t> loadEncoding){
            m_loadEncoding = loadEncoding;
        }
        boost::optional<utility::string_t> GetDocumentProtectionRequest::getPassword() const
        {
            return m_password;
        }
        void GetDocumentProtectionRequest::setPassword(boost::optional<utility::string_t> password){
            m_password = password;
        }

}
}
}
}

