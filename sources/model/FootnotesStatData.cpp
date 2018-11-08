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



#include "FootnotesStatData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

FootnotesStatData::FootnotesStatData()
{
    m_WordCount = 0;
    m_ParagraphCount = 0;
}

FootnotesStatData::~FootnotesStatData()
{
}

void FootnotesStatData::validate()
{
    // TODO: implement validation
}

web::json::value FootnotesStatData::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("WordCount")] = ModelBase::toJson(m_WordCount);
    val[utility::conversions::to_string_t("ParagraphCount")] = ModelBase::toJson(m_ParagraphCount);

    return val;
}

void FootnotesStatData::fromJson(web::json::value& val)
{
    setWordCount(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("WordCount")]));
    setParagraphCount(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("ParagraphCount")]));
}

void FootnotesStatData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("WordCount"), m_WordCount));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ParagraphCount"), m_ParagraphCount));
}

void FootnotesStatData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setWordCount(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("WordCount"))));
    setParagraphCount(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ParagraphCount"))));
}

int32_t FootnotesStatData::getWordCount() const
{
    return m_WordCount;
}


void FootnotesStatData::setWordCount(int32_t value)
{
    m_WordCount = value;
    
}
int32_t FootnotesStatData::getParagraphCount() const
{
    return m_ParagraphCount;
}


void FootnotesStatData::setParagraphCount(int32_t value)
{
    m_ParagraphCount = value;
    
}
}
}
}
}

