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
 * Runs.h
 *
 * Represents DTO for collection of runs.
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Runs_H_
#define IO_SWAGGER_CLIENT_MODEL_Runs_H_


#include "LinkElement.h"
#include "Run.h"
#include <vector>
#include "WordsApiLink.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Represents DTO for collection of runs.
/// </summary>
class  Runs
    : public LinkElement
{
public:
    Runs();
    virtual ~Runs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Runs members

    /// <summary>
    /// Collection of fields
    /// </summary>
    std::vector<std::shared_ptr<Run>>& getList();
    bool listIsSet() const;
    void unsetList();
    void setList(std::vector<std::shared_ptr<Run>> value);

protected:
    std::vector<std::shared_ptr<Run>> m_List;
    bool m_ListIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Runs_H_ */
