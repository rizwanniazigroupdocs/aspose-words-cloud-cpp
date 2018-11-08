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



#include "MetafileRenderingOptionsData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

MetafileRenderingOptionsData::MetafileRenderingOptionsData()
{
    m_EmfPlusDualRenderingMode = utility::conversions::to_string_t("");
    m_EmfPlusDualRenderingModeIsSet = false;
    m_EmulateRasterOperations = false;
    m_EmulateRasterOperationsIsSet = false;
    m_RenderingMode = utility::conversions::to_string_t("");
    m_RenderingModeIsSet = false;
    m_UseEmfEmbeddedToWmf = false;
    m_UseEmfEmbeddedToWmfIsSet = false;
}

MetafileRenderingOptionsData::~MetafileRenderingOptionsData()
{
}

void MetafileRenderingOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value MetafileRenderingOptionsData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_EmfPlusDualRenderingModeIsSet)
    {
        val[utility::conversions::to_string_t("EmfPlusDualRenderingMode")] = ModelBase::toJson(m_EmfPlusDualRenderingMode);
    }
    if(m_EmulateRasterOperationsIsSet)
    {
        val[utility::conversions::to_string_t("EmulateRasterOperations")] = ModelBase::toJson(m_EmulateRasterOperations);
    }
    if(m_RenderingModeIsSet)
    {
        val[utility::conversions::to_string_t("RenderingMode")] = ModelBase::toJson(m_RenderingMode);
    }
    if(m_UseEmfEmbeddedToWmfIsSet)
    {
        val[utility::conversions::to_string_t("UseEmfEmbeddedToWmf")] = ModelBase::toJson(m_UseEmfEmbeddedToWmf);
    }

    return val;
}

void MetafileRenderingOptionsData::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("EmfPlusDualRenderingMode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("EmfPlusDualRenderingMode")];
        if(!fieldValue.is_null())
        {
            setEmfPlusDualRenderingMode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("EmulateRasterOperations")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("EmulateRasterOperations")];
        if(!fieldValue.is_null())
        {
            setEmulateRasterOperations(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("RenderingMode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("RenderingMode")];
        if(!fieldValue.is_null())
        {
            setRenderingMode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("UseEmfEmbeddedToWmf")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("UseEmfEmbeddedToWmf")];
        if(!fieldValue.is_null())
        {
            setUseEmfEmbeddedToWmf(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void MetafileRenderingOptionsData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_EmfPlusDualRenderingModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("EmfPlusDualRenderingMode"), m_EmfPlusDualRenderingMode));
        
    }
    if(m_EmulateRasterOperationsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("EmulateRasterOperations"), m_EmulateRasterOperations));
    }
    if(m_RenderingModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("RenderingMode"), m_RenderingMode));
        
    }
    if(m_UseEmfEmbeddedToWmfIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("UseEmfEmbeddedToWmf"), m_UseEmfEmbeddedToWmf));
    }
}

void MetafileRenderingOptionsData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("EmfPlusDualRenderingMode")))
    {
        setEmfPlusDualRenderingMode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("EmfPlusDualRenderingMode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("EmulateRasterOperations")))
    {
        setEmulateRasterOperations(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("EmulateRasterOperations"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("RenderingMode")))
    {
        setRenderingMode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("RenderingMode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("UseEmfEmbeddedToWmf")))
    {
        setUseEmfEmbeddedToWmf(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("UseEmfEmbeddedToWmf"))));
    }
}

utility::string_t MetafileRenderingOptionsData::getEmfPlusDualRenderingMode() const
{
    return m_EmfPlusDualRenderingMode;
}


void MetafileRenderingOptionsData::setEmfPlusDualRenderingMode(utility::string_t value)
{
    m_EmfPlusDualRenderingMode = value;
    m_EmfPlusDualRenderingModeIsSet = true;
}
bool MetafileRenderingOptionsData::emfPlusDualRenderingModeIsSet() const
{
    return m_EmfPlusDualRenderingModeIsSet;
}

void MetafileRenderingOptionsData::unsetEmfPlusDualRenderingMode()
{
    m_EmfPlusDualRenderingModeIsSet = false;
}

bool MetafileRenderingOptionsData::isEmulateRasterOperations() const
{
    return m_EmulateRasterOperations;
}


void MetafileRenderingOptionsData::setEmulateRasterOperations(bool value)
{
    m_EmulateRasterOperations = value;
    m_EmulateRasterOperationsIsSet = true;
}
bool MetafileRenderingOptionsData::emulateRasterOperationsIsSet() const
{
    return m_EmulateRasterOperationsIsSet;
}

void MetafileRenderingOptionsData::unsetEmulateRasterOperations()
{
    m_EmulateRasterOperationsIsSet = false;
}

utility::string_t MetafileRenderingOptionsData::getRenderingMode() const
{
    return m_RenderingMode;
}


void MetafileRenderingOptionsData::setRenderingMode(utility::string_t value)
{
    m_RenderingMode = value;
    m_RenderingModeIsSet = true;
}
bool MetafileRenderingOptionsData::renderingModeIsSet() const
{
    return m_RenderingModeIsSet;
}

void MetafileRenderingOptionsData::unsetRenderingMode()
{
    m_RenderingModeIsSet = false;
}

bool MetafileRenderingOptionsData::isUseEmfEmbeddedToWmf() const
{
    return m_UseEmfEmbeddedToWmf;
}


void MetafileRenderingOptionsData::setUseEmfEmbeddedToWmf(bool value)
{
    m_UseEmfEmbeddedToWmf = value;
    m_UseEmfEmbeddedToWmfIsSet = true;
}
bool MetafileRenderingOptionsData::useEmfEmbeddedToWmfIsSet() const
{
    return m_UseEmfEmbeddedToWmfIsSet;
}

void MetafileRenderingOptionsData::unsetUseEmfEmbeddedToWmf()
{
    m_UseEmfEmbeddedToWmfIsSet = false;
}

}
}
}
}

