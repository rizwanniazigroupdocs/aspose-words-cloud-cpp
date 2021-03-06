/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ParagraphLinkCollection.cpp">
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

#include "ParagraphLinkCollection.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

ParagraphLinkCollection::ParagraphLinkCollection()
{
    m_ParagraphLinkListIsSet = false;

}

ParagraphLinkCollection::~ParagraphLinkCollection()
{
}

void ParagraphLinkCollection::validate()
{
    // TODO: implement validation
}

web::json::value ParagraphLinkCollection::toJson() const
{
    web::json::value val = this->LinkElement::toJson();
    if(m_ParagraphLinkListIsSet)
    {
        std::vector<web::json::value> jsonArray;
        std::transform(m_ParagraphLinkList.begin(), m_ParagraphLinkList.end(), std::back_inserter(jsonArray),
            [&](std::shared_ptr<ParagraphLink> item) {
            return ModelBase::toJson(item);
        });

        if(jsonArray.size() > 0)
        {
            val[_XPLATSTR("ParagraphLinkList")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void ParagraphLinkCollection::fromJson(web::json::value& val)
{
    this->LinkElement::fromJson(val);

    {
        m_ParagraphLinkList.clear();
        if(val.has_field(_XPLATSTR("ParagraphLinkList")) 
                            && !val[_XPLATSTR("ParagraphLinkList")].is_null())
        {
            auto arr = val[_XPLATSTR("ParagraphLinkList")].as_array();
            std::transform(arr.begin(), arr.end(), std::back_inserter(m_ParagraphLinkList), [&](web::json::value& item){
                if(!item.is_null())
                {
                    std::shared_ptr<ParagraphLink> newItem(new ParagraphLink());
                    newItem->fromJson(item);
                    return newItem;
                }

                return (std::shared_ptr<ParagraphLink>)nullptr;
            });
        }
    }

}

void ParagraphLinkCollection::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    LinkElement::toMultipart(multipart, prefix);
    auto namePrefix = ModelBase::fixNamePrefix(prefix);
    {
        std::vector<web::json::value> jsonArray;
        std::transform(m_ParagraphLinkList.begin(), m_ParagraphLinkList.end(), std::back_inserter(jsonArray), [&](std::shared_ptr<ParagraphLink> item){
            return ModelBase::toJson(item);
        });

        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("ParagraphLinkList"), web::json::value::array(jsonArray), _XPLATSTR("application/json")));
        }
    }

}

void ParagraphLinkCollection::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    // TODO: implement fromMultiPart
}

std::vector<std::shared_ptr<ParagraphLink>>& ParagraphLinkCollection::getParagraphLinkList()
{
    return m_ParagraphLinkList;
}


void ParagraphLinkCollection::setParagraphLinkList(std::vector<std::shared_ptr<ParagraphLink>> const& value)
{
    m_ParagraphLinkList = value;
    m_ParagraphLinkListIsSet = true;
}

bool ParagraphLinkCollection::paragraphLinkListIsSet() const
{
    return m_ParagraphLinkListIsSet;
}

void ParagraphLinkCollection::unsetParagraphLinkList()
{
    m_ParagraphLinkListIsSet = false;
}

}
}
}
}
}
