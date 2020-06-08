/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="InsertOrUpdateParagraphTabStopWithoutNodePathRequest.cpp">
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
#include "InsertOrUpdateParagraphTabStopWithoutNodePathRequest.h"
namespace aspose{
namespace words{
namespace cloud{
namespace api{
namespace models{
InsertOrUpdateParagraphTabStopWithoutNodePathRequest::InsertOrUpdateParagraphTabStopWithoutNodePathRequest(
        utility::string_t name,
                std::shared_ptr<TabStopInsert> dto,
                int32_t index,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password,
                boost::optional<utility::string_t> destFileName
        ) : 
            m_name(std::move(name)),
            m_dto(std::move(dto)),
            m_index(std::move(index)),
            m_folder(std::move(folder)),
            m_storage(std::move(storage)),
            m_loadEncoding(std::move(loadEncoding)),
            m_password(std::move(password)),
            m_destFileName(std::move(destFileName))
        {
            
        }

        utility::string_t InsertOrUpdateParagraphTabStopWithoutNodePathRequest::getName() const
        {
            return m_name;
        }
        void InsertOrUpdateParagraphTabStopWithoutNodePathRequest::setName(utility::string_t name){
            m_name = std::move(name);
        }
        std::shared_ptr<TabStopInsert> InsertOrUpdateParagraphTabStopWithoutNodePathRequest::getDto() const
        {
            return m_dto;
        }
        void InsertOrUpdateParagraphTabStopWithoutNodePathRequest::setDto(std::shared_ptr<TabStopInsert> dto){
            m_dto = std::move(dto);
        }
        int32_t InsertOrUpdateParagraphTabStopWithoutNodePathRequest::getIndex() const
        {
            return m_index;
        }
        void InsertOrUpdateParagraphTabStopWithoutNodePathRequest::setIndex(int32_t index){
            m_index = std::move(index);
        }
        boost::optional<utility::string_t> InsertOrUpdateParagraphTabStopWithoutNodePathRequest::getFolder() const
        {
            return m_folder;
        }
        void InsertOrUpdateParagraphTabStopWithoutNodePathRequest::setFolder(boost::optional<utility::string_t> folder){
            m_folder = std::move(folder);
        }
        boost::optional<utility::string_t> InsertOrUpdateParagraphTabStopWithoutNodePathRequest::getStorage() const
        {
            return m_storage;
        }
        void InsertOrUpdateParagraphTabStopWithoutNodePathRequest::setStorage(boost::optional<utility::string_t> storage){
            m_storage = std::move(storage);
        }
        boost::optional<utility::string_t> InsertOrUpdateParagraphTabStopWithoutNodePathRequest::getLoadEncoding() const
        {
            return m_loadEncoding;
        }
        void InsertOrUpdateParagraphTabStopWithoutNodePathRequest::setLoadEncoding(boost::optional<utility::string_t> loadEncoding){
            m_loadEncoding = std::move(loadEncoding);
        }
        boost::optional<utility::string_t> InsertOrUpdateParagraphTabStopWithoutNodePathRequest::getPassword() const
        {
            return m_password;
        }
        void InsertOrUpdateParagraphTabStopWithoutNodePathRequest::setPassword(boost::optional<utility::string_t> password){
            m_password = std::move(password);
        }
        boost::optional<utility::string_t> InsertOrUpdateParagraphTabStopWithoutNodePathRequest::getDestFileName() const
        {
            return m_destFileName;
        }
        void InsertOrUpdateParagraphTabStopWithoutNodePathRequest::setDestFileName(boost::optional<utility::string_t> destFileName){
            m_destFileName = std::move(destFileName);
        }

}
}
}
}
}

