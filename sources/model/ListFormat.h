/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ListFormat.h">
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

#ifndef ASPOSE_WORDS_CLOUD_API_MODELS_ListFormat_H_
#define ASPOSE_WORDS_CLOUD_API_MODELS_ListFormat_H_

#include "LinkElement.h"
#include "../ModelBase.h"
#include <cpprest/details/basic_types.h>

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

/// <summary>
/// DTO container with a paragraph list format element.
/// </summary>
class ListFormat
    : public LinkElement
{
public:
    ListFormat();
    virtual ~ListFormat();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ListFormat members

    /// <summary>
    /// Gets or sets a value indicating whether the paragraph has bulleted or numbered formatting applied to it.
    /// </summary>
    bool isIsListItem() const;
    bool isListItemIsSet() const;
    void unsetIsListItem();
    void setIsListItem(bool value);

    /// <summary>
    /// Gets or sets the list id of this paragraph.
    /// </summary>
    int32_t getListId() const;
    bool listIdIsSet() const;
    void unsetListId();
    void setListId(int32_t value);

    /// <summary>
    /// Gets or sets the list level number (0 to 8) for the paragraph.
    /// </summary>
    int32_t getListLevelNumber() const;
    bool listLevelNumberIsSet() const;
    void unsetListLevelNumber();
    void setListLevelNumber(int32_t value);

protected:
    bool m_IsListItem;
    bool m_IsListItemIsSet;

    int32_t m_ListId;
    bool m_ListIdIsSet;

    int32_t m_ListLevelNumber;
    bool m_ListLevelNumberIsSet;
};

}
}
}
}
}

#endif /* ASPOSE_WORDS_CLOUD_API_MODELS_ListFormat_H_ */
