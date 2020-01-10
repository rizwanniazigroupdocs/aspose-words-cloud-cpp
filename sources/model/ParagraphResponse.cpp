/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ParagraphResponse.cpp">
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


#include "ParagraphResponse.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

ParagraphResponse::ParagraphResponse()
{
    m_ParagraphIsSet = false;
}

ParagraphResponse::~ParagraphResponse()
{
}

void ParagraphResponse::validate()
{
    // TODO: implement validation
}

web::json::value ParagraphResponse::toJson() const
{
    web::json::value val = this->WordsResponse::toJson();

    if(m_ParagraphIsSet)
    {
        val[_XPLATSTR("paragraph")] = ModelBase::toJson(m_Paragraph);
    }

    return val;
}

void ParagraphResponse::fromJson(web::json::value& val)
{
    this->WordsResponse::fromJson(val);

    if(val.has_field(_XPLATSTR("paragraph")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("paragraph")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Paragraph> newItem(new Paragraph());
            newItem->fromJson(fieldValue);
            setParagraph( newItem );
        }
    }
}

void ParagraphResponse::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    if(m_RequestIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("requestId"), m_RequestId));
        
    }
    if(m_ParagraphIsSet)
    {
        if (m_Paragraph.get())
        {
            m_Paragraph->toMultipart(multipart, _XPLATSTR("paragraph."));
        }
        
    }
}

void ParagraphResponse::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    if(multipart->hasContent(_XPLATSTR("requestId")))
    {
        setRequestId(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("requestId"))));
    }
    if(multipart->hasContent(_XPLATSTR("paragraph")))
    {
        if(multipart->hasContent(_XPLATSTR("paragraph")))
        {
            std::shared_ptr<Paragraph> newItem(new Paragraph());
            newItem->fromMultiPart(multipart, _XPLATSTR("paragraph."));
            setParagraph( newItem );
        }
    }
}

std::shared_ptr<Paragraph> ParagraphResponse::getParagraph() const
{
    return m_Paragraph;
}


void ParagraphResponse::setParagraph(std::shared_ptr<Paragraph> value)
{
    m_Paragraph = value;
    m_ParagraphIsSet = true;
}
bool ParagraphResponse::paragraphIsSet() const
{
    return m_ParagraphIsSet;
}

void ParagraphResponse::unsetParagraph()
{
    m_ParagraphIsSet = false;
}

}
}
}
}
}

