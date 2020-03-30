/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="UpdateCommentRequest.cpp">
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
#include "UpdateCommentRequest.h"
namespace aspose{
namespace words{
namespace cloud{
namespace api{
namespace models{
UpdateCommentRequest::UpdateCommentRequest(
        utility::string_t name,
                int32_t commentIndex,
                std::shared_ptr<CommentUpdate> comment,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password,
                boost::optional<utility::string_t> destFileName,
                boost::optional<utility::string_t> revisionAuthor,
                boost::optional<utility::string_t> revisionDateTime
        ) : 
            m_name(std::move(name)),
            m_commentIndex(std::move(commentIndex)),
            m_comment(std::move(comment)),
            m_folder(std::move(folder)),
            m_storage(std::move(storage)),
            m_loadEncoding(std::move(loadEncoding)),
            m_password(std::move(password)),
            m_destFileName(std::move(destFileName)),
            m_revisionAuthor(std::move(revisionAuthor)),
            m_revisionDateTime(std::move(revisionDateTime))
        {
            
        }

        utility::string_t UpdateCommentRequest::getName() const
        {
            return m_name;
        }
        void UpdateCommentRequest::setName(utility::string_t name){
            m_name = std::move(name);
        }
        int32_t UpdateCommentRequest::getCommentIndex() const
        {
            return m_commentIndex;
        }
        void UpdateCommentRequest::setCommentIndex(int32_t commentIndex){
            m_commentIndex = std::move(commentIndex);
        }
        std::shared_ptr<CommentUpdate> UpdateCommentRequest::getComment() const
        {
            return m_comment;
        }
        void UpdateCommentRequest::setComment(std::shared_ptr<CommentUpdate> comment){
            m_comment = std::move(comment);
        }
        boost::optional<utility::string_t> UpdateCommentRequest::getFolder() const
        {
            return m_folder;
        }
        void UpdateCommentRequest::setFolder(boost::optional<utility::string_t> folder){
            m_folder = std::move(folder);
        }
        boost::optional<utility::string_t> UpdateCommentRequest::getStorage() const
        {
            return m_storage;
        }
        void UpdateCommentRequest::setStorage(boost::optional<utility::string_t> storage){
            m_storage = std::move(storage);
        }
        boost::optional<utility::string_t> UpdateCommentRequest::getLoadEncoding() const
        {
            return m_loadEncoding;
        }
        void UpdateCommentRequest::setLoadEncoding(boost::optional<utility::string_t> loadEncoding){
            m_loadEncoding = std::move(loadEncoding);
        }
        boost::optional<utility::string_t> UpdateCommentRequest::getPassword() const
        {
            return m_password;
        }
        void UpdateCommentRequest::setPassword(boost::optional<utility::string_t> password){
            m_password = std::move(password);
        }
        boost::optional<utility::string_t> UpdateCommentRequest::getDestFileName() const
        {
            return m_destFileName;
        }
        void UpdateCommentRequest::setDestFileName(boost::optional<utility::string_t> destFileName){
            m_destFileName = std::move(destFileName);
        }
        boost::optional<utility::string_t> UpdateCommentRequest::getRevisionAuthor() const
        {
            return m_revisionAuthor;
        }
        void UpdateCommentRequest::setRevisionAuthor(boost::optional<utility::string_t> revisionAuthor){
            m_revisionAuthor = std::move(revisionAuthor);
        }
        boost::optional<utility::string_t> UpdateCommentRequest::getRevisionDateTime() const
        {
            return m_revisionDateTime;
        }
        void UpdateCommentRequest::setRevisionDateTime(boost::optional<utility::string_t> revisionDateTime){
            m_revisionDateTime = std::move(revisionDateTime);
        }

}
}
}
}
}

