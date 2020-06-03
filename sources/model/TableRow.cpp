/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="TableRow.cpp">
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

#include "TableRow.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

TableRow::TableRow()
{
    m_RowFormatIsSet = false;

    m_TableCellListIsSet = false;

}

TableRow::~TableRow()
{
}

void TableRow::validate()
{
    // TODO: implement validation
}

web::json::value TableRow::toJson() const
{
    web::json::value val = this->NodeLink::toJson();
    if(m_RowFormatIsSet)
    {
        val[_XPLATSTR("RowFormat")] = ModelBase::toJson(m_RowFormat);
    }
    if(m_TableCellListIsSet)
    {
        std::vector<web::json::value> jsonArray;
        std::transform(m_TableCellList.begin(), m_TableCellList.end(), std::back_inserter(jsonArray),
            [&](std::shared_ptr<TableCell> item) {
            return ModelBase::toJson(item);
        });

        if(jsonArray.size() > 0)
        {
            val[_XPLATSTR("TableCellList")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void TableRow::fromJson(web::json::value& val)
{
    this->NodeLink::fromJson(val);

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


    {
        m_TableCellList.clear();
        if(val.has_field(_XPLATSTR("TableCellList")) 
                            && !val[_XPLATSTR("TableCellList")].is_null())
        {
            auto arr = val[_XPLATSTR("TableCellList")].as_array();
            std::transform(arr.begin(), arr.end(), std::back_inserter(m_TableCellList), [&](web::json::value& item){
                if(!item.is_null())
                {
                    std::shared_ptr<TableCell> newItem(new TableCell());
                    newItem->fromJson(item);
                    return newItem;
                }

                return (std::shared_ptr<TableCell>)nullptr;
            });
        }
    }

}

void TableRow::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    NodeLink::toMultipart(multipart, prefix);
    auto namePrefix = ModelBase::fixNamePrefix(prefix);
    if(m_RowFormatIsSet)
    {
        if (m_RowFormat.get())
        {
            m_RowFormat->toMultipart(multipart, _XPLATSTR("RowFormat."));
        }
    }


    {
        std::vector<web::json::value> jsonArray;
        std::transform(m_TableCellList.begin(), m_TableCellList.end(), std::back_inserter(jsonArray), [&](std::shared_ptr<TableCell> item){
            return ModelBase::toJson(item);
        });

        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("TableCellList"), web::json::value::array(jsonArray), _XPLATSTR("application/json")));
        }
    }

}

void TableRow::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    // TODO: implement fromMultiPart
}

std::shared_ptr<TableRowFormat> TableRow::getRowFormat() const
{
    return m_RowFormat;
}


void TableRow::setRowFormat(std::shared_ptr<TableRowFormat> value)
{
    m_RowFormat = value;
    m_RowFormatIsSet = true;
}

bool TableRow::rowFormatIsSet() const
{
    return m_RowFormatIsSet;
}

void TableRow::unsetRowFormat()
{
    m_RowFormatIsSet = false;
}

std::vector<std::shared_ptr<TableCell>>& TableRow::getTableCellList()
{
    return m_TableCellList;
}


void TableRow::setTableCellList(std::vector<std::shared_ptr<TableCell>> const& value)
{
    m_TableCellList = value;
    m_TableCellListIsSet = true;
}

bool TableRow::tableCellListIsSet() const
{
    return m_TableCellListIsSet;
}

void TableRow::unsetTableCellList()
{
    m_TableCellListIsSet = false;
}

}
}
}
}
}
