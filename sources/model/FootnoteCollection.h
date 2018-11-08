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
 * FootnoteCollection.h
 *
 * Collection of footnotes.
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_FootnoteCollection_H_
#define IO_SWAGGER_CLIENT_MODEL_FootnoteCollection_H_


#include "Footnote.h"
#include "LinkElement.h"
#include <vector>
#include "WordsApiLink.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Collection of footnotes.
/// </summary>
class  FootnoteCollection
    : public LinkElement
{
public:
    FootnoteCollection();
    virtual ~FootnoteCollection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FootnoteCollection members

    /// <summary>
    /// Collection of foonotes links 
    /// </summary>
    std::vector<std::shared_ptr<Footnote>>& getList();
    bool listIsSet() const;
    void unsetList();
    void setList(std::vector<std::shared_ptr<Footnote>> value);

protected:
    std::vector<std::shared_ptr<Footnote>> m_List;
    bool m_ListIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_FootnoteCollection_H_ */
