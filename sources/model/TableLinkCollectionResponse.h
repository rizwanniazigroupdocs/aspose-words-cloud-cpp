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
 * TableLinkCollectionResponse.h
 *
 * This response should be returned by the service when handling: GET http://api.aspose.com/v1.1/words/Test.doc/tables.
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_TableLinkCollectionResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_TableLinkCollectionResponse_H_


#include "AsposeResponse.h"
#include <cpprest/details/basic_types.h>
#include "TableLinkCollection.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// This response should be returned by the service when handling: GET http://api.aspose.com/v1.1/words/Test.doc/tables.
/// </summary>
class  TableLinkCollectionResponse
    : public AsposeResponse
{
public:
    TableLinkCollectionResponse();
    virtual ~TableLinkCollectionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TableLinkCollectionResponse members

    /// <summary>
    /// Collection of tables.
    /// </summary>
    std::shared_ptr<TableLinkCollection> getTables() const;
    bool tablesIsSet() const;
    void unsetTables();
    void setTables(std::shared_ptr<TableLinkCollection> value);

protected:
    std::shared_ptr<TableLinkCollection> m_Tables;
    bool m_TablesIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_TableLinkCollectionResponse_H_ */
