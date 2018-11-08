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
 * TableCellFormatResponse.h
 *
 * This response should be returned by the service when handling: GET http://api.aspose.com/v1.1/words/Test.doc/tables/{0}/rows/{1}/cells/{2}/cellformat
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_TableCellFormatResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_TableCellFormatResponse_H_


#include "AsposeResponse.h"
#include "TableCellFormat.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// This response should be returned by the service when handling: GET http://api.aspose.com/v1.1/words/Test.doc/tables/{0}/rows/{1}/cells/{2}/cellformat
/// </summary>
class  TableCellFormatResponse
    : public AsposeResponse
{
public:
    TableCellFormatResponse();
    virtual ~TableCellFormatResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TableCellFormatResponse members

    /// <summary>
    /// Table.
    /// </summary>
    std::shared_ptr<TableCellFormat> getCellFormat() const;
    bool cellFormatIsSet() const;
    void unsetCellFormat();
    void setCellFormat(std::shared_ptr<TableCellFormat> value);

protected:
    std::shared_ptr<TableCellFormat> m_CellFormat;
    bool m_CellFormatIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_TableCellFormatResponse_H_ */
