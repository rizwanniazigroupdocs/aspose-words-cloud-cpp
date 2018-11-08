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
 * ModificationOperationResult.h
 *
 * result of the operation which modifies the original document and saves the result
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_ModificationOperationResult_H_
#define IO_SWAGGER_CLIENT_MODEL_ModificationOperationResult_H_


#include "../ModelBase.h"

#include "FileLink.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// result of the operation which modifies the original document and saves the result
/// </summary>
class  ModificationOperationResult
    : public ModelBase
{
public:
    ModificationOperationResult();
    virtual ~ModificationOperationResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ModificationOperationResult members

    /// <summary>
    /// Link to the source document (source for the modification operation)
    /// </summary>
    std::shared_ptr<FileLink> getSource() const;
    bool sourceIsSet() const;
    void unsetSource();
    void setSource(std::shared_ptr<FileLink> value);
    /// <summary>
    /// Link to the dest document (result of the modification operation)
    /// </summary>
    std::shared_ptr<FileLink> getDest() const;
    bool destIsSet() const;
    void unsetDest();
    void setDest(std::shared_ptr<FileLink> value);

protected:
    std::shared_ptr<FileLink> m_Source;
    bool m_SourceIsSet;
    std::shared_ptr<FileLink> m_Dest;
    bool m_DestIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_ModificationOperationResult_H_ */
