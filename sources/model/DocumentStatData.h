/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="DocumentStatData.h">
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

#ifndef ASPOSE_WORDS_CLOUD_API_MODELS_DocumentStatData_H_
#define ASPOSE_WORDS_CLOUD_API_MODELS_DocumentStatData_H_

#include "FootnotesStatData.h"
#include "PageStatData.h"
#include "../ModelBase.h"
#include <cpprest/details/basic_types.h>

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

/// <summary>
/// Container for the document's statistical data.
/// </summary>
class DocumentStatData
    : public ModelBase
{
public:
    DocumentStatData();
    virtual ~DocumentStatData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DocumentStatData members

    /// <summary>
    /// Gets or sets the detailed statistics on footnotes.
    /// </summary>
    std::shared_ptr<FootnotesStatData> getFootnotesStatData() const;
    bool footnotesStatDataIsSet() const;
    void unsetFootnotesStatData();
    void setFootnotesStatData(std::shared_ptr<FootnotesStatData> value);

    /// <summary>
    /// Gets or sets the total count of pages in the document.
    /// </summary>
    int32_t getPageCount() const;
    bool pageCountIsSet() const;
    void unsetPageCount();
    void setPageCount(int32_t value);

    /// <summary>
    /// Gets or sets the detailed statistics on all pages.
    /// </summary>
    std::vector<std::shared_ptr<PageStatData>>& getPageStatData();
    bool pageStatDataIsSet() const;
    void unsetPageStatData();
    void setPageStatData(std::vector<std::shared_ptr<PageStatData>> const& value);

    /// <summary>
    /// Gets or sets the total count of paragraphs in the document.
    /// </summary>
    int32_t getParagraphCount() const;
    bool paragraphCountIsSet() const;
    void unsetParagraphCount();
    void setParagraphCount(int32_t value);

    /// <summary>
    /// Gets or sets the total count of words in the document.
    /// </summary>
    int32_t getWordCount() const;
    bool wordCountIsSet() const;
    void unsetWordCount();
    void setWordCount(int32_t value);

protected:
    std::shared_ptr<FootnotesStatData> m_FootnotesStatData;
    bool m_FootnotesStatDataIsSet;

    int32_t m_PageCount;
    bool m_PageCountIsSet;

    std::vector<std::shared_ptr<PageStatData>> m_PageStatData;
    bool m_PageStatDataIsSet;

    int32_t m_ParagraphCount;
    bool m_ParagraphCountIsSet;

    int32_t m_WordCount;
    bool m_WordCountIsSet;
};

}
}
}
}
}

#endif /* ASPOSE_WORDS_CLOUD_API_MODELS_DocumentStatData_H_ */
