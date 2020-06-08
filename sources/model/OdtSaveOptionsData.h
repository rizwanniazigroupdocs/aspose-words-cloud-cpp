/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="OdtSaveOptionsData.h">
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

#ifndef ASPOSE_WORDS_CLOUD_API_MODELS_OdtSaveOptionsData_H_
#define ASPOSE_WORDS_CLOUD_API_MODELS_OdtSaveOptionsData_H_


#include "SaveOptionsData.h"
#include <cpprest/details/basic_types.h>

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

/// <summary>
/// container class for odt/ott save options.
/// </summary>
class  OdtSaveOptionsData
    : public SaveOptionsData
{
public:
    OdtSaveOptionsData();
    virtual ~OdtSaveOptionsData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OdtSaveOptionsData members

    /// <summary>
    /// Gets or sets specifies whether export should correspond to ODT specification 1.1 strictly.
    /// </summary>
    <DATA_TYPE_START>bool?<DATA_TYPE_END> isIsStrictSchema11() const;
    bool isStrictSchema11IsSet() const;
    void unsetIsStrictSchema11();
    void setIsStrictSchema11(<DATA_TYPE_START>bool?<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets allows to specify units of measure to apply to document content. The default value is Aspose.Words.Saving.OdtSaveMeasureUnit.Centimeters.  Open Office uses centimeters when specifying lengths, widths and other measurable formatting and content properties in documents whereas MS Office uses inches.
    /// </summary>
    <DATA_TYPE_START>string<DATA_TYPE_END> getMeasureUnit() const;
    bool measureUnitIsSet() const;
    void unsetMeasureUnit();
    void setMeasureUnit(<DATA_TYPE_START>string<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets a password to encrypt document.
    /// </summary>
    <DATA_TYPE_START>string<DATA_TYPE_END> getPassword() const;
    bool passwordIsSet() const;
    void unsetPassword();
    void setPassword(<DATA_TYPE_START>string<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets specifies whether or not use pretty formats output.
    /// </summary>
    <DATA_TYPE_START>bool?<DATA_TYPE_END> isPrettyFormat() const;
    bool prettyFormatIsSet() const;
    void unsetPrettyFormat();
    void setPrettyFormat(<DATA_TYPE_START>bool?<DATA_TYPE_END> value);

protected:
    <DATA_TYPE_START>bool?<DATA_TYPE_END> m_IsStrictSchema11;
    bool m_IsStrictSchema11IsSet;
    <DATA_TYPE_START>string<DATA_TYPE_END> m_MeasureUnit;
    bool m_MeasureUnitIsSet;
    <DATA_TYPE_START>string<DATA_TYPE_END> m_Password;
    bool m_PasswordIsSet;
    <DATA_TYPE_START>bool?<DATA_TYPE_END> m_PrettyFormat;
    bool m_PrettyFormatIsSet;
};

}
}
}
}
}

#endif /* ASPOSE_WORDS_CLOUD_API_MODELS_OdtSaveOptionsData_H_ */
