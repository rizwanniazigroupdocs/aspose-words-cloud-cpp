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



#include "GraphicsQualityOptionsData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GraphicsQualityOptionsData::GraphicsQualityOptionsData()
{
    m_CompositingMode = utility::conversions::to_string_t("");
    m_CompositingModeIsSet = false;
    m_CompositingQuality = utility::conversions::to_string_t("");
    m_CompositingQualityIsSet = false;
    m_InterpolationMode = utility::conversions::to_string_t("");
    m_InterpolationModeIsSet = false;
    m_SmoothingMode = utility::conversions::to_string_t("");
    m_SmoothingModeIsSet = false;
    m_StringFormatIsSet = false;
    m_TextRenderingHint = utility::conversions::to_string_t("");
    m_TextRenderingHintIsSet = false;
}

GraphicsQualityOptionsData::~GraphicsQualityOptionsData()
{
}

void GraphicsQualityOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value GraphicsQualityOptionsData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CompositingModeIsSet)
    {
        val[utility::conversions::to_string_t("CompositingMode")] = ModelBase::toJson(m_CompositingMode);
    }
    if(m_CompositingQualityIsSet)
    {
        val[utility::conversions::to_string_t("CompositingQuality")] = ModelBase::toJson(m_CompositingQuality);
    }
    if(m_InterpolationModeIsSet)
    {
        val[utility::conversions::to_string_t("InterpolationMode")] = ModelBase::toJson(m_InterpolationMode);
    }
    if(m_SmoothingModeIsSet)
    {
        val[utility::conversions::to_string_t("SmoothingMode")] = ModelBase::toJson(m_SmoothingMode);
    }
    if(m_StringFormatIsSet)
    {
        val[utility::conversions::to_string_t("StringFormat")] = ModelBase::toJson(m_StringFormat);
    }
    if(m_TextRenderingHintIsSet)
    {
        val[utility::conversions::to_string_t("TextRenderingHint")] = ModelBase::toJson(m_TextRenderingHint);
    }

    return val;
}

void GraphicsQualityOptionsData::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("CompositingMode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CompositingMode")];
        if(!fieldValue.is_null())
        {
            setCompositingMode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("CompositingQuality")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CompositingQuality")];
        if(!fieldValue.is_null())
        {
            setCompositingQuality(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("InterpolationMode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("InterpolationMode")];
        if(!fieldValue.is_null())
        {
            setInterpolationMode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("SmoothingMode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("SmoothingMode")];
        if(!fieldValue.is_null())
        {
            setSmoothingMode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("StringFormat")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("StringFormat")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<StringFormatData> newItem(new StringFormatData());
            newItem->fromJson(fieldValue);
            setStringFormat( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("TextRenderingHint")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TextRenderingHint")];
        if(!fieldValue.is_null())
        {
            setTextRenderingHint(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void GraphicsQualityOptionsData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_CompositingModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CompositingMode"), m_CompositingMode));
        
    }
    if(m_CompositingQualityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CompositingQuality"), m_CompositingQuality));
        
    }
    if(m_InterpolationModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("InterpolationMode"), m_InterpolationMode));
        
    }
    if(m_SmoothingModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("SmoothingMode"), m_SmoothingMode));
        
    }
    if(m_StringFormatIsSet)
    {
        if (m_StringFormat.get())
        {
            m_StringFormat->toMultipart(multipart, utility::conversions::to_string_t("StringFormat."));
        }
        
    }
    if(m_TextRenderingHintIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TextRenderingHint"), m_TextRenderingHint));
        
    }
}

void GraphicsQualityOptionsData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("CompositingMode")))
    {
        setCompositingMode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CompositingMode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("CompositingQuality")))
    {
        setCompositingQuality(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CompositingQuality"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("InterpolationMode")))
    {
        setInterpolationMode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("InterpolationMode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("SmoothingMode")))
    {
        setSmoothingMode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("SmoothingMode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("StringFormat")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("StringFormat")))
        {
            std::shared_ptr<StringFormatData> newItem(new StringFormatData());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("StringFormat."));
            setStringFormat( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("TextRenderingHint")))
    {
        setTextRenderingHint(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TextRenderingHint"))));
    }
}

utility::string_t GraphicsQualityOptionsData::getCompositingMode() const
{
    return m_CompositingMode;
}


void GraphicsQualityOptionsData::setCompositingMode(utility::string_t value)
{
    m_CompositingMode = value;
    m_CompositingModeIsSet = true;
}
bool GraphicsQualityOptionsData::compositingModeIsSet() const
{
    return m_CompositingModeIsSet;
}

void GraphicsQualityOptionsData::unsetCompositingMode()
{
    m_CompositingModeIsSet = false;
}

utility::string_t GraphicsQualityOptionsData::getCompositingQuality() const
{
    return m_CompositingQuality;
}


void GraphicsQualityOptionsData::setCompositingQuality(utility::string_t value)
{
    m_CompositingQuality = value;
    m_CompositingQualityIsSet = true;
}
bool GraphicsQualityOptionsData::compositingQualityIsSet() const
{
    return m_CompositingQualityIsSet;
}

void GraphicsQualityOptionsData::unsetCompositingQuality()
{
    m_CompositingQualityIsSet = false;
}

utility::string_t GraphicsQualityOptionsData::getInterpolationMode() const
{
    return m_InterpolationMode;
}


void GraphicsQualityOptionsData::setInterpolationMode(utility::string_t value)
{
    m_InterpolationMode = value;
    m_InterpolationModeIsSet = true;
}
bool GraphicsQualityOptionsData::interpolationModeIsSet() const
{
    return m_InterpolationModeIsSet;
}

void GraphicsQualityOptionsData::unsetInterpolationMode()
{
    m_InterpolationModeIsSet = false;
}

utility::string_t GraphicsQualityOptionsData::getSmoothingMode() const
{
    return m_SmoothingMode;
}


void GraphicsQualityOptionsData::setSmoothingMode(utility::string_t value)
{
    m_SmoothingMode = value;
    m_SmoothingModeIsSet = true;
}
bool GraphicsQualityOptionsData::smoothingModeIsSet() const
{
    return m_SmoothingModeIsSet;
}

void GraphicsQualityOptionsData::unsetSmoothingMode()
{
    m_SmoothingModeIsSet = false;
}

std::shared_ptr<StringFormatData> GraphicsQualityOptionsData::getStringFormat() const
{
    return m_StringFormat;
}


void GraphicsQualityOptionsData::setStringFormat(std::shared_ptr<StringFormatData> value)
{
    m_StringFormat = value;
    m_StringFormatIsSet = true;
}
bool GraphicsQualityOptionsData::stringFormatIsSet() const
{
    return m_StringFormatIsSet;
}

void GraphicsQualityOptionsData::unsetStringFormat()
{
    m_StringFormatIsSet = false;
}

utility::string_t GraphicsQualityOptionsData::getTextRenderingHint() const
{
    return m_TextRenderingHint;
}


void GraphicsQualityOptionsData::setTextRenderingHint(utility::string_t value)
{
    m_TextRenderingHint = value;
    m_TextRenderingHintIsSet = true;
}
bool GraphicsQualityOptionsData::textRenderingHintIsSet() const
{
    return m_TextRenderingHintIsSet;
}

void GraphicsQualityOptionsData::unsetTextRenderingHint()
{
    m_TextRenderingHintIsSet = false;
}

}
}
}
}

