/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="OfficeMathObject.cpp">
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


#include "OfficeMathObject.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

OfficeMathObject::OfficeMathObject()
{
    m_ContentIsSet = false;
    m_DisplayType = utility::conversions::to_string_t("");
    m_DisplayTypeIsSet = false;
    m_Justification = utility::conversions::to_string_t("");
    m_JustificationIsSet = false;
    m_MathObjectType = utility::conversions::to_string_t("");
    m_MathObjectTypeIsSet = false;
}

OfficeMathObject::~OfficeMathObject()
{
}

void OfficeMathObject::validate()
{
    // TODO: implement validation
}

web::json::value OfficeMathObject::toJson() const
{
    web::json::value val = this->OfficeMathLink::toJson();

    if(m_ContentIsSet)
    {
        val[_XPLATSTR("Content")] = ModelBase::toJson(m_Content);
    }
    if(m_DisplayTypeIsSet)
    {
        val[_XPLATSTR("DisplayType")] = ModelBase::toJson(m_DisplayType);
    }
    if(m_JustificationIsSet)
    {
        val[_XPLATSTR("Justification")] = ModelBase::toJson(m_Justification);
    }
    if(m_MathObjectTypeIsSet)
    {
        val[_XPLATSTR("MathObjectType")] = ModelBase::toJson(m_MathObjectType);
    }

    return val;
}

void OfficeMathObject::fromJson(web::json::value& val)
{
    this->OfficeMathLink::fromJson(val);

    if(val.has_field(_XPLATSTR("Content")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Content")];
        if(!fieldValue.is_null())
        {
            <DATA_TYPE_START>StoryChildNodes<DATA_TYPE_END> newItem(new StoryChildNodes());
            newItem->fromJson(fieldValue);
            setContent( newItem );
        }
    }
    if(val.has_field(_XPLATSTR("DisplayType")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("DisplayType")];
        if(!fieldValue.is_null())
        {
            setDisplayType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("Justification")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Justification")];
        if(!fieldValue.is_null())
        {
            setJustification(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("MathObjectType")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("MathObjectType")];
        if(!fieldValue.is_null())
        {
            setMathObjectType(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void OfficeMathObject::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    OfficeMathLink::toMultipart(multipart, prefix);
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    if(m_ContentIsSet)
    {
        if (m_Content.get())
        {
            m_Content->toMultipart(multipart, _XPLATSTR("Content."));
        }
        
    }
    if(m_DisplayTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("DisplayType"), m_DisplayType));
        
    }
    if(m_JustificationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Justification"), m_Justification));
        
    }
    if(m_MathObjectTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("MathObjectType"), m_MathObjectType));
        
    }
}

void OfficeMathObject::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    OfficeMathLink::fromMultiPart(multipart, prefix);

    if(multipart->hasContent(_XPLATSTR("Content")))
    {
        if(multipart->hasContent(_XPLATSTR("Content")))
        {
            <DATA_TYPE_START>StoryChildNodes<DATA_TYPE_END> newItem(new StoryChildNodes());
            newItem->fromMultiPart(multipart, _XPLATSTR("Content."));
            setContent( newItem );
        }
    }
    if(multipart->hasContent(_XPLATSTR("DisplayType")))
    {
        setDisplayType(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("DisplayType"))));
    }
    if(multipart->hasContent(_XPLATSTR("Justification")))
    {
        setJustification(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("Justification"))));
    }
    if(multipart->hasContent(_XPLATSTR("MathObjectType")))
    {
        setMathObjectType(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("MathObjectType"))));
    }
}

<DATA_TYPE_START>StoryChildNodes<DATA_TYPE_END> OfficeMathObject::getContent() const
{
    return m_Content;
}


void OfficeMathObject::setContent(<DATA_TYPE_START>StoryChildNodes<DATA_TYPE_END> value)
{
    m_Content = value;
    m_ContentIsSet = true;
}
bool OfficeMathObject::contentIsSet() const
{
    return m_ContentIsSet;
}

void OfficeMathObject::unsetContent()
{
    m_ContentIsSet = false;
}

<DATA_TYPE_START>string<DATA_TYPE_END> OfficeMathObject::getDisplayType() const
{
    return m_DisplayType;
}


void OfficeMathObject::setDisplayType(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_DisplayType = value;
    m_DisplayTypeIsSet = true;
}
bool OfficeMathObject::displayTypeIsSet() const
{
    return m_DisplayTypeIsSet;
}

void OfficeMathObject::unsetDisplayType()
{
    m_DisplayTypeIsSet = false;
}

<DATA_TYPE_START>string<DATA_TYPE_END> OfficeMathObject::getJustification() const
{
    return m_Justification;
}


void OfficeMathObject::setJustification(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_Justification = value;
    m_JustificationIsSet = true;
}
bool OfficeMathObject::justificationIsSet() const
{
    return m_JustificationIsSet;
}

void OfficeMathObject::unsetJustification()
{
    m_JustificationIsSet = false;
}

<DATA_TYPE_START>string<DATA_TYPE_END> OfficeMathObject::getMathObjectType() const
{
    return m_MathObjectType;
}


void OfficeMathObject::setMathObjectType(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_MathObjectType = value;
    m_MathObjectTypeIsSet = true;
}
bool OfficeMathObject::mathObjectTypeIsSet() const
{
    return m_MathObjectTypeIsSet;
}

void OfficeMathObject::unsetMathObjectType()
{
    m_MathObjectTypeIsSet = false;
}

}
}
}
}
}

