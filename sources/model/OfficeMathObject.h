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
 * OfficeMathObject.h
 *
 * OfficeMath object.
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_OfficeMathObject_H_
#define IO_SWAGGER_CLIENT_MODEL_OfficeMathObject_H_


#include "OfficeMathLink.h"
#include <cpprest/details/basic_types.h>
#include "StoryChildNodes.h"
#include "WordsApiLink.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// OfficeMath object.
/// </summary>
class  OfficeMathObject
    : public OfficeMathLink
{
public:
    OfficeMathObject();
    virtual ~OfficeMathObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OfficeMathObject members

    /// <summary>
    /// Content of footnote.
    /// </summary>
    std::shared_ptr<StoryChildNodes> getContent() const;
    bool contentIsSet() const;
    void unsetContent();
    void setContent(std::shared_ptr<StoryChildNodes> value);
    /// <summary>
    /// Gets/sets Office Math display format type which represents whether an equation is displayed inline with the text or displayed on its own line.
    /// </summary>
    utility::string_t getDisplayType() const;
    bool displayTypeIsSet() const;
    void unsetDisplayType();
    void setDisplayType(utility::string_t value);
    /// <summary>
    /// Gets/sets Office Math justification.
    /// </summary>
    utility::string_t getJustification() const;
    bool justificationIsSet() const;
    void unsetJustification();
    void setJustification(utility::string_t value);
    /// <summary>
    /// Gets type Aspose.Words.Math.OfficeMath.MathObjectType of this Office Math object.
    /// </summary>
    utility::string_t getMathObjectType() const;
    bool mathObjectTypeIsSet() const;
    void unsetMathObjectType();
    void setMathObjectType(utility::string_t value);

protected:
    std::shared_ptr<StoryChildNodes> m_Content;
    bool m_ContentIsSet;
    utility::string_t m_DisplayType;
    bool m_DisplayTypeIsSet;
    utility::string_t m_Justification;
    bool m_JustificationIsSet;
    utility::string_t m_MathObjectType;
    bool m_MathObjectTypeIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_OfficeMathObject_H_ */
