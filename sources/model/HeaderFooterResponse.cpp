/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="HeaderFooterResponse.cpp">
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


#include "HeaderFooterResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

HeaderFooterResponse::HeaderFooterResponse()
{
    m_HeaderFooterIsSet = false;
}

HeaderFooterResponse::~HeaderFooterResponse()
{
}

void HeaderFooterResponse::validate()
{
    // TODO: implement validation
}

web::json::value HeaderFooterResponse::toJson() const
{
    web::json::value val = this->AsposeResponse::toJson();

    if(m_HeaderFooterIsSet)
    {
        val[_XPLATSTR("HeaderFooter")] = ModelBase::toJson(m_HeaderFooter);
    }

    return val;
}

void HeaderFooterResponse::fromJson(web::json::value& val)
{
    this->AsposeResponse::fromJson(val);

    if(val.has_field(_XPLATSTR("HeaderFooter")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("HeaderFooter")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<HeaderFooter> newItem(new HeaderFooter());
            newItem->fromJson(fieldValue);
            setHeaderFooter( newItem );
        }
    }
}

void HeaderFooterResponse::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Code"), m_Code));
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Status"), m_Status));
        
    }
    if(m_HeaderFooterIsSet)
    {
        if (m_HeaderFooter.get())
        {
            m_HeaderFooter->toMultipart(multipart, _XPLATSTR("HeaderFooter."));
        }
        
    }
}

void HeaderFooterResponse::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    setCode(ModelBase::int32_tFromHttpContent(multipart->getContent(_XPLATSTR("Code"))));
    if(multipart->hasContent(_XPLATSTR("Status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("Status"))));
    }
    if(multipart->hasContent(_XPLATSTR("HeaderFooter")))
    {
        if(multipart->hasContent(_XPLATSTR("HeaderFooter")))
        {
            std::shared_ptr<HeaderFooter> newItem(new HeaderFooter());
            newItem->fromMultiPart(multipart, _XPLATSTR("HeaderFooter."));
            setHeaderFooter( newItem );
        }
    }
}

std::shared_ptr<HeaderFooter> HeaderFooterResponse::getHeaderFooter() const
{
    return m_HeaderFooter;
}


void HeaderFooterResponse::setHeaderFooter(std::shared_ptr<HeaderFooter> value)
{
    m_HeaderFooter = value;
    m_HeaderFooterIsSet = true;
}
bool HeaderFooterResponse::headerFooterIsSet() const
{
    return m_HeaderFooterIsSet;
}

void HeaderFooterResponse::unsetHeaderFooter()
{
    m_HeaderFooterIsSet = false;
}

}
}
}
}

