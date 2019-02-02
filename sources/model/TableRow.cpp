/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="TableRow.cpp">
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


#include "TableRow.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

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
        val[utility::conversions::to_string_t("RowFormat")] = ModelBase::toJson(m_RowFormat);
    }
    {
        std::vector<web::json::value> jsonArray;
        std::transform(m_TableCellList.begin(), m_TableCellList.end(), std::back_inserter(jsonArray),
			[&](std::shared_ptr<TableCell> item) {
			return ModelBase::toJson(item);
		});
        
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("TableCellList")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void TableRow::fromJson(web::json::value& val)
{
    this->NodeLink::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("RowFormat")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("RowFormat")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TableRowFormat> newItem(new TableRowFormat());
            newItem->fromJson(fieldValue);
            setRowFormat( newItem );
        }
    }
    {
        m_TableCellList.clear();
        if(val.has_field(utility::conversions::to_string_t("TableCellList")) 
                            && !val[utility::conversions::to_string_t("TableCellList")].is_null())
        {
        auto arr = val[utility::conversions::to_string_t("TableCellList")].as_array();
        std::transform(arr.begin(), arr.end(), std::back_inserter(m_TableCellList), [&](web::json::value& item){
            if(item.is_null())
            {
                return std::shared_ptr<TableCell>(nullptr);
            }
            else
            {
                std::shared_ptr<TableCell> newItem(new TableCell());
                newItem->fromJson(item);
                return newItem;
            }
        });

        }
    }
}

void TableRow::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_LinkIsSet)
    {
        if (m_Link.get())
        {
            m_Link->toMultipart(multipart, utility::conversions::to_string_t("link."));
        }
        
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("NodeId"), m_NodeId));
        
    }
    if(m_RowFormatIsSet)
    {
        if (m_RowFormat.get())
        {
            m_RowFormat->toMultipart(multipart, utility::conversions::to_string_t("RowFormat."));
        }
        
    }
    {
        std::vector<web::json::value> jsonArray;
        std::transform(m_TableCellList.begin(), m_TableCellList.end(), std::back_inserter(jsonArray), [&](std::shared_ptr<TableCell> item){
            return ModelBase::toJson(item);
        });
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TableCellList"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void TableRow::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("link")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("link")))
        {
            std::shared_ptr<WordsApiLink> newItem(new WordsApiLink());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("link."));
            setLink( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("NodeId")))
    {
        setNodeId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("NodeId"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("RowFormat")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("RowFormat")))
        {
            std::shared_ptr<TableRowFormat> newItem(new TableRowFormat());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("RowFormat."));
            setRowFormat( newItem );
        }
    }
    {
        m_TableCellList.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("TableCellList")))
        {

        web::json::array jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TableCellList")))).as_array();
        std::transform(jsonArray.begin(), jsonArray.end(), std::back_inserter(m_TableCellList), [&](web::json::value item) {
            if(item.is_null())
            {
                return std::shared_ptr<TableCell>(nullptr) ;
            }
            else
            {
                std::shared_ptr<TableCell> newItem(new TableCell());
                newItem->fromJson(item);
                return newItem ;
            }
        });
        }
    }
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

