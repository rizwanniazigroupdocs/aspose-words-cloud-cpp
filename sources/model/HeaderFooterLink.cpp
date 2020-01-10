/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="HeaderFooterLink.cpp">
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


#include "HeaderFooterLink.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

HeaderFooterLink::HeaderFooterLink()
{
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
}

HeaderFooterLink::~HeaderFooterLink()
{
}

void HeaderFooterLink::validate()
{
    // TODO: implement validation
}

web::json::value HeaderFooterLink::toJson() const
{
    web::json::value val = this->LinkElement::toJson();

    if(m_TypeIsSet)
    {
        val[_XPLATSTR("type")] = ModelBase::toJson(m_Type);
    }

    return val;
}

void HeaderFooterLink::fromJson(web::json::value& val)
{
    this->LinkElement::fromJson(val);

    if(val.has_field(_XPLATSTR("type")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("type")];
        if(!fieldValue.is_null())
        {
            setType(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void HeaderFooterLink::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    if(m_LinkIsSet)
    {
        if (m_Link.get())
        {
            m_Link->toMultipart(multipart, _XPLATSTR("link."));
        }
        
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("type"), m_Type));
        
    }
}

void HeaderFooterLink::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    if(multipart->hasContent(_XPLATSTR("link")))
    {
        if(multipart->hasContent(_XPLATSTR("link")))
        {
            std::shared_ptr<WordsApiLink> newItem(new WordsApiLink());
            newItem->fromMultiPart(multipart, _XPLATSTR("link."));
            setLink( newItem );
        }
    }
    if(multipart->hasContent(_XPLATSTR("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("type"))));
    }
}

utility::string_t HeaderFooterLink::getType() const
{
    return m_Type;
}


void HeaderFooterLink::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool HeaderFooterLink::typeIsSet() const
{
    return m_TypeIsSet;
}

void HeaderFooterLink::unsetType()
{
    m_TypeIsSet = false;
}

}
}
}
}
}

