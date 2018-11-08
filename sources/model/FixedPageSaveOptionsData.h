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
 * FixedPageSaveOptionsData.h
 *
 * Contains common options that can be specified when saving a document into fixed page formats (PDF, XPS, images etc).
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_FixedPageSaveOptionsData_H_
#define IO_SWAGGER_CLIENT_MODEL_FixedPageSaveOptionsData_H_


#include "MetafileRenderingOptionsData.h"
#include "SaveOptionsData.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Contains common options that can be specified when saving a document into fixed page formats (PDF, XPS, images etc).
/// </summary>
class  FixedPageSaveOptionsData
    : public SaveOptionsData
{
public:
    FixedPageSaveOptionsData();
    virtual ~FixedPageSaveOptionsData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FixedPageSaveOptionsData members

    /// <summary>
    /// Determines the quality of the JPEG images inside PDF document.
    /// </summary>
    int32_t getJpegQuality() const;
    bool jpegQualityIsSet() const;
    void unsetJpegQuality();
    void setJpegQuality(int32_t value);
    /// <summary>
    /// Allows to specify metafile rendering options.
    /// </summary>
    std::shared_ptr<MetafileRenderingOptionsData> getMetafileRenderingOptions() const;
    bool metafileRenderingOptionsIsSet() const;
    void unsetMetafileRenderingOptions();
    void setMetafileRenderingOptions(std::shared_ptr<MetafileRenderingOptionsData> value);
    /// <summary>
    /// Indicates the symbol set that is used to represent numbers while rendering to fixed page formats
    /// </summary>
    utility::string_t getNumeralFormat() const;
    bool numeralFormatIsSet() const;
    void unsetNumeralFormat();
    void setNumeralFormat(utility::string_t value);
    /// <summary>
    /// Flag indicates whether it is required to optimize output of XPS.  If this flag is set redundant nested canvases and empty canvases are removed, also neighbor glyphs with the same formatting are concatenated.  Note: The accuracy of the content display may be affected if this property is set to true.  Default is false.
    /// </summary>
    bool isOptimizeOutput() const;
    bool optimizeOutputIsSet() const;
    void unsetOptimizeOutput();
    void setOptimizeOutput(bool value);
    /// <summary>
    /// Determines number of pages to render
    /// </summary>
    int32_t getPageCount() const;
    bool pageCountIsSet() const;
    void unsetPageCount();
    void setPageCount(int32_t value);
    /// <summary>
    /// Determines 0-based index of the first page to render
    /// </summary>
    int32_t getPageIndex() const;
    bool pageIndexIsSet() const;
    void unsetPageIndex();
    void setPageIndex(int32_t value);

protected:
    int32_t m_JpegQuality;
    bool m_JpegQualityIsSet;
    std::shared_ptr<MetafileRenderingOptionsData> m_MetafileRenderingOptions;
    bool m_MetafileRenderingOptionsIsSet;
    utility::string_t m_NumeralFormat;
    bool m_NumeralFormatIsSet;
    bool m_OptimizeOutput;
    bool m_OptimizeOutputIsSet;
    int32_t m_PageCount;
    bool m_PageCountIsSet;
    int32_t m_PageIndex;
    bool m_PageIndexIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_FixedPageSaveOptionsData_H_ */
