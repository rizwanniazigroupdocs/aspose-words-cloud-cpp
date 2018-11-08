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



#include "ClassificationResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ClassificationResponse::ClassificationResponse()
{
    m_BestClassName = utility::conversions::to_string_t("");
    m_BestClassNameIsSet = false;
    m_BestClassProbability = 0.0;
    m_BestClassProbabilityIsSet = false;
    m_BestResultsIsSet = false;
}

ClassificationResponse::~ClassificationResponse()
{
}

void ClassificationResponse::validate()
{
    // TODO: implement validation
}

web::json::value ClassificationResponse::toJson() const
{
    web::json::value val = this->AsposeResponse::toJson();

    if(m_BestClassNameIsSet)
    {
        val[utility::conversions::to_string_t("BestClassName")] = ModelBase::toJson(m_BestClassName);
    }
    if(m_BestClassProbabilityIsSet)
    {
        val[utility::conversions::to_string_t("BestClassProbability")] = ModelBase::toJson(m_BestClassProbability);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_BestResults )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("BestResults")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void ClassificationResponse::fromJson(web::json::value& val)
{
    this->AsposeResponse::fromJson(val);

    if(val.has_field(utility::conversions::to_string_t("BestClassName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("BestClassName")];
        if(!fieldValue.is_null())
        {
            setBestClassName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("BestClassProbability")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("BestClassProbability")];
        if(!fieldValue.is_null())
        {
            setBestClassProbability(ModelBase::doubleFromJson(fieldValue));
        }
    }
    {
        m_BestResults.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("BestResults")))
        {
        for( auto& item : val[utility::conversions::to_string_t("BestResults")].as_array() )
        {
            if(item.is_null())
            {
                m_BestResults.push_back( std::shared_ptr<ClassificationResult>(nullptr) );
            }
            else
            {
                std::shared_ptr<ClassificationResult> newItem(new ClassificationResult());
                newItem->fromJson(item);
                m_BestResults.push_back( newItem );
            }
        }
        }
    }
}

void ClassificationResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_BestClassNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("BestClassName"), m_BestClassName));
        
    }
    if(m_BestClassProbabilityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("BestClassProbability"), m_BestClassProbability));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_BestResults )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("BestResults"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void ClassificationResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("BestClassName")))
    {
        setBestClassName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("BestClassName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("BestClassProbability")))
    {
        setBestClassProbability(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("BestClassProbability"))));
    }
    {
        m_BestResults.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("BestResults")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("BestResults"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_BestResults.push_back( std::shared_ptr<ClassificationResult>(nullptr) );
            }
            else
            {
                std::shared_ptr<ClassificationResult> newItem(new ClassificationResult());
                newItem->fromJson(item);
                m_BestResults.push_back( newItem );
            }
        }
        }
    }
}

utility::string_t ClassificationResponse::getBestClassName() const
{
    return m_BestClassName;
}


void ClassificationResponse::setBestClassName(utility::string_t value)
{
    m_BestClassName = value;
    m_BestClassNameIsSet = true;
}
bool ClassificationResponse::bestClassNameIsSet() const
{
    return m_BestClassNameIsSet;
}

void ClassificationResponse::unsetBestClassName()
{
    m_BestClassNameIsSet = false;
}

double ClassificationResponse::getBestClassProbability() const
{
    return m_BestClassProbability;
}


void ClassificationResponse::setBestClassProbability(double value)
{
    m_BestClassProbability = value;
    m_BestClassProbabilityIsSet = true;
}
bool ClassificationResponse::bestClassProbabilityIsSet() const
{
    return m_BestClassProbabilityIsSet;
}

void ClassificationResponse::unsetBestClassProbability()
{
    m_BestClassProbabilityIsSet = false;
}

std::vector<std::shared_ptr<ClassificationResult>>& ClassificationResponse::getBestResults()
{
    return m_BestResults;
}

void ClassificationResponse::setBestResults(std::vector<std::shared_ptr<ClassificationResult>> value)
{
    m_BestResults = value;
    m_BestResultsIsSet = true;
}
bool ClassificationResponse::bestResultsIsSet() const
{
    return m_BestResultsIsSet;
}

void ClassificationResponse::unsetBestResults()
{
    m_BestResultsIsSet = false;
}

}
}
}
}

