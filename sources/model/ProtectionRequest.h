/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ProtectionRequest.h">
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

#ifndef ASPOSE_WORDS_CLOUD_API_MODELS_ProtectionRequest_H_
#define ASPOSE_WORDS_CLOUD_API_MODELS_ProtectionRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

/// <summary>
/// Request on changing of protection.
/// </summary>
class  ProtectionRequest
    : public ModelBase
{
public:
    ProtectionRequest();
    virtual ~ProtectionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ProtectionRequest members

    /// <summary>
    /// Gets or sets current password.
    /// </summary>
    <DATA_TYPE_START>string<DATA_TYPE_END> getPassword() const;
    bool passwordIsSet() const;
    void unsetPassword();
    void setPassword(<DATA_TYPE_START>string<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets new password.
    /// </summary>
    <DATA_TYPE_START>string<DATA_TYPE_END> getNewPassword() const;
    bool newPasswordIsSet() const;
    void unsetNewPassword();
    void setNewPassword(<DATA_TYPE_START>string<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets new type of protection.
    /// </summary>
    <DATA_TYPE_START>string<DATA_TYPE_END> getProtectionType() const;
    bool protectionTypeIsSet() const;
    void unsetProtectionType();
    void setProtectionType(<DATA_TYPE_START>string<DATA_TYPE_END> value);

protected:
    <DATA_TYPE_START>string<DATA_TYPE_END> m_Password;
    bool m_PasswordIsSet;
    <DATA_TYPE_START>string<DATA_TYPE_END> m_NewPassword;
    bool m_NewPasswordIsSet;
    <DATA_TYPE_START>string<DATA_TYPE_END> m_ProtectionType;
    bool m_ProtectionTypeIsSet;
};

}
}
}
}
}

#endif /* ASPOSE_WORDS_CLOUD_API_MODELS_ProtectionRequest_H_ */
