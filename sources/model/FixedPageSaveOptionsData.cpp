/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="FixedPageSaveOptionsData.cpp">
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


#include "FixedPageSaveOptionsData.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

FixedPageSaveOptionsData::FixedPageSaveOptionsData()
{
    m_ColorMode = utility::conversions::to_string_t("");
    m_ColorModeIsSet = false;
    m_JpegQuality = 0;
    m_JpegQualityIsSet = false;
    m_MetafileRenderingOptionsIsSet = false;
    m_NumeralFormat = utility::conversions::to_string_t("");
    m_NumeralFormatIsSet = false;
    m_OptimizeOutput = false;
    m_OptimizeOutputIsSet = false;
    m_PageCount = 0;
    m_PageCountIsSet = false;
    m_PageIndex = 0;
    m_PageIndexIsSet = false;
}

FixedPageSaveOptionsData::~FixedPageSaveOptionsData()
{
}

void FixedPageSaveOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value FixedPageSaveOptionsData::toJson() const
{
    web::json::value val = this->SaveOptionsData::toJson();

    if(m_ColorModeIsSet)
    {
        val[_XPLATSTR("ColorMode")] = ModelBase::toJson(m_ColorMode);
    }
    if(m_JpegQualityIsSet)
    {
        val[_XPLATSTR("JpegQuality")] = ModelBase::toJson(m_JpegQuality);
    }
    if(m_MetafileRenderingOptionsIsSet)
    {
        val[_XPLATSTR("MetafileRenderingOptions")] = ModelBase::toJson(m_MetafileRenderingOptions);
    }
    if(m_NumeralFormatIsSet)
    {
        val[_XPLATSTR("NumeralFormat")] = ModelBase::toJson(m_NumeralFormat);
    }
    if(m_OptimizeOutputIsSet)
    {
        val[_XPLATSTR("OptimizeOutput")] = ModelBase::toJson(m_OptimizeOutput);
    }
    if(m_PageCountIsSet)
    {
        val[_XPLATSTR("PageCount")] = ModelBase::toJson(m_PageCount);
    }
    if(m_PageIndexIsSet)
    {
        val[_XPLATSTR("PageIndex")] = ModelBase::toJson(m_PageIndex);
    }

    return val;
}

void FixedPageSaveOptionsData::fromJson(web::json::value& val)
{
    this->SaveOptionsData::fromJson(val);

    if(val.has_field(_XPLATSTR("ColorMode")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("ColorMode")];
        if(!fieldValue.is_null())
        {
            setColorMode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("JpegQuality")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("JpegQuality")];
        if(!fieldValue.is_null())
        {
            setJpegQuality(ModelBase::int?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("MetafileRenderingOptions")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("MetafileRenderingOptions")];
        if(!fieldValue.is_null())
        {
            <DATA_TYPE_START>MetafileRenderingOptionsData<DATA_TYPE_END> newItem(new MetafileRenderingOptionsData());
            newItem->fromJson(fieldValue);
            setMetafileRenderingOptions( newItem );
        }
    }
    if(val.has_field(_XPLATSTR("NumeralFormat")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("NumeralFormat")];
        if(!fieldValue.is_null())
        {
            setNumeralFormat(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("OptimizeOutput")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("OptimizeOutput")];
        if(!fieldValue.is_null())
        {
            setOptimizeOutput(ModelBase::bool?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("PageCount")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("PageCount")];
        if(!fieldValue.is_null())
        {
            setPageCount(ModelBase::int?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("PageIndex")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("PageIndex")];
        if(!fieldValue.is_null())
        {
            setPageIndex(ModelBase::int?FromJson(fieldValue));
        }
    }
}

void FixedPageSaveOptionsData::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    SaveOptionsData::toMultipart(multipart, prefix);
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    if(m_ColorModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("ColorMode"), m_ColorMode));
        
    }
    if(m_JpegQualityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("JpegQuality"), m_JpegQuality));
        
    }
    if(m_MetafileRenderingOptionsIsSet)
    {
        if (m_MetafileRenderingOptions.get())
        {
            m_MetafileRenderingOptions->toMultipart(multipart, _XPLATSTR("MetafileRenderingOptions."));
        }
        
    }
    if(m_NumeralFormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("NumeralFormat"), m_NumeralFormat));
        
    }
    if(m_OptimizeOutputIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("OptimizeOutput"), m_OptimizeOutput));
        
    }
    if(m_PageCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("PageCount"), m_PageCount));
        
    }
    if(m_PageIndexIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("PageIndex"), m_PageIndex));
        
    }
}

void FixedPageSaveOptionsData::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    SaveOptionsData::fromMultiPart(multipart, prefix);

    if(multipart->hasContent(_XPLATSTR("ColorMode")))
    {
        setColorMode(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("ColorMode"))));
    }
    if(multipart->hasContent(_XPLATSTR("JpegQuality")))
    {
        setJpegQuality(ModelBase::int?FromHttpContent(multipart->getContent(_XPLATSTR("JpegQuality"))));
    }
    if(multipart->hasContent(_XPLATSTR("MetafileRenderingOptions")))
    {
        if(multipart->hasContent(_XPLATSTR("MetafileRenderingOptions")))
        {
            <DATA_TYPE_START>MetafileRenderingOptionsData<DATA_TYPE_END> newItem(new MetafileRenderingOptionsData());
            newItem->fromMultiPart(multipart, _XPLATSTR("MetafileRenderingOptions."));
            setMetafileRenderingOptions( newItem );
        }
    }
    if(multipart->hasContent(_XPLATSTR("NumeralFormat")))
    {
        setNumeralFormat(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("NumeralFormat"))));
    }
    if(multipart->hasContent(_XPLATSTR("OptimizeOutput")))
    {
        setOptimizeOutput(ModelBase::bool?FromHttpContent(multipart->getContent(_XPLATSTR("OptimizeOutput"))));
    }
    if(multipart->hasContent(_XPLATSTR("PageCount")))
    {
        setPageCount(ModelBase::int?FromHttpContent(multipart->getContent(_XPLATSTR("PageCount"))));
    }
    if(multipart->hasContent(_XPLATSTR("PageIndex")))
    {
        setPageIndex(ModelBase::int?FromHttpContent(multipart->getContent(_XPLATSTR("PageIndex"))));
    }
}

<DATA_TYPE_START>string<DATA_TYPE_END> FixedPageSaveOptionsData::getColorMode() const
{
    return m_ColorMode;
}


void FixedPageSaveOptionsData::setColorMode(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_ColorMode = value;
    m_ColorModeIsSet = true;
}
bool FixedPageSaveOptionsData::colorModeIsSet() const
{
    return m_ColorModeIsSet;
}

void FixedPageSaveOptionsData::unsetColorMode()
{
    m_ColorModeIsSet = false;
}

<DATA_TYPE_START>int?<DATA_TYPE_END> FixedPageSaveOptionsData::getJpegQuality() const
{
    return m_JpegQuality;
}


void FixedPageSaveOptionsData::setJpegQuality(<DATA_TYPE_START>int?<DATA_TYPE_END> value)
{
    m_JpegQuality = value;
    m_JpegQualityIsSet = true;
}
bool FixedPageSaveOptionsData::jpegQualityIsSet() const
{
    return m_JpegQualityIsSet;
}

void FixedPageSaveOptionsData::unsetJpegQuality()
{
    m_JpegQualityIsSet = false;
}

<DATA_TYPE_START>MetafileRenderingOptionsData<DATA_TYPE_END> FixedPageSaveOptionsData::getMetafileRenderingOptions() const
{
    return m_MetafileRenderingOptions;
}


void FixedPageSaveOptionsData::setMetafileRenderingOptions(<DATA_TYPE_START>MetafileRenderingOptionsData<DATA_TYPE_END> value)
{
    m_MetafileRenderingOptions = value;
    m_MetafileRenderingOptionsIsSet = true;
}
bool FixedPageSaveOptionsData::metafileRenderingOptionsIsSet() const
{
    return m_MetafileRenderingOptionsIsSet;
}

void FixedPageSaveOptionsData::unsetMetafileRenderingOptions()
{
    m_MetafileRenderingOptionsIsSet = false;
}

<DATA_TYPE_START>string<DATA_TYPE_END> FixedPageSaveOptionsData::getNumeralFormat() const
{
    return m_NumeralFormat;
}


void FixedPageSaveOptionsData::setNumeralFormat(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_NumeralFormat = value;
    m_NumeralFormatIsSet = true;
}
bool FixedPageSaveOptionsData::numeralFormatIsSet() const
{
    return m_NumeralFormatIsSet;
}

void FixedPageSaveOptionsData::unsetNumeralFormat()
{
    m_NumeralFormatIsSet = false;
}

<DATA_TYPE_START>bool?<DATA_TYPE_END> FixedPageSaveOptionsData::isOptimizeOutput() const
{
    return m_OptimizeOutput;
}


void FixedPageSaveOptionsData::setOptimizeOutput(<DATA_TYPE_START>bool?<DATA_TYPE_END> value)
{
    m_OptimizeOutput = value;
    m_OptimizeOutputIsSet = true;
}
bool FixedPageSaveOptionsData::optimizeOutputIsSet() const
{
    return m_OptimizeOutputIsSet;
}

void FixedPageSaveOptionsData::unsetOptimizeOutput()
{
    m_OptimizeOutputIsSet = false;
}

<DATA_TYPE_START>int?<DATA_TYPE_END> FixedPageSaveOptionsData::getPageCount() const
{
    return m_PageCount;
}


void FixedPageSaveOptionsData::setPageCount(<DATA_TYPE_START>int?<DATA_TYPE_END> value)
{
    m_PageCount = value;
    m_PageCountIsSet = true;
}
bool FixedPageSaveOptionsData::pageCountIsSet() const
{
    return m_PageCountIsSet;
}

void FixedPageSaveOptionsData::unsetPageCount()
{
    m_PageCountIsSet = false;
}

<DATA_TYPE_START>int?<DATA_TYPE_END> FixedPageSaveOptionsData::getPageIndex() const
{
    return m_PageIndex;
}


void FixedPageSaveOptionsData::setPageIndex(<DATA_TYPE_START>int?<DATA_TYPE_END> value)
{
    m_PageIndex = value;
    m_PageIndexIsSet = true;
}
bool FixedPageSaveOptionsData::pageIndexIsSet() const
{
    return m_PageIndexIsSet;
}

void FixedPageSaveOptionsData::unsetPageIndex()
{
    m_PageIndexIsSet = false;
}

}
}
}
}
}

