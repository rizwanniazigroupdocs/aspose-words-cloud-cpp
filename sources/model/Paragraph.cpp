/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="Paragraph.cpp">
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


#include "Paragraph.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Paragraph::Paragraph()
{
    m_ChildNodesIsSet = false;
}

Paragraph::~Paragraph()
{
}

void Paragraph::validate()
{
    // TODO: implement validation
}

web::json::value Paragraph::toJson() const
{
    web::json::value val = this->NodeLink::toJson();

    {
        std::vector<web::json::value> jsonArray;
        std::transform(m_ChildNodes.begin(), m_ChildNodes.end(), std::back_inserter(jsonArray),
			[&](std::shared_ptr<NodeLink> item) {
			return ModelBase::toJson(item);
		});
        
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("ChildNodes")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void Paragraph::fromJson(web::json::value& val)
{
    this->NodeLink::fromJson(val);

    {
        m_ChildNodes.clear();
        if(val.has_field(utility::conversions::to_string_t("ChildNodes")) 
                            && !val[utility::conversions::to_string_t("ChildNodes")].is_null())
        {
        auto arr = val[utility::conversions::to_string_t("ChildNodes")].as_array();
        std::transform(arr.begin(), arr.end(), std::back_inserter(m_ChildNodes), [&](std::shared_ptr<NodeLink> item){
            if(item.is_null())
            {
                return std::shared_ptr<NodeLink>(nullptr);
            }
            else
            {
                std::shared_ptr<NodeLink> newItem(new NodeLink());
                newItem->fromJson(item);
                return newItem;
            }
        });

        }
    }
}

void Paragraph::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    {
        std::vector<web::json::value> jsonArray;
        std::transform(m_ChildNodes.begin(), m_ChildNodes.end(), std::back_inserter(jsonArray), [&](std::shared_ptr<NodeLink> item){
            return ModelBase::toJson(item);
        });
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ChildNodes"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void Paragraph::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    {
        m_ChildNodes.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("ChildNodes")))
        {

        web::json::array jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ChildNodes")))).as_array();
        std::transform(jsonArray.begin(), jsonArray.end(), std::back_inserter(m_ChildNodes), [&](std::shared_ptr<NodeLink> item) {
            if(item.is_null())
            {
                return std::shared_ptr<NodeLink>(nullptr) ;
            }
            else
            {
                std::shared_ptr<NodeLink> newItem(new NodeLink());
                newItem->fromJson(item);
                return newItem ;
            }
        });
        }
    }
}

std::vector<std::shared_ptr<NodeLink>>& Paragraph::getChildNodes()
{
    return m_ChildNodes;
}

void Paragraph::setChildNodes(std::vector<std::shared_ptr<NodeLink>> const& value)
{
    m_ChildNodes = value;
    m_ChildNodesIsSet = true;
}
bool Paragraph::childNodesIsSet() const
{
    return m_ChildNodesIsSet;
}

void Paragraph::unsetChildNodes()
{
    m_ChildNodesIsSet = false;
}

}
}
}
}

