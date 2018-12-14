/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="RenderPageRequest.cpp">
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
#include "RenderPageRequest.h"
namespace io{
namespace swagger{
namespace client{
namespace model{
RenderPageRequest::RenderPageRequest(
        utility::string_t name,
                int32_t pageIndex,
                utility::string_t format,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password,
                boost::optional<utility::string_t> fontsLocation
        ) : 
            m_name(name),
            m_pageIndex(pageIndex),
            m_format(format),
            m_folder(folder),
            m_storage(storage),
            m_loadEncoding(loadEncoding),
            m_password(password),
            m_fontsLocation(fontsLocation)
        {
            
        }

        utility::string_t RenderPageRequest::getName() const
        {
            return m_name;
        }
        void RenderPageRequest::setName(utility::string_t name){
            m_name = name;
        }
        int32_t RenderPageRequest::getPageIndex() const
        {
            return m_pageIndex;
        }
        void RenderPageRequest::setPageIndex(int32_t pageIndex){
            m_pageIndex = pageIndex;
        }
        utility::string_t RenderPageRequest::getFormat() const
        {
            return m_format;
        }
        void RenderPageRequest::setFormat(utility::string_t format){
            m_format = format;
        }
        boost::optional<utility::string_t> RenderPageRequest::getFolder() const
        {
            return m_folder;
        }
        void RenderPageRequest::setFolder(boost::optional<utility::string_t> folder){
            m_folder = folder;
        }
        boost::optional<utility::string_t> RenderPageRequest::getStorage() const
        {
            return m_storage;
        }
        void RenderPageRequest::setStorage(boost::optional<utility::string_t> storage){
            m_storage = storage;
        }
        boost::optional<utility::string_t> RenderPageRequest::getLoadEncoding() const
        {
            return m_loadEncoding;
        }
        void RenderPageRequest::setLoadEncoding(boost::optional<utility::string_t> loadEncoding){
            m_loadEncoding = loadEncoding;
        }
        boost::optional<utility::string_t> RenderPageRequest::getPassword() const
        {
            return m_password;
        }
        void RenderPageRequest::setPassword(boost::optional<utility::string_t> password){
            m_password = password;
        }
        boost::optional<utility::string_t> RenderPageRequest::getFontsLocation() const
        {
            return m_fontsLocation;
        }
        void RenderPageRequest::setFontsLocation(boost::optional<utility::string_t> fontsLocation){
            m_fontsLocation = fontsLocation;
        }

}
}
}
}

