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
 * TiffSaveOptionsData.h
 *
 * Container class for tiff save options.
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_TiffSaveOptionsData_H_
#define IO_SWAGGER_CLIENT_MODEL_TiffSaveOptionsData_H_


#include "MetafileRenderingOptionsData.h"
#include "ImageSaveOptionsData.h"
#include <cpprest/details/basic_types.h>
#include "GraphicsQualityOptionsData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Container class for tiff save options.
/// </summary>
class  TiffSaveOptionsData
    : public ImageSaveOptionsData
{
public:
    TiffSaveOptionsData();
    virtual ~TiffSaveOptionsData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TiffSaveOptionsData members

    /// <summary>
    /// Specifies method used while converting images to 1 bpp format.
    /// </summary>
    utility::string_t getTiffBinarizationMethod() const;
    bool tiffBinarizationMethodIsSet() const;
    void unsetTiffBinarizationMethod();
    void setTiffBinarizationMethod(utility::string_t value);
    /// <summary>
    /// Type of compression.
    /// </summary>
    utility::string_t getTiffCompression() const;
    bool tiffCompressionIsSet() const;
    void unsetTiffCompression();
    void setTiffCompression(utility::string_t value);

protected:
    utility::string_t m_TiffBinarizationMethod;
    bool m_TiffBinarizationMethodIsSet;
    utility::string_t m_TiffCompression;
    bool m_TiffCompressionIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_TiffSaveOptionsData_H_ */
