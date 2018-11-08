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
 * OfficeMathObjectsResponse.h
 *
 * This response should be returned by the service when handling: GET http://api.aspose.com/v1.1/words/Test.doc/OfficeMathObjects 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_OfficeMathObjectsResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_OfficeMathObjectsResponse_H_


#include "AsposeResponse.h"
#include <cpprest/details/basic_types.h>
#include "OfficeMathObjectsCollection.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// This response should be returned by the service when handling: GET http://api.aspose.com/v1.1/words/Test.doc/OfficeMathObjects 
/// </summary>
class  OfficeMathObjectsResponse
    : public AsposeResponse
{
public:
    OfficeMathObjectsResponse();
    virtual ~OfficeMathObjectsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OfficeMathObjectsResponse members

    /// <summary>
    /// Collection of OfficeMath objects.
    /// </summary>
    std::shared_ptr<OfficeMathObjectsCollection> getOfficeMathObjects() const;
    bool officeMathObjectsIsSet() const;
    void unsetOfficeMathObjects();
    void setOfficeMathObjects(std::shared_ptr<OfficeMathObjectsCollection> value);

protected:
    std::shared_ptr<OfficeMathObjectsCollection> m_OfficeMathObjects;
    bool m_OfficeMathObjectsIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_OfficeMathObjectsResponse_H_ */
