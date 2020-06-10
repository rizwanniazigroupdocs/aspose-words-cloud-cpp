/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="StylesResponse.cpp">
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

#include "StylesResponse.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

StylesResponse::StylesResponse()
{
    m_StylesIsSet = false;

}

StylesResponse::~StylesResponse()
{
}

void StylesResponse::validate()
{
    // TODO: implement validation
}

web::json::value StylesResponse::toJson() const
{
    web::json::value val = this->WordsResponse::toJson();
    if(m_StylesIsSet)
    {
        std::vector<web::json::value> jsonArray;
        std::transform(m_Styles.begin(), m_Styles.end(), std::back_inserter(jsonArray),
            [&](std::shared_ptr<Style> item) {
            return ModelBase::toJson(item);
        });

        if(jsonArray.size() > 0)
        {
            val[_XPLATSTR("Styles")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void StylesResponse::fromJson(web::json::value& val)
{
    this->WordsResponse::fromJson(val);

    {
        m_Styles.clear();
        if(val.has_field(_XPLATSTR("Styles")) 
                            && !val[_XPLATSTR("Styles")].is_null())
        {
            auto arr = val[_XPLATSTR("Styles")].as_array();
            std::transform(arr.begin(), arr.end(), std::back_inserter(m_Styles), [&](web::json::value& item){
                if(!item.is_null())
                {
                    std::shared_ptr<Style> newItem(new Style());
                    newItem->fromJson(item);
                    return newItem;
                }

                return (std::shared_ptr<Style>)nullptr;
            });
        }
    }

}

void StylesResponse::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    WordsResponse::toMultipart(multipart, prefix);
    auto namePrefix = ModelBase::fixNamePrefix(prefix);
    {
        std::vector<web::json::value> jsonArray;
        std::transform(m_Styles.begin(), m_Styles.end(), std::back_inserter(jsonArray), [&](std::shared_ptr<Style> item){
            return ModelBase::toJson(item);
        });

        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Styles"), web::json::value::array(jsonArray), _XPLATSTR("application/json")));
        }
    }

}

void StylesResponse::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    // TODO: implement fromMultiPart
}

std::vector<std::shared_ptr<Style>>& StylesResponse::getStyles()
{
    return m_Styles;
}


void StylesResponse::setStyles(std::vector<std::shared_ptr<Style>> const& value)
{
    m_Styles = value;
    m_StylesIsSet = true;
}

bool StylesResponse::stylesIsSet() const
{
    return m_StylesIsSet;
}

void StylesResponse::unsetStyles()
{
    m_StylesIsSet = false;
}

}
}
}
}
}
