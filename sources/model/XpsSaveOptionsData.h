/**
 * Aspose.Words for Cloud API Reference
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 18.9.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * XpsSaveOptionsData.h
 *
 * Container class for xps save options.
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_XpsSaveOptionsData_H_
#define IO_SWAGGER_CLIENT_MODEL_XpsSaveOptionsData_H_


#include "MetafileRenderingOptionsData.h"
#include "FixedPageSaveOptionsData.h"
#include <cpprest/details/basic_types.h>
#include "OutlineOptionsData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Container class for xps save options.
/// </summary>
class  XpsSaveOptionsData
    : public FixedPageSaveOptionsData
{
public:
    XpsSaveOptionsData();
    virtual ~XpsSaveOptionsData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// XpsSaveOptionsData members

    /// <summary>
    /// Specifies the level in the XPS document outline at which to display Word bookmarks.
    /// </summary>
    int32_t getBookmarksOutlineLevel() const;
    bool bookmarksOutlineLevelIsSet() const;
    void unsetBookmarksOutlineLevel();
    void setBookmarksOutlineLevel(int32_t value);
    /// <summary>
    /// Specifies how many levels of headings (paragraphs formatted with the Heading styles) to include in the XPS document outline.
    /// </summary>
    int32_t getHeadingsOutlineLevels() const;
    bool headingsOutlineLevelsIsSet() const;
    void unsetHeadingsOutlineLevels();
    void setHeadingsOutlineLevels(int32_t value);
    /// <summary>
    /// Allows to specify outline options
    /// </summary>
    std::shared_ptr<OutlineOptionsData> getOutlineOptions() const;
    bool outlineOptionsIsSet() const;
    void unsetOutlineOptions();
    void setOutlineOptions(std::shared_ptr<OutlineOptionsData> value);
    /// <summary>
    /// Determines whether the document should be saved using a booklet printing layout
    /// </summary>
    bool isUseBookFoldPrintingSettings() const;
    bool useBookFoldPrintingSettingsIsSet() const;
    void unsetUseBookFoldPrintingSettings();
    void setUseBookFoldPrintingSettings(bool value);

protected:
    int32_t m_BookmarksOutlineLevel;
    bool m_BookmarksOutlineLevelIsSet;
    int32_t m_HeadingsOutlineLevels;
    bool m_HeadingsOutlineLevelsIsSet;
    std::shared_ptr<OutlineOptionsData> m_OutlineOptions;
    bool m_OutlineOptionsIsSet;
    bool m_UseBookFoldPrintingSettings;
    bool m_UseBookFoldPrintingSettingsIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_XpsSaveOptionsData_H_ */
