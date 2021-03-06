/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="WatermarkText.cpp">
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

#include "WatermarkText.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

WatermarkText::WatermarkText()
{
    m_RotationAngle = 0.0;
    m_RotationAngleIsSet = false;
    m_Text = utility::conversions::to_string_t("");
    m_TextIsSet = false;

}

WatermarkText::~WatermarkText()
{
}

void WatermarkText::validate()
{
    // TODO: implement validation
}

web::json::value WatermarkText::toJson() const
{
    web::json::value val = web::json::value::object();
    if(m_RotationAngleIsSet)
    {
        val[_XPLATSTR("RotationAngle")] = ModelBase::toJson(m_RotationAngle);
    }
    if(m_TextIsSet)
    {
        val[_XPLATSTR("Text")] = ModelBase::toJson(m_Text);
    }

    return val;
}

void WatermarkText::fromJson(web::json::value& val)
{
    if(val.has_field(_XPLATSTR("RotationAngle")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("RotationAngle")];
        if(!fieldValue.is_null())
        {
           setRotationAngle(ModelBase::floatingFromJson(fieldValue));
        }
    }


    if(val.has_field(_XPLATSTR("Text")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Text")];
        if(!fieldValue.is_null())
        {
           setText(ModelBase::stringFromJson(fieldValue));
        }
    }

}

void WatermarkText::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    auto namePrefix = ModelBase::fixNamePrefix(prefix);
    if(m_RotationAngleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("RotationAngle"), m_RotationAngle));
    }


    if(m_TextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Text"), m_Text));
    }

}

void WatermarkText::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    // TODO: implement fromMultiPart
}

double WatermarkText::getRotationAngle() const
{
    return m_RotationAngle;
}


void WatermarkText::setRotationAngle(double value)
{
    m_RotationAngle = value;
    m_RotationAngleIsSet = true;
}

bool WatermarkText::rotationAngleIsSet() const
{
    return m_RotationAngleIsSet;
}

void WatermarkText::unsetRotationAngle()
{
    m_RotationAngleIsSet = false;
}

utility::string_t WatermarkText::getText() const
{
    return m_Text;
}


void WatermarkText::setText(utility::string_t value)
{
    m_Text = value;
    m_TextIsSet = true;
}

bool WatermarkText::textIsSet() const
{
    return m_TextIsSet;
}

void WatermarkText::unsetText()
{
    m_TextIsSet = false;
}

}
}
}
}
}
