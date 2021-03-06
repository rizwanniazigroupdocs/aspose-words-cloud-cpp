/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="TableRowFormatResponse.cpp">
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

#include "TableRowFormatResponse.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

TableRowFormatResponse::TableRowFormatResponse()
{
    m_RowFormatIsSet = false;

}

TableRowFormatResponse::~TableRowFormatResponse()
{
}

void TableRowFormatResponse::validate()
{
    // TODO: implement validation
}

web::json::value TableRowFormatResponse::toJson() const
{
    web::json::value val = this->WordsResponse::toJson();
    if(m_RowFormatIsSet)
    {
        val[_XPLATSTR("RowFormat")] = ModelBase::toJson(m_RowFormat);
    }

    return val;
}

void TableRowFormatResponse::fromJson(web::json::value& val)
{
    this->WordsResponse::fromJson(val);

    if(val.has_field(_XPLATSTR("RowFormat")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("RowFormat")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TableRowFormat> newItem(new TableRowFormat());
            newItem->fromJson(fieldValue);
            setRowFormat( newItem );
        }
    }

}

void TableRowFormatResponse::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    WordsResponse::toMultipart(multipart, prefix);
    auto namePrefix = ModelBase::fixNamePrefix(prefix);
    if(m_RowFormatIsSet)
    {
        if (m_RowFormat.get())
        {
            m_RowFormat->toMultipart(multipart, _XPLATSTR("RowFormat."));
        }
    }

}

void TableRowFormatResponse::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    // TODO: implement fromMultiPart
}

std::shared_ptr<TableRowFormat> TableRowFormatResponse::getRowFormat() const
{
    return m_RowFormat;
}


void TableRowFormatResponse::setRowFormat(std::shared_ptr<TableRowFormat> value)
{
    m_RowFormat = value;
    m_RowFormatIsSet = true;
}

bool TableRowFormatResponse::rowFormatIsSet() const
{
    return m_RowFormatIsSet;
}

void TableRowFormatResponse::unsetRowFormat()
{
    m_RowFormatIsSet = false;
}

}
}
}
}
}
