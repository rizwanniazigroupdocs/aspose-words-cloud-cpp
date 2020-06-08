/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ImageSaveOptionsData.cpp">
*   Copyright (c) 2019 Aspose.Words for Cloud
* </copyright>
* <summary>
*   Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
* 
*  The above copyright notice and this permission notice shall be included in all
*  copies or substantial portions of the Software.
* 
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
*  SOFTWARE.
* </summary> 
-------------------------------------------------------------------------------------------------------------------- **/


#include "ImageSaveOptionsData.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

ImageSaveOptionsData::ImageSaveOptionsData()
{
    m_GraphicsQualityOptionsIsSet = false;
    m_HorizontalResolution = 0.0;
    m_HorizontalResolutionIsSet = false;
    m_ImageBrightness = 0.0;
    m_ImageBrightnessIsSet = false;
    m_ImageColorMode = utility::conversions::to_string_t("");
    m_ImageColorModeIsSet = false;
    m_ImageContrast = 0.0;
    m_ImageContrastIsSet = false;
    m_PaperColor = utility::conversions::to_string_t("");
    m_PaperColorIsSet = false;
    m_PixelFormat = utility::conversions::to_string_t("");
    m_PixelFormatIsSet = false;
    m_Resolution = 0.0;
    m_ResolutionIsSet = false;
    m_Scale = 0.0;
    m_ScaleIsSet = false;
    m_UseAntiAliasing = false;
    m_UseAntiAliasingIsSet = false;
    m_UseGdiEmfRenderer = false;
    m_UseGdiEmfRendererIsSet = false;
    m_UseHighQualityRendering = false;
    m_UseHighQualityRenderingIsSet = false;
    m_VerticalResolution = 0.0;
    m_VerticalResolutionIsSet = false;
}

ImageSaveOptionsData::~ImageSaveOptionsData()
{
}

void ImageSaveOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value ImageSaveOptionsData::toJson() const
{
    web::json::value val = this->FixedPageSaveOptionsData::toJson();

    if(m_GraphicsQualityOptionsIsSet)
    {
        val[_XPLATSTR("GraphicsQualityOptions")] = ModelBase::toJson(m_GraphicsQualityOptions);
    }
    if(m_HorizontalResolutionIsSet)
    {
        val[_XPLATSTR("HorizontalResolution")] = ModelBase::toJson(m_HorizontalResolution);
    }
    if(m_ImageBrightnessIsSet)
    {
        val[_XPLATSTR("ImageBrightness")] = ModelBase::toJson(m_ImageBrightness);
    }
    if(m_ImageColorModeIsSet)
    {
        val[_XPLATSTR("ImageColorMode")] = ModelBase::toJson(m_ImageColorMode);
    }
    if(m_ImageContrastIsSet)
    {
        val[_XPLATSTR("ImageContrast")] = ModelBase::toJson(m_ImageContrast);
    }
    if(m_PaperColorIsSet)
    {
        val[_XPLATSTR("PaperColor")] = ModelBase::toJson(m_PaperColor);
    }
    if(m_PixelFormatIsSet)
    {
        val[_XPLATSTR("PixelFormat")] = ModelBase::toJson(m_PixelFormat);
    }
    if(m_ResolutionIsSet)
    {
        val[_XPLATSTR("Resolution")] = ModelBase::toJson(m_Resolution);
    }
    if(m_ScaleIsSet)
    {
        val[_XPLATSTR("Scale")] = ModelBase::toJson(m_Scale);
    }
    if(m_UseAntiAliasingIsSet)
    {
        val[_XPLATSTR("UseAntiAliasing")] = ModelBase::toJson(m_UseAntiAliasing);
    }
    if(m_UseGdiEmfRendererIsSet)
    {
        val[_XPLATSTR("UseGdiEmfRenderer")] = ModelBase::toJson(m_UseGdiEmfRenderer);
    }
    if(m_UseHighQualityRenderingIsSet)
    {
        val[_XPLATSTR("UseHighQualityRendering")] = ModelBase::toJson(m_UseHighQualityRendering);
    }
    if(m_VerticalResolutionIsSet)
    {
        val[_XPLATSTR("VerticalResolution")] = ModelBase::toJson(m_VerticalResolution);
    }

    return val;
}

void ImageSaveOptionsData::fromJson(web::json::value& val)
{
    this->FixedPageSaveOptionsData::fromJson(val);

    if(val.has_field(_XPLATSTR("GraphicsQualityOptions")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("GraphicsQualityOptions")];
        if(!fieldValue.is_null())
        {
            <DATA_TYPE_START>GraphicsQualityOptionsData<DATA_TYPE_END> newItem(new GraphicsQualityOptionsData());
            newItem->fromJson(fieldValue);
            setGraphicsQualityOptions( newItem );
        }
    }
    if(val.has_field(_XPLATSTR("HorizontalResolution")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("HorizontalResolution")];
        if(!fieldValue.is_null())
        {
            setHorizontalResolution(ModelBase::double?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("ImageBrightness")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("ImageBrightness")];
        if(!fieldValue.is_null())
        {
            setImageBrightness(ModelBase::double?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("ImageColorMode")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("ImageColorMode")];
        if(!fieldValue.is_null())
        {
            setImageColorMode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("ImageContrast")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("ImageContrast")];
        if(!fieldValue.is_null())
        {
            setImageContrast(ModelBase::double?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("PaperColor")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("PaperColor")];
        if(!fieldValue.is_null())
        {
            setPaperColor(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("PixelFormat")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("PixelFormat")];
        if(!fieldValue.is_null())
        {
            setPixelFormat(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("Resolution")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Resolution")];
        if(!fieldValue.is_null())
        {
            setResolution(ModelBase::double?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("Scale")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Scale")];
        if(!fieldValue.is_null())
        {
            setScale(ModelBase::double?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("UseAntiAliasing")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("UseAntiAliasing")];
        if(!fieldValue.is_null())
        {
            setUseAntiAliasing(ModelBase::bool?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("UseGdiEmfRenderer")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("UseGdiEmfRenderer")];
        if(!fieldValue.is_null())
        {
            setUseGdiEmfRenderer(ModelBase::bool?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("UseHighQualityRendering")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("UseHighQualityRendering")];
        if(!fieldValue.is_null())
        {
            setUseHighQualityRendering(ModelBase::bool?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("VerticalResolution")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("VerticalResolution")];
        if(!fieldValue.is_null())
        {
            setVerticalResolution(ModelBase::double?FromJson(fieldValue));
        }
    }
}

void ImageSaveOptionsData::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    FixedPageSaveOptionsData::toMultipart(multipart, prefix);
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    if(m_GraphicsQualityOptionsIsSet)
    {
        if (m_GraphicsQualityOptions.get())
        {
            m_GraphicsQualityOptions->toMultipart(multipart, _XPLATSTR("GraphicsQualityOptions."));
        }
        
    }
    if(m_HorizontalResolutionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("HorizontalResolution"), m_HorizontalResolution));
        
    }
    if(m_ImageBrightnessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("ImageBrightness"), m_ImageBrightness));
        
    }
    if(m_ImageColorModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("ImageColorMode"), m_ImageColorMode));
        
    }
    if(m_ImageContrastIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("ImageContrast"), m_ImageContrast));
        
    }
    if(m_PaperColorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("PaperColor"), m_PaperColor));
        
    }
    if(m_PixelFormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("PixelFormat"), m_PixelFormat));
        
    }
    if(m_ResolutionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Resolution"), m_Resolution));
        
    }
    if(m_ScaleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Scale"), m_Scale));
        
    }
    if(m_UseAntiAliasingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("UseAntiAliasing"), m_UseAntiAliasing));
        
    }
    if(m_UseGdiEmfRendererIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("UseGdiEmfRenderer"), m_UseGdiEmfRenderer));
        
    }
    if(m_UseHighQualityRenderingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("UseHighQualityRendering"), m_UseHighQualityRendering));
        
    }
    if(m_VerticalResolutionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("VerticalResolution"), m_VerticalResolution));
        
    }
}

void ImageSaveOptionsData::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    FixedPageSaveOptionsData::fromMultiPart(multipart, prefix);

    if(multipart->hasContent(_XPLATSTR("GraphicsQualityOptions")))
    {
        if(multipart->hasContent(_XPLATSTR("GraphicsQualityOptions")))
        {
            <DATA_TYPE_START>GraphicsQualityOptionsData<DATA_TYPE_END> newItem(new GraphicsQualityOptionsData());
            newItem->fromMultiPart(multipart, _XPLATSTR("GraphicsQualityOptions."));
            setGraphicsQualityOptions( newItem );
        }
    }
    if(multipart->hasContent(_XPLATSTR("HorizontalResolution")))
    {
        setHorizontalResolution(ModelBase::double?FromHttpContent(multipart->getContent(_XPLATSTR("HorizontalResolution"))));
    }
    if(multipart->hasContent(_XPLATSTR("ImageBrightness")))
    {
        setImageBrightness(ModelBase::double?FromHttpContent(multipart->getContent(_XPLATSTR("ImageBrightness"))));
    }
    if(multipart->hasContent(_XPLATSTR("ImageColorMode")))
    {
        setImageColorMode(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("ImageColorMode"))));
    }
    if(multipart->hasContent(_XPLATSTR("ImageContrast")))
    {
        setImageContrast(ModelBase::double?FromHttpContent(multipart->getContent(_XPLATSTR("ImageContrast"))));
    }
    if(multipart->hasContent(_XPLATSTR("PaperColor")))
    {
        setPaperColor(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("PaperColor"))));
    }
    if(multipart->hasContent(_XPLATSTR("PixelFormat")))
    {
        setPixelFormat(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("PixelFormat"))));
    }
    if(multipart->hasContent(_XPLATSTR("Resolution")))
    {
        setResolution(ModelBase::double?FromHttpContent(multipart->getContent(_XPLATSTR("Resolution"))));
    }
    if(multipart->hasContent(_XPLATSTR("Scale")))
    {
        setScale(ModelBase::double?FromHttpContent(multipart->getContent(_XPLATSTR("Scale"))));
    }
    if(multipart->hasContent(_XPLATSTR("UseAntiAliasing")))
    {
        setUseAntiAliasing(ModelBase::bool?FromHttpContent(multipart->getContent(_XPLATSTR("UseAntiAliasing"))));
    }
    if(multipart->hasContent(_XPLATSTR("UseGdiEmfRenderer")))
    {
        setUseGdiEmfRenderer(ModelBase::bool?FromHttpContent(multipart->getContent(_XPLATSTR("UseGdiEmfRenderer"))));
    }
    if(multipart->hasContent(_XPLATSTR("UseHighQualityRendering")))
    {
        setUseHighQualityRendering(ModelBase::bool?FromHttpContent(multipart->getContent(_XPLATSTR("UseHighQualityRendering"))));
    }
    if(multipart->hasContent(_XPLATSTR("VerticalResolution")))
    {
        setVerticalResolution(ModelBase::double?FromHttpContent(multipart->getContent(_XPLATSTR("VerticalResolution"))));
    }
}

<DATA_TYPE_START>GraphicsQualityOptionsData<DATA_TYPE_END> ImageSaveOptionsData::getGraphicsQualityOptions() const
{
    return m_GraphicsQualityOptions;
}


void ImageSaveOptionsData::setGraphicsQualityOptions(<DATA_TYPE_START>GraphicsQualityOptionsData<DATA_TYPE_END> value)
{
    m_GraphicsQualityOptions = value;
    m_GraphicsQualityOptionsIsSet = true;
}
bool ImageSaveOptionsData::graphicsQualityOptionsIsSet() const
{
    return m_GraphicsQualityOptionsIsSet;
}

void ImageSaveOptionsData::unsetGraphicsQualityOptions()
{
    m_GraphicsQualityOptionsIsSet = false;
}

<DATA_TYPE_START>double?<DATA_TYPE_END> ImageSaveOptionsData::getHorizontalResolution() const
{
    return m_HorizontalResolution;
}


void ImageSaveOptionsData::setHorizontalResolution(<DATA_TYPE_START>double?<DATA_TYPE_END> value)
{
    m_HorizontalResolution = value;
    m_HorizontalResolutionIsSet = true;
}
bool ImageSaveOptionsData::horizontalResolutionIsSet() const
{
    return m_HorizontalResolutionIsSet;
}

void ImageSaveOptionsData::unsetHorizontalResolution()
{
    m_HorizontalResolutionIsSet = false;
}

<DATA_TYPE_START>double?<DATA_TYPE_END> ImageSaveOptionsData::getImageBrightness() const
{
    return m_ImageBrightness;
}


void ImageSaveOptionsData::setImageBrightness(<DATA_TYPE_START>double?<DATA_TYPE_END> value)
{
    m_ImageBrightness = value;
    m_ImageBrightnessIsSet = true;
}
bool ImageSaveOptionsData::imageBrightnessIsSet() const
{
    return m_ImageBrightnessIsSet;
}

void ImageSaveOptionsData::unsetImageBrightness()
{
    m_ImageBrightnessIsSet = false;
}

<DATA_TYPE_START>string<DATA_TYPE_END> ImageSaveOptionsData::getImageColorMode() const
{
    return m_ImageColorMode;
}


void ImageSaveOptionsData::setImageColorMode(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_ImageColorMode = value;
    m_ImageColorModeIsSet = true;
}
bool ImageSaveOptionsData::imageColorModeIsSet() const
{
    return m_ImageColorModeIsSet;
}

void ImageSaveOptionsData::unsetImageColorMode()
{
    m_ImageColorModeIsSet = false;
}

<DATA_TYPE_START>double?<DATA_TYPE_END> ImageSaveOptionsData::getImageContrast() const
{
    return m_ImageContrast;
}


void ImageSaveOptionsData::setImageContrast(<DATA_TYPE_START>double?<DATA_TYPE_END> value)
{
    m_ImageContrast = value;
    m_ImageContrastIsSet = true;
}
bool ImageSaveOptionsData::imageContrastIsSet() const
{
    return m_ImageContrastIsSet;
}

void ImageSaveOptionsData::unsetImageContrast()
{
    m_ImageContrastIsSet = false;
}

<DATA_TYPE_START>string<DATA_TYPE_END> ImageSaveOptionsData::getPaperColor() const
{
    return m_PaperColor;
}


void ImageSaveOptionsData::setPaperColor(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_PaperColor = value;
    m_PaperColorIsSet = true;
}
bool ImageSaveOptionsData::paperColorIsSet() const
{
    return m_PaperColorIsSet;
}

void ImageSaveOptionsData::unsetPaperColor()
{
    m_PaperColorIsSet = false;
}

<DATA_TYPE_START>string<DATA_TYPE_END> ImageSaveOptionsData::getPixelFormat() const
{
    return m_PixelFormat;
}


void ImageSaveOptionsData::setPixelFormat(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_PixelFormat = value;
    m_PixelFormatIsSet = true;
}
bool ImageSaveOptionsData::pixelFormatIsSet() const
{
    return m_PixelFormatIsSet;
}

void ImageSaveOptionsData::unsetPixelFormat()
{
    m_PixelFormatIsSet = false;
}

<DATA_TYPE_START>double?<DATA_TYPE_END> ImageSaveOptionsData::getResolution() const
{
    return m_Resolution;
}


void ImageSaveOptionsData::setResolution(<DATA_TYPE_START>double?<DATA_TYPE_END> value)
{
    m_Resolution = value;
    m_ResolutionIsSet = true;
}
bool ImageSaveOptionsData::resolutionIsSet() const
{
    return m_ResolutionIsSet;
}

void ImageSaveOptionsData::unsetResolution()
{
    m_ResolutionIsSet = false;
}

<DATA_TYPE_START>double?<DATA_TYPE_END> ImageSaveOptionsData::getScale() const
{
    return m_Scale;
}


void ImageSaveOptionsData::setScale(<DATA_TYPE_START>double?<DATA_TYPE_END> value)
{
    m_Scale = value;
    m_ScaleIsSet = true;
}
bool ImageSaveOptionsData::scaleIsSet() const
{
    return m_ScaleIsSet;
}

void ImageSaveOptionsData::unsetScale()
{
    m_ScaleIsSet = false;
}

<DATA_TYPE_START>bool?<DATA_TYPE_END> ImageSaveOptionsData::isUseAntiAliasing() const
{
    return m_UseAntiAliasing;
}


void ImageSaveOptionsData::setUseAntiAliasing(<DATA_TYPE_START>bool?<DATA_TYPE_END> value)
{
    m_UseAntiAliasing = value;
    m_UseAntiAliasingIsSet = true;
}
bool ImageSaveOptionsData::useAntiAliasingIsSet() const
{
    return m_UseAntiAliasingIsSet;
}

void ImageSaveOptionsData::unsetUseAntiAliasing()
{
    m_UseAntiAliasingIsSet = false;
}

<DATA_TYPE_START>bool?<DATA_TYPE_END> ImageSaveOptionsData::isUseGdiEmfRenderer() const
{
    return m_UseGdiEmfRenderer;
}


void ImageSaveOptionsData::setUseGdiEmfRenderer(<DATA_TYPE_START>bool?<DATA_TYPE_END> value)
{
    m_UseGdiEmfRenderer = value;
    m_UseGdiEmfRendererIsSet = true;
}
bool ImageSaveOptionsData::useGdiEmfRendererIsSet() const
{
    return m_UseGdiEmfRendererIsSet;
}

void ImageSaveOptionsData::unsetUseGdiEmfRenderer()
{
    m_UseGdiEmfRendererIsSet = false;
}

<DATA_TYPE_START>bool?<DATA_TYPE_END> ImageSaveOptionsData::isUseHighQualityRendering() const
{
    return m_UseHighQualityRendering;
}


void ImageSaveOptionsData::setUseHighQualityRendering(<DATA_TYPE_START>bool?<DATA_TYPE_END> value)
{
    m_UseHighQualityRendering = value;
    m_UseHighQualityRenderingIsSet = true;
}
bool ImageSaveOptionsData::useHighQualityRenderingIsSet() const
{
    return m_UseHighQualityRenderingIsSet;
}

void ImageSaveOptionsData::unsetUseHighQualityRendering()
{
    m_UseHighQualityRenderingIsSet = false;
}

<DATA_TYPE_START>double?<DATA_TYPE_END> ImageSaveOptionsData::getVerticalResolution() const
{
    return m_VerticalResolution;
}


void ImageSaveOptionsData::setVerticalResolution(<DATA_TYPE_START>double?<DATA_TYPE_END> value)
{
    m_VerticalResolution = value;
    m_VerticalResolutionIsSet = true;
}
bool ImageSaveOptionsData::verticalResolutionIsSet() const
{
    return m_VerticalResolutionIsSet;
}

void ImageSaveOptionsData::unsetVerticalResolution()
{
    m_VerticalResolutionIsSet = false;
}

}
}
}
}
}

