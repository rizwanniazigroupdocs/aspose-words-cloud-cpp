/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="PageStatData.h">
*   Copyright (c) 2019 Aspose.Words for Cloud
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

#ifndef ASPOSE_WORDS_CLOUD_API_MODELS_PageStatData_H_
#define ASPOSE_WORDS_CLOUD_API_MODELS_PageStatData_H_


#include "../ModelBase.h"

#include "FootnotesStatData.h"
#include <cpprest/details/basic_types.h>

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

/// <summary>
/// Container for the page&#x27;s statistical data.
/// </summary>
class  PageStatData
    : public ModelBase
{
public:
    PageStatData();
    virtual ~PageStatData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PageStatData members

    /// <summary>
    /// Gets or sets page number.
    /// </summary>
    <DATA_TYPE_START>int?<DATA_TYPE_END> getPageNumber() const;
    bool pageNumberIsSet() const;
    void unsetPageNumber();
    void setPageNumber(<DATA_TYPE_START>int?<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets total count of words in the page.
    /// </summary>
    <DATA_TYPE_START>int?<DATA_TYPE_END> getWordCount() const;
    bool wordCountIsSet() const;
    void unsetWordCount();
    void setWordCount(<DATA_TYPE_START>int?<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets total count of paragraphs in the page.
    /// </summary>
    <DATA_TYPE_START>int?<DATA_TYPE_END> getParagraphCount() const;
    bool paragraphCountIsSet() const;
    void unsetParagraphCount();
    void setParagraphCount(<DATA_TYPE_START>int?<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets FootnotesStatData.
    /// </summary>
    <DATA_TYPE_START>FootnotesStatData<DATA_TYPE_END> getFootnotesStatData() const;
    bool footnotesStatDataIsSet() const;
    void unsetFootnotesStatData();
    void setFootnotesStatData(<DATA_TYPE_START>FootnotesStatData<DATA_TYPE_END> value);

protected:
    <DATA_TYPE_START>int?<DATA_TYPE_END> m_PageNumber;
    bool m_PageNumberIsSet;
    <DATA_TYPE_START>int?<DATA_TYPE_END> m_WordCount;
    bool m_WordCountIsSet;
    <DATA_TYPE_START>int?<DATA_TYPE_END> m_ParagraphCount;
    bool m_ParagraphCountIsSet;
    <DATA_TYPE_START>FootnotesStatData<DATA_TYPE_END> m_FootnotesStatData;
    bool m_FootnotesStatDataIsSet;
};

}
}
}
}
}

#endif /* ASPOSE_WORDS_CLOUD_API_MODELS_PageStatData_H_ */
