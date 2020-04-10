/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ListInfo.h">
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

#ifndef ASPOSE_WORDS_CLOUD_API_MODELS_ListInfo_H_
#define ASPOSE_WORDS_CLOUD_API_MODELS_ListInfo_H_


#include "../ModelBase.h"

#include "ListLevel.h"
#include "Style.h"
#include <cpprest/details/basic_types.h>

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

/// <summary>
/// Represents a single document list.
/// </summary>
class  ListInfo
    : public ModelBase
{
public:
    ListInfo();
    virtual ~ListInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ListInfo members

    /// <summary>
    /// Gets or sets the unique identifier of the list.
    /// </summary>
    int32_t getListId() const;
    bool listIdIsSet() const;
    void unsetListId();
    void setListId(int32_t value);
    /// <summary>
    /// Gets or sets a value indicating whether returns true when the list contains 9 levels; false when 1 level.
    /// </summary>
    bool isIsMultiLevel() const;
    bool isMultiLevelIsSet() const;
    void unsetIsMultiLevel();
    void setIsMultiLevel(bool value);
    /// <summary>
    /// Gets or sets a value indicating whether specifies whether list should be restarted at each section. Default value is false.
    /// </summary>
    bool isIsRestartAtEachSection() const;
    bool isRestartAtEachSectionIsSet() const;
    void unsetIsRestartAtEachSection();
    void setIsRestartAtEachSection(bool value);
    /// <summary>
    /// Gets or sets a value indicating whether returns true if this list is a definition of a list style.
    /// </summary>
    bool isIsListStyleDefinition() const;
    bool isListStyleDefinitionIsSet() const;
    void unsetIsListStyleDefinition();
    void setIsListStyleDefinition(bool value);
    /// <summary>
    /// Gets or sets a value indicating whether returns true if this list is a reference to a list style.
    /// </summary>
    bool isIsListStyleReference() const;
    bool isListStyleReferenceIsSet() const;
    void unsetIsListStyleReference();
    void setIsListStyleReference(bool value);
    /// <summary>
    /// Gets or sets Style.
    /// </summary>
    std::shared_ptr<Style> getStyle() const;
    bool styleIsSet() const;
    void unsetStyle();
    void setStyle(std::shared_ptr<Style> value);
    /// <summary>
    /// Gets or sets the collection of list levels for this list.
    /// </summary>
    std::vector<std::shared_ptr<ListLevel>>& getListLevels();
    bool listLevelsIsSet() const;
    void unsetListLevels();
    void setListLevels(std::vector<std::shared_ptr<ListLevel>> const& value);

protected:
    int32_t m_ListId;
    bool m_ListIdIsSet;
    bool m_IsMultiLevel;
    bool m_IsMultiLevelIsSet;
    bool m_IsRestartAtEachSection;
    bool m_IsRestartAtEachSectionIsSet;
    bool m_IsListStyleDefinition;
    bool m_IsListStyleDefinitionIsSet;
    bool m_IsListStyleReference;
    bool m_IsListStyleReferenceIsSet;
    std::shared_ptr<Style> m_Style;
    bool m_StyleIsSet;
    std::vector<std::shared_ptr<ListLevel>> m_ListLevels;
    bool m_ListLevelsIsSet;
};

}
}
}
}
}

#endif /* ASPOSE_WORDS_CLOUD_API_MODELS_ListInfo_H_ */
