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
 * BookmarkData.h
 *
 * DTO for bookmark updating.
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_BookmarkData_H_
#define IO_SWAGGER_CLIENT_MODEL_BookmarkData_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// DTO for bookmark updating.
/// </summary>
class  BookmarkData
    : public ModelBase
{
public:
    BookmarkData();
    virtual ~BookmarkData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BookmarkData members

    /// <summary>
    /// Gets or sets the name of the bookmark.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();
    void setName(utility::string_t value);
    /// <summary>
    /// Gets or sets the text enclosed in the bookmark.
    /// </summary>
    utility::string_t getText() const;
    bool textIsSet() const;
    void unsetText();
    void setText(utility::string_t value);

protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Text;
    bool m_TextIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_BookmarkData_H_ */
