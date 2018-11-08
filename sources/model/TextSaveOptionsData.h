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
 * TextSaveOptionsData.h
 *
 * Container class for text save options.
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_TextSaveOptionsData_H_
#define IO_SWAGGER_CLIENT_MODEL_TextSaveOptionsData_H_


#include "SaveOptionsData.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Container class for text save options.
/// </summary>
class  TextSaveOptionsData
    : public SaveOptionsData
{
public:
    TextSaveOptionsData();
    virtual ~TextSaveOptionsData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TextSaveOptionsData members

    /// <summary>
    /// Specifies the encoding to use when exporting in plain text format
    /// </summary>
    utility::string_t getEncoding() const;
    bool encodingIsSet() const;
    void unsetEncoding();
    void setEncoding(utility::string_t value);
    /// <summary>
    /// Specifies whether to output headers and footers when exporting in plain text format
    /// </summary>
    bool isExportHeadersFooters() const;
    bool exportHeadersFootersIsSet() const;
    void unsetExportHeadersFooters();
    void setExportHeadersFooters(bool value);
    /// <summary>
    /// Allows to specify whether the page breaks should be preserved during export. The default value is false.
    /// </summary>
    bool isForcePageBreaks() const;
    bool forcePageBreaksIsSet() const;
    void unsetForcePageBreaks();
    void setForcePageBreaks(bool value);
    /// <summary>
    /// Specifies the string to use as a paragraph break when exporting in plain text format
    /// </summary>
    utility::string_t getParagraphBreak() const;
    bool paragraphBreakIsSet() const;
    void unsetParagraphBreak();
    void setParagraphBreak(utility::string_t value);
    /// <summary>
    /// Specifies whether the program should attempt to preserve layout of tables when saving in the plain text format
    /// </summary>
    bool isPreserveTableLayout() const;
    bool preserveTableLayoutIsSet() const;
    void unsetPreserveTableLayout();
    void setPreserveTableLayout(bool value);
    /// <summary>
    /// Specifies whether the program should simplify list labels in case of complex label formatting not being adequately represented by plain text
    /// </summary>
    bool isSimplifyListLabels() const;
    bool simplifyListLabelsIsSet() const;
    void unsetSimplifyListLabels();
    void setSimplifyListLabels(bool value);

protected:
    utility::string_t m_Encoding;
    bool m_EncodingIsSet;
    bool m_ExportHeadersFooters;
    bool m_ExportHeadersFootersIsSet;
    bool m_ForcePageBreaks;
    bool m_ForcePageBreaksIsSet;
    utility::string_t m_ParagraphBreak;
    bool m_ParagraphBreakIsSet;
    bool m_PreserveTableLayout;
    bool m_PreserveTableLayoutIsSet;
    bool m_SimplifyListLabels;
    bool m_SimplifyListLabelsIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_TextSaveOptionsData_H_ */
