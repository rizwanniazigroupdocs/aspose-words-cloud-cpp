/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="PostRunRequest.cpp">
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
#include "PostRunRequest.h"
namespace io{
namespace swagger{
namespace client{
namespace model{
PostRunRequest::PostRunRequest(
        utility::string_t name,
                std::shared_ptr<Run> run,
                utility::string_t paragraphPath,
                int32_t index,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password,
                boost::optional<utility::string_t> destFileName,
                boost::optional<utility::string_t> revisionAuthor,
                boost::optional<utility::string_t> revisionDateTime
        ) : 
            m_name(name),
            m_run(run),
            m_paragraphPath(paragraphPath),
            m_index(index),
            m_folder(folder),
            m_storage(storage),
            m_loadEncoding(loadEncoding),
            m_password(password),
            m_destFileName(destFileName),
            m_revisionAuthor(revisionAuthor),
            m_revisionDateTime(revisionDateTime)
        {
            
        }

        utility::string_t PostRunRequest::getName() const
        {
            return m_name;
        }
        void PostRunRequest::setName(utility::string_t name){
            m_name = name;
        }
        std::shared_ptr<Run> PostRunRequest::getRun() const
        {
            return m_run;
        }
        void PostRunRequest::setRun(std::shared_ptr<Run> run){
            m_run = run;
        }
        utility::string_t PostRunRequest::getParagraphPath() const
        {
            return m_paragraphPath;
        }
        void PostRunRequest::setParagraphPath(utility::string_t paragraphPath){
            m_paragraphPath = paragraphPath;
        }
        int32_t PostRunRequest::getIndex() const
        {
            return m_index;
        }
        void PostRunRequest::setIndex(int32_t index){
            m_index = index;
        }
        boost::optional<utility::string_t> PostRunRequest::getFolder() const
        {
            return m_folder;
        }
        void PostRunRequest::setFolder(boost::optional<utility::string_t> folder){
            m_folder = folder;
        }
        boost::optional<utility::string_t> PostRunRequest::getStorage() const
        {
            return m_storage;
        }
        void PostRunRequest::setStorage(boost::optional<utility::string_t> storage){
            m_storage = storage;
        }
        boost::optional<utility::string_t> PostRunRequest::getLoadEncoding() const
        {
            return m_loadEncoding;
        }
        void PostRunRequest::setLoadEncoding(boost::optional<utility::string_t> loadEncoding){
            m_loadEncoding = loadEncoding;
        }
        boost::optional<utility::string_t> PostRunRequest::getPassword() const
        {
            return m_password;
        }
        void PostRunRequest::setPassword(boost::optional<utility::string_t> password){
            m_password = password;
        }
        boost::optional<utility::string_t> PostRunRequest::getDestFileName() const
        {
            return m_destFileName;
        }
        void PostRunRequest::setDestFileName(boost::optional<utility::string_t> destFileName){
            m_destFileName = destFileName;
        }
        boost::optional<utility::string_t> PostRunRequest::getRevisionAuthor() const
        {
            return m_revisionAuthor;
        }
        void PostRunRequest::setRevisionAuthor(boost::optional<utility::string_t> revisionAuthor){
            m_revisionAuthor = revisionAuthor;
        }
        boost::optional<utility::string_t> PostRunRequest::getRevisionDateTime() const
        {
            return m_revisionDateTime;
        }
        void PostRunRequest::setRevisionDateTime(boost::optional<utility::string_t> revisionDateTime){
            m_revisionDateTime = revisionDateTime;
        }

}
}
}
}

