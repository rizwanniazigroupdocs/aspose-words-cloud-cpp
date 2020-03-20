/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="GetDocumentDrawingObjectsWithoutNodePathRequest.cpp">
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
#include "GetDocumentDrawingObjectsWithoutNodePathRequest.h"
namespace aspose{
namespace words{
namespace cloud{
namespace api{
namespace models{
GetDocumentDrawingObjectsWithoutNodePathRequest::GetDocumentDrawingObjectsWithoutNodePathRequest(
        utility::string_t name,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password
        ) : 
            m_name(std::move(name)),
            m_folder(std::move(folder)),
            m_storage(std::move(storage)),
            m_loadEncoding(std::move(loadEncoding)),
            m_password(std::move(password))
        {
            
        }

        utility::string_t GetDocumentDrawingObjectsWithoutNodePathRequest::getName() const
        {
            return m_name;
        }
        void GetDocumentDrawingObjectsWithoutNodePathRequest::setName(utility::string_t name){
            m_name = std::move(name);
        }
        boost::optional<utility::string_t> GetDocumentDrawingObjectsWithoutNodePathRequest::getFolder() const
        {
            return m_folder;
        }
        void GetDocumentDrawingObjectsWithoutNodePathRequest::setFolder(boost::optional<utility::string_t> folder){
            m_folder = std::move(folder);
        }
        boost::optional<utility::string_t> GetDocumentDrawingObjectsWithoutNodePathRequest::getStorage() const
        {
            return m_storage;
        }
        void GetDocumentDrawingObjectsWithoutNodePathRequest::setStorage(boost::optional<utility::string_t> storage){
            m_storage = std::move(storage);
        }
        boost::optional<utility::string_t> GetDocumentDrawingObjectsWithoutNodePathRequest::getLoadEncoding() const
        {
            return m_loadEncoding;
        }
        void GetDocumentDrawingObjectsWithoutNodePathRequest::setLoadEncoding(boost::optional<utility::string_t> loadEncoding){
            m_loadEncoding = std::move(loadEncoding);
        }
        boost::optional<utility::string_t> GetDocumentDrawingObjectsWithoutNodePathRequest::getPassword() const
        {
            return m_password;
        }
        void GetDocumentDrawingObjectsWithoutNodePathRequest::setPassword(boost::optional<utility::string_t> password){
            m_password = std::move(password);
        }

}
}
}
}
}

