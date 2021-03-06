/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="Lists.cpp">
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

#include "Lists.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

Lists::Lists()
{
    m_ListInfoIsSet = false;

}

Lists::~Lists()
{
}

void Lists::validate()
{
    // TODO: implement validation
}

web::json::value Lists::toJson() const
{
    web::json::value val = this->LinkElement::toJson();
    if(m_ListInfoIsSet)
    {
        std::vector<web::json::value> jsonArray;
        std::transform(m_ListInfo.begin(), m_ListInfo.end(), std::back_inserter(jsonArray),
            [&](std::shared_ptr<ListInfo> item) {
            return ModelBase::toJson(item);
        });

        if(jsonArray.size() > 0)
        {
            val[_XPLATSTR("ListInfo")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void Lists::fromJson(web::json::value& val)
{
    this->LinkElement::fromJson(val);

    {
        m_ListInfo.clear();
        if(val.has_field(_XPLATSTR("ListInfo")) 
                            && !val[_XPLATSTR("ListInfo")].is_null())
        {
            auto arr = val[_XPLATSTR("ListInfo")].as_array();
            std::transform(arr.begin(), arr.end(), std::back_inserter(m_ListInfo), [&](web::json::value& item){
                if(!item.is_null())
                {
                    std::shared_ptr<ListInfo> newItem(new ListInfo());
                    newItem->fromJson(item);
                    return newItem;
                }

                return (std::shared_ptr<ListInfo>)nullptr;
            });
        }
    }

}

void Lists::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    LinkElement::toMultipart(multipart, prefix);
    auto namePrefix = ModelBase::fixNamePrefix(prefix);
    {
        std::vector<web::json::value> jsonArray;
        std::transform(m_ListInfo.begin(), m_ListInfo.end(), std::back_inserter(jsonArray), [&](std::shared_ptr<ListInfo> item){
            return ModelBase::toJson(item);
        });

        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("ListInfo"), web::json::value::array(jsonArray), _XPLATSTR("application/json")));
        }
    }

}

void Lists::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    // TODO: implement fromMultiPart
}

std::vector<std::shared_ptr<ListInfo>>& Lists::getListInfo()
{
    return m_ListInfo;
}


void Lists::setListInfo(std::vector<std::shared_ptr<ListInfo>> const& value)
{
    m_ListInfo = value;
    m_ListInfoIsSet = true;
}

bool Lists::listInfoIsSet() const
{
    return m_ListInfoIsSet;
}

void Lists::unsetListInfo()
{
    m_ListInfoIsSet = false;
}

}
}
}
}
}
