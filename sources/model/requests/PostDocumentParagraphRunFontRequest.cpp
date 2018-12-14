/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="PostDocumentParagraphRunFontRequest.cpp">
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
#include "PostDocumentParagraphRunFontRequest.h"
namespace io{
namespace swagger{
namespace client{
namespace model{
PostDocumentParagraphRunFontRequest::PostDocumentParagraphRunFontRequest(
        utility::string_t name,
                std::shared_ptr<Font> fontDto,
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
            m_fontDto(fontDto),
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

        utility::string_t PostDocumentParagraphRunFontRequest::getName() const
        {
            return m_name;
        }
        void PostDocumentParagraphRunFontRequest::setName(utility::string_t name){
            m_name = name;
        }
        std::shared_ptr<Font> PostDocumentParagraphRunFontRequest::getFontDto() const
        {
            return m_fontDto;
        }
        void PostDocumentParagraphRunFontRequest::setFontDto(std::shared_ptr<Font> fontDto){
            m_fontDto = fontDto;
        }
        utility::string_t PostDocumentParagraphRunFontRequest::getParagraphPath() const
        {
            return m_paragraphPath;
        }
        void PostDocumentParagraphRunFontRequest::setParagraphPath(utility::string_t paragraphPath){
            m_paragraphPath = paragraphPath;
        }
        int32_t PostDocumentParagraphRunFontRequest::getIndex() const
        {
            return m_index;
        }
        void PostDocumentParagraphRunFontRequest::setIndex(int32_t index){
            m_index = index;
        }
        boost::optional<utility::string_t> PostDocumentParagraphRunFontRequest::getFolder() const
        {
            return m_folder;
        }
        void PostDocumentParagraphRunFontRequest::setFolder(boost::optional<utility::string_t> folder){
            m_folder = folder;
        }
        boost::optional<utility::string_t> PostDocumentParagraphRunFontRequest::getStorage() const
        {
            return m_storage;
        }
        void PostDocumentParagraphRunFontRequest::setStorage(boost::optional<utility::string_t> storage){
            m_storage = storage;
        }
        boost::optional<utility::string_t> PostDocumentParagraphRunFontRequest::getLoadEncoding() const
        {
            return m_loadEncoding;
        }
        void PostDocumentParagraphRunFontRequest::setLoadEncoding(boost::optional<utility::string_t> loadEncoding){
            m_loadEncoding = loadEncoding;
        }
        boost::optional<utility::string_t> PostDocumentParagraphRunFontRequest::getPassword() const
        {
            return m_password;
        }
        void PostDocumentParagraphRunFontRequest::setPassword(boost::optional<utility::string_t> password){
            m_password = password;
        }
        boost::optional<utility::string_t> PostDocumentParagraphRunFontRequest::getDestFileName() const
        {
            return m_destFileName;
        }
        void PostDocumentParagraphRunFontRequest::setDestFileName(boost::optional<utility::string_t> destFileName){
            m_destFileName = destFileName;
        }
        boost::optional<utility::string_t> PostDocumentParagraphRunFontRequest::getRevisionAuthor() const
        {
            return m_revisionAuthor;
        }
        void PostDocumentParagraphRunFontRequest::setRevisionAuthor(boost::optional<utility::string_t> revisionAuthor){
            m_revisionAuthor = revisionAuthor;
        }
        boost::optional<utility::string_t> PostDocumentParagraphRunFontRequest::getRevisionDateTime() const
        {
            return m_revisionDateTime;
        }
        void PostDocumentParagraphRunFontRequest::setRevisionDateTime(boost::optional<utility::string_t> revisionDateTime){
            m_revisionDateTime = revisionDateTime;
        }

}
}
}
}

