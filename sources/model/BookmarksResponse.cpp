/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="BookmarksResponse.cpp">
*   Copyright (c) 2020 Aspose.Words for Cloud
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

#include "BookmarksResponse.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

BookmarksResponse::BookmarksResponse()
{
    m_BookmarksIsSet = false;

}

BookmarksResponse::~BookmarksResponse()
{
}

void BookmarksResponse::validate()
{
    // TODO: implement validation
}

web::json::value BookmarksResponse::toJson() const
{
    web::json::value val = this->WordsResponse::toJson();
    if(m_BookmarksIsSet)
    {
        val[_XPLATSTR("Bookmarks")] = ModelBase::toJson(m_Bookmarks);
    }

    return val;
}

void BookmarksResponse::fromJson(web::json::value& val)
{
    this->WordsResponse::fromJson(val);

    if(val.has_field(_XPLATSTR("Bookmarks")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Bookmarks")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Bookmarks> newItem(new Bookmarks());
            newItem->fromJson(fieldValue);
            setBookmarks( newItem );
        }
    }

}

void BookmarksResponse::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    WordsResponse::toMultipart(multipart, prefix);
    auto namePrefix = ModelBase::fixNamePrefix(prefix);
    if(m_BookmarksIsSet)
    {
        if (m_Bookmarks.get())
        {
            m_Bookmarks->toMultipart(multipart, _XPLATSTR("Bookmarks."));
        }
    }

}

void BookmarksResponse::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    // TODO: implement fromMultiPart
}

std::shared_ptr<Bookmarks> BookmarksResponse::getBookmarks() const
{
    return m_Bookmarks;
}


void BookmarksResponse::setBookmarks(std::shared_ptr<Bookmarks> value)
{
    m_Bookmarks = value;
    m_BookmarksIsSet = true;
}

bool BookmarksResponse::bookmarksIsSet() const
{
    return m_BookmarksIsSet;
}

void BookmarksResponse::unsetBookmarks()
{
    m_BookmarksIsSet = false;
}

}
}
}
}
}
