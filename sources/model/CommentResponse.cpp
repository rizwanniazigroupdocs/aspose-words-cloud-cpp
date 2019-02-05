/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="CommentResponse.cpp">
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


#include "CommentResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

CommentResponse::CommentResponse()
{
    m_CommentIsSet = false;
}

CommentResponse::~CommentResponse()
{
}

void CommentResponse::validate()
{
    // TODO: implement validation
}

web::json::value CommentResponse::toJson() const
{
    web::json::value val = this->AsposeResponse::toJson();

    if(m_CommentIsSet)
    {
        val[_XPLATSTR("Comment")] = ModelBase::toJson(m_Comment);
    }

    return val;
}

void CommentResponse::fromJson(web::json::value& val)
{
    this->AsposeResponse::fromJson(val);

    if(val.has_field(_XPLATSTR("Comment")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Comment")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Comment> newItem(new Comment());
            newItem->fromJson(fieldValue);
            setComment( newItem );
        }
    }
}

void CommentResponse::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Code"), m_Code));
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Status"), m_Status));
        
    }
    if(m_CommentIsSet)
    {
        if (m_Comment.get())
        {
            m_Comment->toMultipart(multipart, _XPLATSTR("Comment."));
        }
        
    }
}

void CommentResponse::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    setCode(ModelBase::int32_tFromHttpContent(multipart->getContent(_XPLATSTR("Code"))));
    if(multipart->hasContent(_XPLATSTR("Status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("Status"))));
    }
    if(multipart->hasContent(_XPLATSTR("Comment")))
    {
        if(multipart->hasContent(_XPLATSTR("Comment")))
        {
            std::shared_ptr<Comment> newItem(new Comment());
            newItem->fromMultiPart(multipart, _XPLATSTR("Comment."));
            setComment( newItem );
        }
    }
}

std::shared_ptr<Comment> CommentResponse::getComment() const
{
    return m_Comment;
}


void CommentResponse::setComment(std::shared_ptr<Comment> value)
{
    m_Comment = value;
    m_CommentIsSet = true;
}
bool CommentResponse::commentIsSet() const
{
    return m_CommentIsSet;
}

void CommentResponse::unsetComment()
{
    m_CommentIsSet = false;
}

}
}
}
}

