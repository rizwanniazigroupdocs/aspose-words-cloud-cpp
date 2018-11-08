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
 * PsSaveOptionsData.h
 *
 * container class for ps save options
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_PsSaveOptionsData_H_
#define IO_SWAGGER_CLIENT_MODEL_PsSaveOptionsData_H_


#include "MetafileRenderingOptionsData.h"
#include "FixedPageSaveOptionsData.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// container class for ps save options
/// </summary>
class  PsSaveOptionsData
    : public FixedPageSaveOptionsData
{
public:
    PsSaveOptionsData();
    virtual ~PsSaveOptionsData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PsSaveOptionsData members

    /// <summary>
    /// Determines whether the document should be saved using a booklet printing layout
    /// </summary>
    bool isUseBookFoldPrintingSettings() const;
    bool useBookFoldPrintingSettingsIsSet() const;
    void unsetUseBookFoldPrintingSettings();
    void setUseBookFoldPrintingSettings(bool value);

protected:
    bool m_UseBookFoldPrintingSettings;
    bool m_UseBookFoldPrintingSettingsIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_PsSaveOptionsData_H_ */
