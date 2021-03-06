/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="MarkdownSaveOptionsData.cpp">
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

#include "MarkdownSaveOptionsData.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

MarkdownSaveOptionsData::MarkdownSaveOptionsData()
{
    m_TableContentAlignmentIsSet = false;

}

MarkdownSaveOptionsData::~MarkdownSaveOptionsData()
{
}

void MarkdownSaveOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value MarkdownSaveOptionsData::toJson() const
{
    web::json::value val = this->TxtSaveOptionsBaseData::toJson();
    if(m_TableContentAlignmentIsSet)
    {
        val[_XPLATSTR("TableContentAlignment")] = ModelBase::toJson(m_TableContentAlignment);
    }

    return val;
}

void MarkdownSaveOptionsData::fromJson(web::json::value& val)
{
    this->TxtSaveOptionsBaseData::fromJson(val);

    if(val.has_field(_XPLATSTR("TableContentAlignment")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("TableContentAlignment")];
        if(!fieldValue.is_null())
        {
           setTableContentAlignment(ModelBase::enumFromJson(fieldValue));
        }
    }

}

void MarkdownSaveOptionsData::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    TxtSaveOptionsBaseData::toMultipart(multipart, prefix);
    auto namePrefix = ModelBase::fixNamePrefix(prefix);
    if(m_TableContentAlignmentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("TableContentAlignment"), m_TableContentAlignment));
    }

}

void MarkdownSaveOptionsData::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    // TODO: implement fromMultiPart
}

utility::string_t MarkdownSaveOptionsData::getTableContentAlignment() const
{
    return m_TableContentAlignment;
}


void MarkdownSaveOptionsData::setTableContentAlignment(utility::string_t value)
{
    m_TableContentAlignment = value;
    m_TableContentAlignmentIsSet = true;
}

bool MarkdownSaveOptionsData::tableContentAlignmentIsSet() const
{
    return m_TableContentAlignmentIsSet;
}

void MarkdownSaveOptionsData::unsetTableContentAlignment()
{
    m_TableContentAlignmentIsSet = false;
}

}
}
}
}
}
