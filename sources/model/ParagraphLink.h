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
 * ParagraphLink.h
 *
 * Paragraph link element
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_ParagraphLink_H_
#define IO_SWAGGER_CLIENT_MODEL_ParagraphLink_H_


#include "NodeLink.h"
#include <cpprest/details/basic_types.h>
#include "WordsApiLink.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Paragraph link element
/// </summary>
class  ParagraphLink
    : public NodeLink
{
public:
    ParagraphLink();
    virtual ~ParagraphLink();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ParagraphLink members

    /// <summary>
    /// Paragraph&#39;s text
    /// </summary>
    utility::string_t getText() const;
    bool textIsSet() const;
    void unsetText();
    void setText(utility::string_t value);

protected:
    utility::string_t m_Text;
    bool m_TextIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_ParagraphLink_H_ */
