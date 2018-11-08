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
 * GraphicsQualityOptionsData.h
 *
 * Allows to specify additional System.Drawing.Graphics quality options.
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_GraphicsQualityOptionsData_H_
#define IO_SWAGGER_CLIENT_MODEL_GraphicsQualityOptionsData_H_


#include "../ModelBase.h"

#include "StringFormatData.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Allows to specify additional System.Drawing.Graphics quality options.
/// </summary>
class  GraphicsQualityOptionsData
    : public ModelBase
{
public:
    GraphicsQualityOptionsData();
    virtual ~GraphicsQualityOptionsData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GraphicsQualityOptionsData members

    /// <summary>
    /// Gets or sets a value that specifies how composited images are drawn to this Graphics.
    /// </summary>
    utility::string_t getCompositingMode() const;
    bool compositingModeIsSet() const;
    void unsetCompositingMode();
    void setCompositingMode(utility::string_t value);
    /// <summary>
    /// Gets or sets the rendering quality of composited images drawn to this Graphics.
    /// </summary>
    utility::string_t getCompositingQuality() const;
    bool compositingQualityIsSet() const;
    void unsetCompositingQuality();
    void setCompositingQuality(utility::string_t value);
    /// <summary>
    /// Gets or sets the interpolation mode associated with this Graphics.
    /// </summary>
    utility::string_t getInterpolationMode() const;
    bool interpolationModeIsSet() const;
    void unsetInterpolationMode();
    void setInterpolationMode(utility::string_t value);
    /// <summary>
    /// Gets or sets the rendering quality for this Graphics.
    /// </summary>
    utility::string_t getSmoothingMode() const;
    bool smoothingModeIsSet() const;
    void unsetSmoothingMode();
    void setSmoothingMode(utility::string_t value);
    /// <summary>
    /// Gets or sets text layout information (such as alignment, orientation and tab stops) display manipulations (such as ellipsis insertion and national digit substitution) and OpenType features.
    /// </summary>
    std::shared_ptr<StringFormatData> getStringFormat() const;
    bool stringFormatIsSet() const;
    void unsetStringFormat();
    void setStringFormat(std::shared_ptr<StringFormatData> value);
    /// <summary>
    /// Gets or sets the rendering mode for text associated with this Graphics.
    /// </summary>
    utility::string_t getTextRenderingHint() const;
    bool textRenderingHintIsSet() const;
    void unsetTextRenderingHint();
    void setTextRenderingHint(utility::string_t value);

protected:
    utility::string_t m_CompositingMode;
    bool m_CompositingModeIsSet;
    utility::string_t m_CompositingQuality;
    bool m_CompositingQualityIsSet;
    utility::string_t m_InterpolationMode;
    bool m_InterpolationModeIsSet;
    utility::string_t m_SmoothingMode;
    bool m_SmoothingModeIsSet;
    std::shared_ptr<StringFormatData> m_StringFormat;
    bool m_StringFormatIsSet;
    utility::string_t m_TextRenderingHint;
    bool m_TextRenderingHintIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_GraphicsQualityOptionsData_H_ */
