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
 * ProtectionResponse.h
 *
 * Response for the request on changing protection of the document
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_ProtectionResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_ProtectionResponse_H_


#include "AsposeResponse.h"
#include <cpprest/details/basic_types.h>
#include "FileLink.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Response for the request on changing protection of the document
/// </summary>
class  ProtectionResponse
    : public AsposeResponse
{
public:
    ProtectionResponse();
    virtual ~ProtectionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ProtectionResponse members

    /// <summary>
    /// Link to the document
    /// </summary>
    std::shared_ptr<FileLink> getDocumentLink() const;
    bool documentLinkIsSet() const;
    void unsetDocumentLink();
    void setDocumentLink(std::shared_ptr<FileLink> value);
    /// <summary>
    /// Result of the changing of protection
    /// </summary>
    bool isProtectionResult() const;
    bool protectionResultIsSet() const;
    void unsetProtectionResult();
    void setProtectionResult(bool value);

protected:
    std::shared_ptr<FileLink> m_DocumentLink;
    bool m_DocumentLinkIsSet;
    bool m_ProtectionResult;
    bool m_ProtectionResultIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_ProtectionResponse_H_ */
