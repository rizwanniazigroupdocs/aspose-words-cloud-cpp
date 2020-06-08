/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="TableRowFormat.cpp">
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


#include "TableRowFormat.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

TableRowFormat::TableRowFormat()
{
    m_AllowBreakAcrossPages = false;
    m_AllowBreakAcrossPagesIsSet = false;
    m_HeadingFormat = false;
    m_HeadingFormatIsSet = false;
    m_Height = 0.0;
    m_HeightIsSet = false;
    m_HeightRule = utility::conversions::to_string_t("");
    m_HeightRuleIsSet = false;
}

TableRowFormat::~TableRowFormat()
{
}

void TableRowFormat::validate()
{
    // TODO: implement validation
}

web::json::value TableRowFormat::toJson() const
{
    web::json::value val = this->LinkElement::toJson();

    if(m_AllowBreakAcrossPagesIsSet)
    {
        val[_XPLATSTR("AllowBreakAcrossPages")] = ModelBase::toJson(m_AllowBreakAcrossPages);
    }
    if(m_HeadingFormatIsSet)
    {
        val[_XPLATSTR("HeadingFormat")] = ModelBase::toJson(m_HeadingFormat);
    }
    if(m_HeightIsSet)
    {
        val[_XPLATSTR("Height")] = ModelBase::toJson(m_Height);
    }
    if(m_HeightRuleIsSet)
    {
        val[_XPLATSTR("HeightRule")] = ModelBase::toJson(m_HeightRule);
    }

    return val;
}

void TableRowFormat::fromJson(web::json::value& val)
{
    this->LinkElement::fromJson(val);

    if(val.has_field(_XPLATSTR("AllowBreakAcrossPages")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("AllowBreakAcrossPages")];
        if(!fieldValue.is_null())
        {
            setAllowBreakAcrossPages(ModelBase::bool?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("HeadingFormat")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("HeadingFormat")];
        if(!fieldValue.is_null())
        {
            setHeadingFormat(ModelBase::bool?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("Height")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Height")];
        if(!fieldValue.is_null())
        {
            setHeight(ModelBase::double?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("HeightRule")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("HeightRule")];
        if(!fieldValue.is_null())
        {
            setHeightRule(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void TableRowFormat::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    LinkElement::toMultipart(multipart, prefix);
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    if(m_AllowBreakAcrossPagesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("AllowBreakAcrossPages"), m_AllowBreakAcrossPages));
        
    }
    if(m_HeadingFormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("HeadingFormat"), m_HeadingFormat));
        
    }
    if(m_HeightIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Height"), m_Height));
        
    }
    if(m_HeightRuleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("HeightRule"), m_HeightRule));
        
    }
}

void TableRowFormat::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    LinkElement::fromMultiPart(multipart, prefix);

    if(multipart->hasContent(_XPLATSTR("AllowBreakAcrossPages")))
    {
        setAllowBreakAcrossPages(ModelBase::bool?FromHttpContent(multipart->getContent(_XPLATSTR("AllowBreakAcrossPages"))));
    }
    if(multipart->hasContent(_XPLATSTR("HeadingFormat")))
    {
        setHeadingFormat(ModelBase::bool?FromHttpContent(multipart->getContent(_XPLATSTR("HeadingFormat"))));
    }
    if(multipart->hasContent(_XPLATSTR("Height")))
    {
        setHeight(ModelBase::double?FromHttpContent(multipart->getContent(_XPLATSTR("Height"))));
    }
    if(multipart->hasContent(_XPLATSTR("HeightRule")))
    {
        setHeightRule(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("HeightRule"))));
    }
}

<DATA_TYPE_START>bool?<DATA_TYPE_END> TableRowFormat::isAllowBreakAcrossPages() const
{
    return m_AllowBreakAcrossPages;
}


void TableRowFormat::setAllowBreakAcrossPages(<DATA_TYPE_START>bool?<DATA_TYPE_END> value)
{
    m_AllowBreakAcrossPages = value;
    m_AllowBreakAcrossPagesIsSet = true;
}
bool TableRowFormat::allowBreakAcrossPagesIsSet() const
{
    return m_AllowBreakAcrossPagesIsSet;
}

void TableRowFormat::unsetAllowBreakAcrossPages()
{
    m_AllowBreakAcrossPagesIsSet = false;
}

<DATA_TYPE_START>bool?<DATA_TYPE_END> TableRowFormat::isHeadingFormat() const
{
    return m_HeadingFormat;
}


void TableRowFormat::setHeadingFormat(<DATA_TYPE_START>bool?<DATA_TYPE_END> value)
{
    m_HeadingFormat = value;
    m_HeadingFormatIsSet = true;
}
bool TableRowFormat::headingFormatIsSet() const
{
    return m_HeadingFormatIsSet;
}

void TableRowFormat::unsetHeadingFormat()
{
    m_HeadingFormatIsSet = false;
}

<DATA_TYPE_START>double?<DATA_TYPE_END> TableRowFormat::getHeight() const
{
    return m_Height;
}


void TableRowFormat::setHeight(<DATA_TYPE_START>double?<DATA_TYPE_END> value)
{
    m_Height = value;
    m_HeightIsSet = true;
}
bool TableRowFormat::heightIsSet() const
{
    return m_HeightIsSet;
}

void TableRowFormat::unsetHeight()
{
    m_HeightIsSet = false;
}

<DATA_TYPE_START>string<DATA_TYPE_END> TableRowFormat::getHeightRule() const
{
    return m_HeightRule;
}


void TableRowFormat::setHeightRule(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_HeightRule = value;
    m_HeightRuleIsSet = true;
}
bool TableRowFormat::heightRuleIsSet() const
{
    return m_HeightRuleIsSet;
}

void TableRowFormat::unsetHeightRule()
{
    m_HeightRuleIsSet = false;
}

}
}
}
}
}

