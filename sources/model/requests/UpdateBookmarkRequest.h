/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="UpdateBookmarkRequest.h">
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
#pragma once
#ifndef updateBookmark_H
#define updateBookmark_H 

#include "cpprest/details/basic_types.h"
#include "BookmarkData.h"
#include <boost/optional.hpp>

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

class UpdateBookmarkRequest{
    public: 
     UpdateBookmarkRequest(
        utility::string_t name,
                std::shared_ptr<BookmarkData> bookmarkData,
                utility::string_t bookmarkName,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password,
                boost::optional<utility::string_t> destFileName,
                boost::optional<utility::string_t> revisionAuthor,
                boost::optional<utility::string_t> revisionDateTime
        );

        utility::string_t getName() const;
        void setName(utility::string_t name);

        std::shared_ptr<BookmarkData> getBookmarkData() const;
        void setBookmarkData(std::shared_ptr<BookmarkData> bookmarkData);

        utility::string_t getBookmarkName() const;
        void setBookmarkName(utility::string_t bookmarkName);

        boost::optional<utility::string_t> getFolder() const;
        void setFolder(boost::optional<utility::string_t> folder);

        boost::optional<utility::string_t> getStorage() const;
        void setStorage(boost::optional<utility::string_t> storage);

        boost::optional<utility::string_t> getLoadEncoding() const;
        void setLoadEncoding(boost::optional<utility::string_t> loadEncoding);

        boost::optional<utility::string_t> getPassword() const;
        void setPassword(boost::optional<utility::string_t> password);

        boost::optional<utility::string_t> getDestFileName() const;
        void setDestFileName(boost::optional<utility::string_t> destFileName);

        boost::optional<utility::string_t> getRevisionAuthor() const;
        void setRevisionAuthor(boost::optional<utility::string_t> revisionAuthor);

        boost::optional<utility::string_t> getRevisionDateTime() const;
        void setRevisionDateTime(boost::optional<utility::string_t> revisionDateTime);
    private:
        utility::string_t m_name;
        std::shared_ptr<BookmarkData> m_bookmarkData;
        utility::string_t m_bookmarkName;
        boost::optional<utility::string_t> m_folder;
        boost::optional<utility::string_t> m_storage;
        boost::optional<utility::string_t> m_loadEncoding;
        boost::optional<utility::string_t> m_password;
        boost::optional<utility::string_t> m_destFileName;
        boost::optional<utility::string_t> m_revisionAuthor;
        boost::optional<utility::string_t> m_revisionDateTime;
};

}
}
}
}
}

#endif
