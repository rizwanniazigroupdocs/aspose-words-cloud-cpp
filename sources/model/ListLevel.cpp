/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ListLevel.cpp">
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


#include "ListLevel.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

ListLevel::ListLevel()
{
    m_Alignment = utility::conversions::to_string_t("");
    m_AlignmentIsSet = false;
    m_FontIsSet = false;
    m_IsLegal = false;
    m_IsLegalIsSet = false;
    m_LinkedStyleIsSet = false;
    m_NumberFormat = utility::conversions::to_string_t("");
    m_NumberFormatIsSet = false;
    m_NumberPosition = 0.0;
    m_NumberPositionIsSet = false;
    m_NumberStyle = utility::conversions::to_string_t("");
    m_NumberStyleIsSet = false;
    m_RestartAfterLevel = 0;
    m_RestartAfterLevelIsSet = false;
    m_StartAt = 0;
    m_StartAtIsSet = false;
    m_TabPosition = 0.0;
    m_TabPositionIsSet = false;
    m_TextPosition = 0.0;
    m_TextPositionIsSet = false;
    m_TrailingCharacter = utility::conversions::to_string_t("");
    m_TrailingCharacterIsSet = false;
}

ListLevel::~ListLevel()
{
}

void ListLevel::validate()
{
    // TODO: implement validation
}

web::json::value ListLevel::toJson() const
{
    web::json::value val = this->LinkElement::toJson();

    if(m_AlignmentIsSet)
    {
        val[_XPLATSTR("Alignment")] = ModelBase::toJson(m_Alignment);
    }
    if(m_FontIsSet)
    {
        val[_XPLATSTR("Font")] = ModelBase::toJson(m_Font);
    }
    if(m_IsLegalIsSet)
    {
        val[_XPLATSTR("IsLegal")] = ModelBase::toJson(m_IsLegal);
    }
    if(m_LinkedStyleIsSet)
    {
        val[_XPLATSTR("LinkedStyle")] = ModelBase::toJson(m_LinkedStyle);
    }
    if(m_NumberFormatIsSet)
    {
        val[_XPLATSTR("NumberFormat")] = ModelBase::toJson(m_NumberFormat);
    }
    if(m_NumberPositionIsSet)
    {
        val[_XPLATSTR("NumberPosition")] = ModelBase::toJson(m_NumberPosition);
    }
    if(m_NumberStyleIsSet)
    {
        val[_XPLATSTR("NumberStyle")] = ModelBase::toJson(m_NumberStyle);
    }
    if(m_RestartAfterLevelIsSet)
    {
        val[_XPLATSTR("RestartAfterLevel")] = ModelBase::toJson(m_RestartAfterLevel);
    }
    if(m_StartAtIsSet)
    {
        val[_XPLATSTR("StartAt")] = ModelBase::toJson(m_StartAt);
    }
    if(m_TabPositionIsSet)
    {
        val[_XPLATSTR("TabPosition")] = ModelBase::toJson(m_TabPosition);
    }
    if(m_TextPositionIsSet)
    {
        val[_XPLATSTR("TextPosition")] = ModelBase::toJson(m_TextPosition);
    }
    if(m_TrailingCharacterIsSet)
    {
        val[_XPLATSTR("TrailingCharacter")] = ModelBase::toJson(m_TrailingCharacter);
    }

    return val;
}

void ListLevel::fromJson(web::json::value& val)
{
    this->LinkElement::fromJson(val);

    if(val.has_field(_XPLATSTR("Alignment")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Alignment")];
        if(!fieldValue.is_null())
        {
            setAlignment(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("Font")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Font")];
        if(!fieldValue.is_null())
        {
            <DATA_TYPE_START>Font<DATA_TYPE_END> newItem(new Font());
            newItem->fromJson(fieldValue);
            setFont( newItem );
        }
    }
    if(val.has_field(_XPLATSTR("IsLegal")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("IsLegal")];
        if(!fieldValue.is_null())
        {
            setIsLegal(ModelBase::bool?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("LinkedStyle")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("LinkedStyle")];
        if(!fieldValue.is_null())
        {
            <DATA_TYPE_START>Style<DATA_TYPE_END> newItem(new Style());
            newItem->fromJson(fieldValue);
            setLinkedStyle( newItem );
        }
    }
    if(val.has_field(_XPLATSTR("NumberFormat")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("NumberFormat")];
        if(!fieldValue.is_null())
        {
            setNumberFormat(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("NumberPosition")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("NumberPosition")];
        if(!fieldValue.is_null())
        {
            setNumberPosition(ModelBase::double?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("NumberStyle")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("NumberStyle")];
        if(!fieldValue.is_null())
        {
            setNumberStyle(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("RestartAfterLevel")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("RestartAfterLevel")];
        if(!fieldValue.is_null())
        {
            setRestartAfterLevel(ModelBase::int?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("StartAt")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("StartAt")];
        if(!fieldValue.is_null())
        {
            setStartAt(ModelBase::int?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("TabPosition")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("TabPosition")];
        if(!fieldValue.is_null())
        {
            setTabPosition(ModelBase::double?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("TextPosition")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("TextPosition")];
        if(!fieldValue.is_null())
        {
            setTextPosition(ModelBase::double?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("TrailingCharacter")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("TrailingCharacter")];
        if(!fieldValue.is_null())
        {
            setTrailingCharacter(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void ListLevel::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    LinkElement::toMultipart(multipart, prefix);
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    if(m_AlignmentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Alignment"), m_Alignment));
        
    }
    if(m_FontIsSet)
    {
        if (m_Font.get())
        {
            m_Font->toMultipart(multipart, _XPLATSTR("Font."));
        }
        
    }
    if(m_IsLegalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("IsLegal"), m_IsLegal));
        
    }
    if(m_LinkedStyleIsSet)
    {
        if (m_LinkedStyle.get())
        {
            m_LinkedStyle->toMultipart(multipart, _XPLATSTR("LinkedStyle."));
        }
        
    }
    if(m_NumberFormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("NumberFormat"), m_NumberFormat));
        
    }
    if(m_NumberPositionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("NumberPosition"), m_NumberPosition));
        
    }
    if(m_NumberStyleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("NumberStyle"), m_NumberStyle));
        
    }
    if(m_RestartAfterLevelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("RestartAfterLevel"), m_RestartAfterLevel));
        
    }
    if(m_StartAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("StartAt"), m_StartAt));
        
    }
    if(m_TabPositionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("TabPosition"), m_TabPosition));
        
    }
    if(m_TextPositionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("TextPosition"), m_TextPosition));
        
    }
    if(m_TrailingCharacterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("TrailingCharacter"), m_TrailingCharacter));
        
    }
}

void ListLevel::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    LinkElement::fromMultiPart(multipart, prefix);

    if(multipart->hasContent(_XPLATSTR("Alignment")))
    {
        setAlignment(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("Alignment"))));
    }
    if(multipart->hasContent(_XPLATSTR("Font")))
    {
        if(multipart->hasContent(_XPLATSTR("Font")))
        {
            <DATA_TYPE_START>Font<DATA_TYPE_END> newItem(new Font());
            newItem->fromMultiPart(multipart, _XPLATSTR("Font."));
            setFont( newItem );
        }
    }
    if(multipart->hasContent(_XPLATSTR("IsLegal")))
    {
        setIsLegal(ModelBase::bool?FromHttpContent(multipart->getContent(_XPLATSTR("IsLegal"))));
    }
    if(multipart->hasContent(_XPLATSTR("LinkedStyle")))
    {
        if(multipart->hasContent(_XPLATSTR("LinkedStyle")))
        {
            <DATA_TYPE_START>Style<DATA_TYPE_END> newItem(new Style());
            newItem->fromMultiPart(multipart, _XPLATSTR("LinkedStyle."));
            setLinkedStyle( newItem );
        }
    }
    if(multipart->hasContent(_XPLATSTR("NumberFormat")))
    {
        setNumberFormat(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("NumberFormat"))));
    }
    if(multipart->hasContent(_XPLATSTR("NumberPosition")))
    {
        setNumberPosition(ModelBase::double?FromHttpContent(multipart->getContent(_XPLATSTR("NumberPosition"))));
    }
    if(multipart->hasContent(_XPLATSTR("NumberStyle")))
    {
        setNumberStyle(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("NumberStyle"))));
    }
    if(multipart->hasContent(_XPLATSTR("RestartAfterLevel")))
    {
        setRestartAfterLevel(ModelBase::int?FromHttpContent(multipart->getContent(_XPLATSTR("RestartAfterLevel"))));
    }
    if(multipart->hasContent(_XPLATSTR("StartAt")))
    {
        setStartAt(ModelBase::int?FromHttpContent(multipart->getContent(_XPLATSTR("StartAt"))));
    }
    if(multipart->hasContent(_XPLATSTR("TabPosition")))
    {
        setTabPosition(ModelBase::double?FromHttpContent(multipart->getContent(_XPLATSTR("TabPosition"))));
    }
    if(multipart->hasContent(_XPLATSTR("TextPosition")))
    {
        setTextPosition(ModelBase::double?FromHttpContent(multipart->getContent(_XPLATSTR("TextPosition"))));
    }
    if(multipart->hasContent(_XPLATSTR("TrailingCharacter")))
    {
        setTrailingCharacter(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("TrailingCharacter"))));
    }
}

<DATA_TYPE_START>string<DATA_TYPE_END> ListLevel::getAlignment() const
{
    return m_Alignment;
}


void ListLevel::setAlignment(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_Alignment = value;
    m_AlignmentIsSet = true;
}
bool ListLevel::alignmentIsSet() const
{
    return m_AlignmentIsSet;
}

void ListLevel::unsetAlignment()
{
    m_AlignmentIsSet = false;
}

<DATA_TYPE_START>Font<DATA_TYPE_END> ListLevel::getFont() const
{
    return m_Font;
}


void ListLevel::setFont(<DATA_TYPE_START>Font<DATA_TYPE_END> value)
{
    m_Font = value;
    m_FontIsSet = true;
}
bool ListLevel::fontIsSet() const
{
    return m_FontIsSet;
}

void ListLevel::unsetFont()
{
    m_FontIsSet = false;
}

<DATA_TYPE_START>bool?<DATA_TYPE_END> ListLevel::isIsLegal() const
{
    return m_IsLegal;
}


void ListLevel::setIsLegal(<DATA_TYPE_START>bool?<DATA_TYPE_END> value)
{
    m_IsLegal = value;
    m_IsLegalIsSet = true;
}
bool ListLevel::isLegalIsSet() const
{
    return m_IsLegalIsSet;
}

void ListLevel::unsetIsLegal()
{
    m_IsLegalIsSet = false;
}

<DATA_TYPE_START>Style<DATA_TYPE_END> ListLevel::getLinkedStyle() const
{
    return m_LinkedStyle;
}


void ListLevel::setLinkedStyle(<DATA_TYPE_START>Style<DATA_TYPE_END> value)
{
    m_LinkedStyle = value;
    m_LinkedStyleIsSet = true;
}
bool ListLevel::linkedStyleIsSet() const
{
    return m_LinkedStyleIsSet;
}

void ListLevel::unsetLinkedStyle()
{
    m_LinkedStyleIsSet = false;
}

<DATA_TYPE_START>string<DATA_TYPE_END> ListLevel::getNumberFormat() const
{
    return m_NumberFormat;
}


void ListLevel::setNumberFormat(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_NumberFormat = value;
    m_NumberFormatIsSet = true;
}
bool ListLevel::numberFormatIsSet() const
{
    return m_NumberFormatIsSet;
}

void ListLevel::unsetNumberFormat()
{
    m_NumberFormatIsSet = false;
}

<DATA_TYPE_START>double?<DATA_TYPE_END> ListLevel::getNumberPosition() const
{
    return m_NumberPosition;
}


void ListLevel::setNumberPosition(<DATA_TYPE_START>double?<DATA_TYPE_END> value)
{
    m_NumberPosition = value;
    m_NumberPositionIsSet = true;
}
bool ListLevel::numberPositionIsSet() const
{
    return m_NumberPositionIsSet;
}

void ListLevel::unsetNumberPosition()
{
    m_NumberPositionIsSet = false;
}

<DATA_TYPE_START>string<DATA_TYPE_END> ListLevel::getNumberStyle() const
{
    return m_NumberStyle;
}


void ListLevel::setNumberStyle(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_NumberStyle = value;
    m_NumberStyleIsSet = true;
}
bool ListLevel::numberStyleIsSet() const
{
    return m_NumberStyleIsSet;
}

void ListLevel::unsetNumberStyle()
{
    m_NumberStyleIsSet = false;
}

<DATA_TYPE_START>int?<DATA_TYPE_END> ListLevel::getRestartAfterLevel() const
{
    return m_RestartAfterLevel;
}


void ListLevel::setRestartAfterLevel(<DATA_TYPE_START>int?<DATA_TYPE_END> value)
{
    m_RestartAfterLevel = value;
    m_RestartAfterLevelIsSet = true;
}
bool ListLevel::restartAfterLevelIsSet() const
{
    return m_RestartAfterLevelIsSet;
}

void ListLevel::unsetRestartAfterLevel()
{
    m_RestartAfterLevelIsSet = false;
}

<DATA_TYPE_START>int?<DATA_TYPE_END> ListLevel::getStartAt() const
{
    return m_StartAt;
}


void ListLevel::setStartAt(<DATA_TYPE_START>int?<DATA_TYPE_END> value)
{
    m_StartAt = value;
    m_StartAtIsSet = true;
}
bool ListLevel::startAtIsSet() const
{
    return m_StartAtIsSet;
}

void ListLevel::unsetStartAt()
{
    m_StartAtIsSet = false;
}

<DATA_TYPE_START>double?<DATA_TYPE_END> ListLevel::getTabPosition() const
{
    return m_TabPosition;
}


void ListLevel::setTabPosition(<DATA_TYPE_START>double?<DATA_TYPE_END> value)
{
    m_TabPosition = value;
    m_TabPositionIsSet = true;
}
bool ListLevel::tabPositionIsSet() const
{
    return m_TabPositionIsSet;
}

void ListLevel::unsetTabPosition()
{
    m_TabPositionIsSet = false;
}

<DATA_TYPE_START>double?<DATA_TYPE_END> ListLevel::getTextPosition() const
{
    return m_TextPosition;
}


void ListLevel::setTextPosition(<DATA_TYPE_START>double?<DATA_TYPE_END> value)
{
    m_TextPosition = value;
    m_TextPositionIsSet = true;
}
bool ListLevel::textPositionIsSet() const
{
    return m_TextPositionIsSet;
}

void ListLevel::unsetTextPosition()
{
    m_TextPositionIsSet = false;
}

<DATA_TYPE_START>string<DATA_TYPE_END> ListLevel::getTrailingCharacter() const
{
    return m_TrailingCharacter;
}


void ListLevel::setTrailingCharacter(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_TrailingCharacter = value;
    m_TrailingCharacterIsSet = true;
}
bool ListLevel::trailingCharacterIsSet() const
{
    return m_TrailingCharacterIsSet;
}

void ListLevel::unsetTrailingCharacter()
{
    m_TrailingCharacterIsSet = false;
}

}
}
}
}
}

