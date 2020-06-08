/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="DrawingObject.cpp">
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


#include "DrawingObject.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

DrawingObject::DrawingObject()
{
    m_Height = 0.0;
    m_HeightIsSet = false;
    m_ImageDataLinkIsSet = false;
    m_Left = 0.0;
    m_LeftIsSet = false;
    m_OleDataLinkIsSet = false;
    m_RelativeHorizontalPosition = utility::conversions::to_string_t("");
    m_RelativeHorizontalPositionIsSet = false;
    m_RelativeVerticalPosition = utility::conversions::to_string_t("");
    m_RelativeVerticalPositionIsSet = false;
    m_RenderLinksIsSet = false;
    m_Top = 0.0;
    m_TopIsSet = false;
    m_Width = 0.0;
    m_WidthIsSet = false;
    m_WrapType = utility::conversions::to_string_t("");
    m_WrapTypeIsSet = false;
}

DrawingObject::~DrawingObject()
{
}

void DrawingObject::validate()
{
    // TODO: implement validation
}

web::json::value DrawingObject::toJson() const
{
    web::json::value val = this->DrawingObjectLink::toJson();

    if(m_HeightIsSet)
    {
        val[_XPLATSTR("Height")] = ModelBase::toJson(m_Height);
    }
    if(m_ImageDataLinkIsSet)
    {
        val[_XPLATSTR("ImageDataLink")] = ModelBase::toJson(m_ImageDataLink);
    }
    if(m_LeftIsSet)
    {
        val[_XPLATSTR("Left")] = ModelBase::toJson(m_Left);
    }
    if(m_OleDataLinkIsSet)
    {
        val[_XPLATSTR("OleDataLink")] = ModelBase::toJson(m_OleDataLink);
    }
    if(m_RelativeHorizontalPositionIsSet)
    {
        val[_XPLATSTR("RelativeHorizontalPosition")] = ModelBase::toJson(m_RelativeHorizontalPosition);
    }
    if(m_RelativeVerticalPositionIsSet)
    {
        val[_XPLATSTR("RelativeVerticalPosition")] = ModelBase::toJson(m_RelativeVerticalPosition);
    }
    {
        std::vector<web::json::value> jsonArray;
        std::transform(m_RenderLinks.begin(), m_RenderLinks.end(), std::back_inserter(jsonArray),
			[&](<DATA_TYPE_START>WordsApiLink<DATA_TYPE_END> item) {
			return ModelBase::toJson(item);
		});
        
        if(jsonArray.size() > 0)
        {
            val[_XPLATSTR("RenderLinks")] = web::json::value::array(jsonArray);
        }
    }
    if(m_TopIsSet)
    {
        val[_XPLATSTR("Top")] = ModelBase::toJson(m_Top);
    }
    if(m_WidthIsSet)
    {
        val[_XPLATSTR("Width")] = ModelBase::toJson(m_Width);
    }
    if(m_WrapTypeIsSet)
    {
        val[_XPLATSTR("WrapType")] = ModelBase::toJson(m_WrapType);
    }

    return val;
}

void DrawingObject::fromJson(web::json::value& val)
{
    this->DrawingObjectLink::fromJson(val);

    if(val.has_field(_XPLATSTR("Height")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Height")];
        if(!fieldValue.is_null())
        {
            setHeight(ModelBase::double?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("ImageDataLink")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("ImageDataLink")];
        if(!fieldValue.is_null())
        {
            <DATA_TYPE_START>WordsApiLink<DATA_TYPE_END> newItem(new WordsApiLink());
            newItem->fromJson(fieldValue);
            setImageDataLink( newItem );
        }
    }
    if(val.has_field(_XPLATSTR("Left")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Left")];
        if(!fieldValue.is_null())
        {
            setLeft(ModelBase::double?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("OleDataLink")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("OleDataLink")];
        if(!fieldValue.is_null())
        {
            <DATA_TYPE_START>WordsApiLink<DATA_TYPE_END> newItem(new WordsApiLink());
            newItem->fromJson(fieldValue);
            setOleDataLink( newItem );
        }
    }
    if(val.has_field(_XPLATSTR("RelativeHorizontalPosition")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("RelativeHorizontalPosition")];
        if(!fieldValue.is_null())
        {
            setRelativeHorizontalPosition(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("RelativeVerticalPosition")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("RelativeVerticalPosition")];
        if(!fieldValue.is_null())
        {
            setRelativeVerticalPosition(ModelBase::stringFromJson(fieldValue));
        }
    }
    {
        m_RenderLinks.clear();
        if(val.has_field(_XPLATSTR("RenderLinks")) 
                            && !val[_XPLATSTR("RenderLinks")].is_null())
        {
        auto arr = val[_XPLATSTR("RenderLinks")].as_array();
        std::transform(arr.begin(), arr.end(), std::back_inserter(m_RenderLinks), [&](web::json::value& item){
            if(item.is_null())
            {
                return <DATA_TYPE_START>WordsApiLink<DATA_TYPE_END>(nullptr);
            }
            else
            {
                <DATA_TYPE_START>WordsApiLink<DATA_TYPE_END> newItem(new WordsApiLink());
                newItem->fromJson(item);
                return newItem;
            }
        });

        }
    }
    if(val.has_field(_XPLATSTR("Top")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Top")];
        if(!fieldValue.is_null())
        {
            setTop(ModelBase::double?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("Width")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Width")];
        if(!fieldValue.is_null())
        {
            setWidth(ModelBase::double?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("WrapType")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("WrapType")];
        if(!fieldValue.is_null())
        {
            setWrapType(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void DrawingObject::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    DrawingObjectLink::toMultipart(multipart, prefix);
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    if(m_HeightIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Height"), m_Height));
        
    }
    if(m_ImageDataLinkIsSet)
    {
        if (m_ImageDataLink.get())
        {
            m_ImageDataLink->toMultipart(multipart, _XPLATSTR("ImageDataLink."));
        }
        
    }
    if(m_LeftIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Left"), m_Left));
        
    }
    if(m_OleDataLinkIsSet)
    {
        if (m_OleDataLink.get())
        {
            m_OleDataLink->toMultipart(multipart, _XPLATSTR("OleDataLink."));
        }
        
    }
    if(m_RelativeHorizontalPositionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("RelativeHorizontalPosition"), m_RelativeHorizontalPosition));
        
    }
    if(m_RelativeVerticalPositionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("RelativeVerticalPosition"), m_RelativeVerticalPosition));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        std::transform(m_RenderLinks.begin(), m_RenderLinks.end(), std::back_inserter(jsonArray), [&](<DATA_TYPE_START>WordsApiLink<DATA_TYPE_END> item){
            return ModelBase::toJson(item);
        });
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("RenderLinks"), web::json::value::array(jsonArray), _XPLATSTR("application/json")));
        }
    }
    if(m_TopIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Top"), m_Top));
        
    }
    if(m_WidthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Width"), m_Width));
        
    }
    if(m_WrapTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("WrapType"), m_WrapType));
        
    }
}

void DrawingObject::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    DrawingObjectLink::fromMultiPart(multipart, prefix);

    if(multipart->hasContent(_XPLATSTR("Height")))
    {
        setHeight(ModelBase::double?FromHttpContent(multipart->getContent(_XPLATSTR("Height"))));
    }
    if(multipart->hasContent(_XPLATSTR("ImageDataLink")))
    {
        if(multipart->hasContent(_XPLATSTR("ImageDataLink")))
        {
            <DATA_TYPE_START>WordsApiLink<DATA_TYPE_END> newItem(new WordsApiLink());
            newItem->fromMultiPart(multipart, _XPLATSTR("ImageDataLink."));
            setImageDataLink( newItem );
        }
    }
    if(multipart->hasContent(_XPLATSTR("Left")))
    {
        setLeft(ModelBase::double?FromHttpContent(multipart->getContent(_XPLATSTR("Left"))));
    }
    if(multipart->hasContent(_XPLATSTR("OleDataLink")))
    {
        if(multipart->hasContent(_XPLATSTR("OleDataLink")))
        {
            <DATA_TYPE_START>WordsApiLink<DATA_TYPE_END> newItem(new WordsApiLink());
            newItem->fromMultiPart(multipart, _XPLATSTR("OleDataLink."));
            setOleDataLink( newItem );
        }
    }
    if(multipart->hasContent(_XPLATSTR("RelativeHorizontalPosition")))
    {
        setRelativeHorizontalPosition(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("RelativeHorizontalPosition"))));
    }
    if(multipart->hasContent(_XPLATSTR("RelativeVerticalPosition")))
    {
        setRelativeVerticalPosition(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("RelativeVerticalPosition"))));
    }
    {
        m_RenderLinks.clear();
        if(multipart->hasContent(_XPLATSTR("RenderLinks")))
        {

        web::json::array jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("RenderLinks")))).as_array();
        std::transform(jsonArray.begin(), jsonArray.end(), std::back_inserter(m_RenderLinks), [&](web::json::value item) {
            if(item.is_null())
            {
                return <DATA_TYPE_START>WordsApiLink<DATA_TYPE_END>(nullptr) ;
            }
            else
            {
                <DATA_TYPE_START>WordsApiLink<DATA_TYPE_END> newItem(new WordsApiLink());
                newItem->fromJson(item);
                return newItem ;
            }
        });
        }
    }
    if(multipart->hasContent(_XPLATSTR("Top")))
    {
        setTop(ModelBase::double?FromHttpContent(multipart->getContent(_XPLATSTR("Top"))));
    }
    if(multipart->hasContent(_XPLATSTR("Width")))
    {
        setWidth(ModelBase::double?FromHttpContent(multipart->getContent(_XPLATSTR("Width"))));
    }
    if(multipart->hasContent(_XPLATSTR("WrapType")))
    {
        setWrapType(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("WrapType"))));
    }
}

<DATA_TYPE_START>double?<DATA_TYPE_END> DrawingObject::getHeight() const
{
    return m_Height;
}


void DrawingObject::setHeight(<DATA_TYPE_START>double?<DATA_TYPE_END> value)
{
    m_Height = value;
    m_HeightIsSet = true;
}
bool DrawingObject::heightIsSet() const
{
    return m_HeightIsSet;
}

void DrawingObject::unsetHeight()
{
    m_HeightIsSet = false;
}

<DATA_TYPE_START>WordsApiLink<DATA_TYPE_END> DrawingObject::getImageDataLink() const
{
    return m_ImageDataLink;
}


void DrawingObject::setImageDataLink(<DATA_TYPE_START>WordsApiLink<DATA_TYPE_END> value)
{
    m_ImageDataLink = value;
    m_ImageDataLinkIsSet = true;
}
bool DrawingObject::imageDataLinkIsSet() const
{
    return m_ImageDataLinkIsSet;
}

void DrawingObject::unsetImageDataLink()
{
    m_ImageDataLinkIsSet = false;
}

<DATA_TYPE_START>double?<DATA_TYPE_END> DrawingObject::getLeft() const
{
    return m_Left;
}


void DrawingObject::setLeft(<DATA_TYPE_START>double?<DATA_TYPE_END> value)
{
    m_Left = value;
    m_LeftIsSet = true;
}
bool DrawingObject::leftIsSet() const
{
    return m_LeftIsSet;
}

void DrawingObject::unsetLeft()
{
    m_LeftIsSet = false;
}

<DATA_TYPE_START>WordsApiLink<DATA_TYPE_END> DrawingObject::getOleDataLink() const
{
    return m_OleDataLink;
}


void DrawingObject::setOleDataLink(<DATA_TYPE_START>WordsApiLink<DATA_TYPE_END> value)
{
    m_OleDataLink = value;
    m_OleDataLinkIsSet = true;
}
bool DrawingObject::oleDataLinkIsSet() const
{
    return m_OleDataLinkIsSet;
}

void DrawingObject::unsetOleDataLink()
{
    m_OleDataLinkIsSet = false;
}

<DATA_TYPE_START>string<DATA_TYPE_END> DrawingObject::getRelativeHorizontalPosition() const
{
    return m_RelativeHorizontalPosition;
}


void DrawingObject::setRelativeHorizontalPosition(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_RelativeHorizontalPosition = value;
    m_RelativeHorizontalPositionIsSet = true;
}
bool DrawingObject::relativeHorizontalPositionIsSet() const
{
    return m_RelativeHorizontalPositionIsSet;
}

void DrawingObject::unsetRelativeHorizontalPosition()
{
    m_RelativeHorizontalPositionIsSet = false;
}

<DATA_TYPE_START>string<DATA_TYPE_END> DrawingObject::getRelativeVerticalPosition() const
{
    return m_RelativeVerticalPosition;
}


void DrawingObject::setRelativeVerticalPosition(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_RelativeVerticalPosition = value;
    m_RelativeVerticalPositionIsSet = true;
}
bool DrawingObject::relativeVerticalPositionIsSet() const
{
    return m_RelativeVerticalPositionIsSet;
}

void DrawingObject::unsetRelativeVerticalPosition()
{
    m_RelativeVerticalPositionIsSet = false;
}

<DATA_TYPE_START>List<WordsApiLink><DATA_TYPE_END>& DrawingObject::getRenderLinks()
{
    return m_RenderLinks;
}

void DrawingObject::setRenderLinks(<DATA_TYPE_START>List<WordsApiLink><DATA_TYPE_END> const& value)
{
    m_RenderLinks = value;
    m_RenderLinksIsSet = true;
}
bool DrawingObject::renderLinksIsSet() const
{
    return m_RenderLinksIsSet;
}

void DrawingObject::unsetRenderLinks()
{
    m_RenderLinksIsSet = false;
}

<DATA_TYPE_START>double?<DATA_TYPE_END> DrawingObject::getTop() const
{
    return m_Top;
}


void DrawingObject::setTop(<DATA_TYPE_START>double?<DATA_TYPE_END> value)
{
    m_Top = value;
    m_TopIsSet = true;
}
bool DrawingObject::topIsSet() const
{
    return m_TopIsSet;
}

void DrawingObject::unsetTop()
{
    m_TopIsSet = false;
}

<DATA_TYPE_START>double?<DATA_TYPE_END> DrawingObject::getWidth() const
{
    return m_Width;
}


void DrawingObject::setWidth(<DATA_TYPE_START>double?<DATA_TYPE_END> value)
{
    m_Width = value;
    m_WidthIsSet = true;
}
bool DrawingObject::widthIsSet() const
{
    return m_WidthIsSet;
}

void DrawingObject::unsetWidth()
{
    m_WidthIsSet = false;
}

<DATA_TYPE_START>string<DATA_TYPE_END> DrawingObject::getWrapType() const
{
    return m_WrapType;
}


void DrawingObject::setWrapType(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_WrapType = value;
    m_WrapTypeIsSet = true;
}
bool DrawingObject::wrapTypeIsSet() const
{
    return m_WrapTypeIsSet;
}

void DrawingObject::unsetWrapType()
{
    m_WrapTypeIsSet = false;
}

}
}
}
}
}

