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



#include "WordsApiErrorResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

WordsApiErrorResponse::WordsApiErrorResponse()
{
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
}

WordsApiErrorResponse::~WordsApiErrorResponse()
{
}

void WordsApiErrorResponse::validate()
{
    // TODO: implement validation
}

web::json::value WordsApiErrorResponse::toJson() const
{
    web::json::value val = this->AsposeResponse::toJson();

    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t("Message")] = ModelBase::toJson(m_Message);
    }

    return val;
}

void WordsApiErrorResponse::fromJson(web::json::value& val)
{
    this->AsposeResponse::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("Message")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Message")];
        if(!fieldValue.is_null())
        {
            setMessage(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void WordsApiErrorResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Code"), m_Code));
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Status"), m_Status));
        
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Message"), m_Message));
        
    }
}

void WordsApiErrorResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setCode(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Code"))));
    if(multipart->hasContent(utility::conversions::to_string_t("Status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Status"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Message")))
    {
        setMessage(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Message"))));
    }
}

utility::string_t WordsApiErrorResponse::getMessage() const
{
    return m_Message;
}


void WordsApiErrorResponse::setMessage(utility::string_t value)
{
    m_Message = value;
    m_MessageIsSet = true;
}
bool WordsApiErrorResponse::messageIsSet() const
{
    return m_MessageIsSet;
}

void WordsApiErrorResponse::unsetMessage()
{
    m_MessageIsSet = false;
}

}
}
}
}

