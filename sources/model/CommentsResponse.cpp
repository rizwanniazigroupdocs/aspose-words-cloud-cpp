/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="CommentsResponse.cpp">
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


#include "CommentsResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

CommentsResponse::CommentsResponse()
{
    m_CommentsIsSet = false;
}

CommentsResponse::~CommentsResponse()
{
}

void CommentsResponse::validate()
{
    // TODO: implement validation
}

web::json::value CommentsResponse::toJson() const
{
    web::json::value val = this->AsposeResponse::toJson();

    if(m_CommentsIsSet)
    {
        val[_XPLATSTR("Comments")] = ModelBase::toJson(m_Comments);
    }

    return val;
}

void CommentsResponse::fromJson(web::json::value& val)
{
    this->AsposeResponse::fromJson(val);

    if(val.has_field(_XPLATSTR("Comments")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Comments")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CommentsCollection> newItem(new CommentsCollection());
            newItem->fromJson(fieldValue);
            setComments( newItem );
        }
    }
}

void CommentsResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != _XPLATSTR("."))
    {
        namePrefix += _XPLATSTR(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Code"), m_Code));
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Status"), m_Status));
        
    }
    if(m_CommentsIsSet)
    {
        if (m_Comments.get())
        {
            m_Comments->toMultipart(multipart, _XPLATSTR("Comments."));
        }
        
    }
}

void CommentsResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != _XPLATSTR("."))
    {
        namePrefix += _XPLATSTR(".");
    }

    setCode(ModelBase::int32_tFromHttpContent(multipart->getContent(_XPLATSTR("Code"))));
    if(multipart->hasContent(_XPLATSTR("Status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("Status"))));
    }
    if(multipart->hasContent(_XPLATSTR("Comments")))
    {
        if(multipart->hasContent(_XPLATSTR("Comments")))
        {
            std::shared_ptr<CommentsCollection> newItem(new CommentsCollection());
            newItem->fromMultiPart(multipart, _XPLATSTR("Comments."));
            setComments( newItem );
        }
    }
}

std::shared_ptr<CommentsCollection> CommentsResponse::getComments() const
{
    return m_Comments;
}


void CommentsResponse::setComments(std::shared_ptr<CommentsCollection> value)
{
    m_Comments = value;
    m_CommentsIsSet = true;
}
bool CommentsResponse::commentsIsSet() const
{
    return m_CommentsIsSet;
}

void CommentsResponse::unsetComments()
{
    m_CommentsIsSet = false;
}

}
}
}
}

