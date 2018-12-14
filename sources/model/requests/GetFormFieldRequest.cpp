/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="GetFormFieldRequest.cpp">
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
#include "GetFormFieldRequest.h"
namespace io{
namespace swagger{
namespace client{
namespace model{
GetFormFieldRequest::GetFormFieldRequest(
        utility::string_t name,
                int32_t index,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password,
                boost::optional<utility::string_t> nodePath
        ) : 
            m_name(name),
            m_index(index),
            m_folder(folder),
            m_storage(storage),
            m_loadEncoding(loadEncoding),
            m_password(password),
            m_nodePath(nodePath)
        {
            
        }

        utility::string_t GetFormFieldRequest::getName() const
        {
            return m_name;
        }
        void GetFormFieldRequest::setName(utility::string_t name){
            m_name = name;
        }
        int32_t GetFormFieldRequest::getIndex() const
        {
            return m_index;
        }
        void GetFormFieldRequest::setIndex(int32_t index){
            m_index = index;
        }
        boost::optional<utility::string_t> GetFormFieldRequest::getFolder() const
        {
            return m_folder;
        }
        void GetFormFieldRequest::setFolder(boost::optional<utility::string_t> folder){
            m_folder = folder;
        }
        boost::optional<utility::string_t> GetFormFieldRequest::getStorage() const
        {
            return m_storage;
        }
        void GetFormFieldRequest::setStorage(boost::optional<utility::string_t> storage){
            m_storage = storage;
        }
        boost::optional<utility::string_t> GetFormFieldRequest::getLoadEncoding() const
        {
            return m_loadEncoding;
        }
        void GetFormFieldRequest::setLoadEncoding(boost::optional<utility::string_t> loadEncoding){
            m_loadEncoding = loadEncoding;
        }
        boost::optional<utility::string_t> GetFormFieldRequest::getPassword() const
        {
            return m_password;
        }
        void GetFormFieldRequest::setPassword(boost::optional<utility::string_t> password){
            m_password = password;
        }
        boost::optional<utility::string_t> GetFormFieldRequest::getNodePath() const
        {
            return m_nodePath;
        }
        void GetFormFieldRequest::setNodePath(boost::optional<utility::string_t> nodePath){
            m_nodePath = nodePath;
        }

}
}
}
}

