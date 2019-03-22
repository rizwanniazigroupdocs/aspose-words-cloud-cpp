/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="PostExecuteTemplateRequest.cpp">
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
#include "PostExecuteTemplateRequest.h"
namespace aspose{
namespace words{
namespace cloud{
namespace api{
namespace models{
PostExecuteTemplateRequest::PostExecuteTemplateRequest(
        utility::string_t name,
                utility::string_t data,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password,
                boost::optional<utility::string_t> cleanup,
                boost::optional<bool> useWholeParagraphAsRegion,
                boost::optional<bool> withRegions,
                boost::optional<utility::string_t> destFileName
        ) : 
            m_name(std::move(name)),
            m_data(std::move(data)),
            m_folder(std::move(folder)),
            m_storage(std::move(storage)),
            m_loadEncoding(std::move(loadEncoding)),
            m_password(std::move(password)),
            m_cleanup(std::move(cleanup)),
            m_useWholeParagraphAsRegion(std::move(useWholeParagraphAsRegion)),
            m_withRegions(std::move(withRegions)),
            m_destFileName(std::move(destFileName))
        {
            
        }

        utility::string_t PostExecuteTemplateRequest::getName() const
        {
            return m_name;
        }
        void PostExecuteTemplateRequest::setName(utility::string_t name){
            m_name = std::move(name);
        }
        utility::string_t PostExecuteTemplateRequest::getData() const
        {
            return m_data;
        }
        void PostExecuteTemplateRequest::setData(utility::string_t data){
            m_data = std::move(data);
        }
        boost::optional<utility::string_t> PostExecuteTemplateRequest::getFolder() const
        {
            return m_folder;
        }
        void PostExecuteTemplateRequest::setFolder(boost::optional<utility::string_t> folder){
            m_folder = std::move(folder);
        }
        boost::optional<utility::string_t> PostExecuteTemplateRequest::getStorage() const
        {
            return m_storage;
        }
        void PostExecuteTemplateRequest::setStorage(boost::optional<utility::string_t> storage){
            m_storage = std::move(storage);
        }
        boost::optional<utility::string_t> PostExecuteTemplateRequest::getLoadEncoding() const
        {
            return m_loadEncoding;
        }
        void PostExecuteTemplateRequest::setLoadEncoding(boost::optional<utility::string_t> loadEncoding){
            m_loadEncoding = std::move(loadEncoding);
        }
        boost::optional<utility::string_t> PostExecuteTemplateRequest::getPassword() const
        {
            return m_password;
        }
        void PostExecuteTemplateRequest::setPassword(boost::optional<utility::string_t> password){
            m_password = std::move(password);
        }
        boost::optional<utility::string_t> PostExecuteTemplateRequest::getCleanup() const
        {
            return m_cleanup;
        }
        void PostExecuteTemplateRequest::setCleanup(boost::optional<utility::string_t> cleanup){
            m_cleanup = std::move(cleanup);
        }
        boost::optional<bool> PostExecuteTemplateRequest::getUseWholeParagraphAsRegion() const
        {
            return m_useWholeParagraphAsRegion;
        }
        void PostExecuteTemplateRequest::setUseWholeParagraphAsRegion(boost::optional<bool> useWholeParagraphAsRegion){
            m_useWholeParagraphAsRegion = std::move(useWholeParagraphAsRegion);
        }
        boost::optional<bool> PostExecuteTemplateRequest::getWithRegions() const
        {
            return m_withRegions;
        }
        void PostExecuteTemplateRequest::setWithRegions(boost::optional<bool> withRegions){
            m_withRegions = std::move(withRegions);
        }
        boost::optional<utility::string_t> PostExecuteTemplateRequest::getDestFileName() const
        {
            return m_destFileName;
        }
        void PostExecuteTemplateRequest::setDestFileName(boost::optional<utility::string_t> destFileName){
            m_destFileName = std::move(destFileName);
        }

}
}
}
}
}

