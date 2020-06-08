/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ListInfo.cpp">
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


#include "ListInfo.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

ListInfo::ListInfo()
{
    m_IsListStyleDefinition = false;
    m_IsListStyleDefinitionIsSet = false;
    m_IsListStyleReference = false;
    m_IsListStyleReferenceIsSet = false;
    m_IsMultiLevel = false;
    m_IsMultiLevelIsSet = false;
    m_IsRestartAtEachSection = false;
    m_IsRestartAtEachSectionIsSet = false;
    m_ListId = 0;
    m_ListIdIsSet = false;
    m_ListLevelsIsSet = false;
    m_StyleIsSet = false;
}

ListInfo::~ListInfo()
{
}

void ListInfo::validate()
{
    // TODO: implement validation
}

web::json::value ListInfo::toJson() const
{
    web::json::value val = this->LinkElement::toJson();

    if(m_IsListStyleDefinitionIsSet)
    {
        val[_XPLATSTR("IsListStyleDefinition")] = ModelBase::toJson(m_IsListStyleDefinition);
    }
    if(m_IsListStyleReferenceIsSet)
    {
        val[_XPLATSTR("IsListStyleReference")] = ModelBase::toJson(m_IsListStyleReference);
    }
    if(m_IsMultiLevelIsSet)
    {
        val[_XPLATSTR("IsMultiLevel")] = ModelBase::toJson(m_IsMultiLevel);
    }
    if(m_IsRestartAtEachSectionIsSet)
    {
        val[_XPLATSTR("IsRestartAtEachSection")] = ModelBase::toJson(m_IsRestartAtEachSection);
    }
    if(m_ListIdIsSet)
    {
        val[_XPLATSTR("ListId")] = ModelBase::toJson(m_ListId);
    }
    if(m_ListLevelsIsSet)
    {
        val[_XPLATSTR("ListLevels")] = ModelBase::toJson(m_ListLevels);
    }
    if(m_StyleIsSet)
    {
        val[_XPLATSTR("Style")] = ModelBase::toJson(m_Style);
    }

    return val;
}

void ListInfo::fromJson(web::json::value& val)
{
    this->LinkElement::fromJson(val);

    if(val.has_field(_XPLATSTR("IsListStyleDefinition")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("IsListStyleDefinition")];
        if(!fieldValue.is_null())
        {
            setIsListStyleDefinition(ModelBase::bool?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("IsListStyleReference")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("IsListStyleReference")];
        if(!fieldValue.is_null())
        {
            setIsListStyleReference(ModelBase::bool?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("IsMultiLevel")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("IsMultiLevel")];
        if(!fieldValue.is_null())
        {
            setIsMultiLevel(ModelBase::bool?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("IsRestartAtEachSection")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("IsRestartAtEachSection")];
        if(!fieldValue.is_null())
        {
            setIsRestartAtEachSection(ModelBase::bool?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("ListId")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("ListId")];
        if(!fieldValue.is_null())
        {
            setListId(ModelBase::int?FromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("ListLevels")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("ListLevels")];
        if(!fieldValue.is_null())
        {
            <DATA_TYPE_START>ListLevels<DATA_TYPE_END> newItem(new ListLevels());
            newItem->fromJson(fieldValue);
            setListLevels( newItem );
        }
    }
    if(val.has_field(_XPLATSTR("Style")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Style")];
        if(!fieldValue.is_null())
        {
            <DATA_TYPE_START>Style<DATA_TYPE_END> newItem(new Style());
            newItem->fromJson(fieldValue);
            setStyle( newItem );
        }
    }
}

void ListInfo::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    LinkElement::toMultipart(multipart, prefix);
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    if(m_IsListStyleDefinitionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("IsListStyleDefinition"), m_IsListStyleDefinition));
        
    }
    if(m_IsListStyleReferenceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("IsListStyleReference"), m_IsListStyleReference));
        
    }
    if(m_IsMultiLevelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("IsMultiLevel"), m_IsMultiLevel));
        
    }
    if(m_IsRestartAtEachSectionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("IsRestartAtEachSection"), m_IsRestartAtEachSection));
        
    }
    if(m_ListIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("ListId"), m_ListId));
        
    }
    if(m_ListLevelsIsSet)
    {
        if (m_ListLevels.get())
        {
            m_ListLevels->toMultipart(multipart, _XPLATSTR("ListLevels."));
        }
        
    }
    if(m_StyleIsSet)
    {
        if (m_Style.get())
        {
            m_Style->toMultipart(multipart, _XPLATSTR("Style."));
        }
        
    }
}

void ListInfo::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    LinkElement::fromMultiPart(multipart, prefix);

    if(multipart->hasContent(_XPLATSTR("IsListStyleDefinition")))
    {
        setIsListStyleDefinition(ModelBase::bool?FromHttpContent(multipart->getContent(_XPLATSTR("IsListStyleDefinition"))));
    }
    if(multipart->hasContent(_XPLATSTR("IsListStyleReference")))
    {
        setIsListStyleReference(ModelBase::bool?FromHttpContent(multipart->getContent(_XPLATSTR("IsListStyleReference"))));
    }
    if(multipart->hasContent(_XPLATSTR("IsMultiLevel")))
    {
        setIsMultiLevel(ModelBase::bool?FromHttpContent(multipart->getContent(_XPLATSTR("IsMultiLevel"))));
    }
    if(multipart->hasContent(_XPLATSTR("IsRestartAtEachSection")))
    {
        setIsRestartAtEachSection(ModelBase::bool?FromHttpContent(multipart->getContent(_XPLATSTR("IsRestartAtEachSection"))));
    }
    if(multipart->hasContent(_XPLATSTR("ListId")))
    {
        setListId(ModelBase::int?FromHttpContent(multipart->getContent(_XPLATSTR("ListId"))));
    }
    if(multipart->hasContent(_XPLATSTR("ListLevels")))
    {
        if(multipart->hasContent(_XPLATSTR("ListLevels")))
        {
            <DATA_TYPE_START>ListLevels<DATA_TYPE_END> newItem(new ListLevels());
            newItem->fromMultiPart(multipart, _XPLATSTR("ListLevels."));
            setListLevels( newItem );
        }
    }
    if(multipart->hasContent(_XPLATSTR("Style")))
    {
        if(multipart->hasContent(_XPLATSTR("Style")))
        {
            <DATA_TYPE_START>Style<DATA_TYPE_END> newItem(new Style());
            newItem->fromMultiPart(multipart, _XPLATSTR("Style."));
            setStyle( newItem );
        }
    }
}

<DATA_TYPE_START>bool?<DATA_TYPE_END> ListInfo::isIsListStyleDefinition() const
{
    return m_IsListStyleDefinition;
}


void ListInfo::setIsListStyleDefinition(<DATA_TYPE_START>bool?<DATA_TYPE_END> value)
{
    m_IsListStyleDefinition = value;
    m_IsListStyleDefinitionIsSet = true;
}
bool ListInfo::isListStyleDefinitionIsSet() const
{
    return m_IsListStyleDefinitionIsSet;
}

void ListInfo::unsetIsListStyleDefinition()
{
    m_IsListStyleDefinitionIsSet = false;
}

<DATA_TYPE_START>bool?<DATA_TYPE_END> ListInfo::isIsListStyleReference() const
{
    return m_IsListStyleReference;
}


void ListInfo::setIsListStyleReference(<DATA_TYPE_START>bool?<DATA_TYPE_END> value)
{
    m_IsListStyleReference = value;
    m_IsListStyleReferenceIsSet = true;
}
bool ListInfo::isListStyleReferenceIsSet() const
{
    return m_IsListStyleReferenceIsSet;
}

void ListInfo::unsetIsListStyleReference()
{
    m_IsListStyleReferenceIsSet = false;
}

<DATA_TYPE_START>bool?<DATA_TYPE_END> ListInfo::isIsMultiLevel() const
{
    return m_IsMultiLevel;
}


void ListInfo::setIsMultiLevel(<DATA_TYPE_START>bool?<DATA_TYPE_END> value)
{
    m_IsMultiLevel = value;
    m_IsMultiLevelIsSet = true;
}
bool ListInfo::isMultiLevelIsSet() const
{
    return m_IsMultiLevelIsSet;
}

void ListInfo::unsetIsMultiLevel()
{
    m_IsMultiLevelIsSet = false;
}

<DATA_TYPE_START>bool?<DATA_TYPE_END> ListInfo::isIsRestartAtEachSection() const
{
    return m_IsRestartAtEachSection;
}


void ListInfo::setIsRestartAtEachSection(<DATA_TYPE_START>bool?<DATA_TYPE_END> value)
{
    m_IsRestartAtEachSection = value;
    m_IsRestartAtEachSectionIsSet = true;
}
bool ListInfo::isRestartAtEachSectionIsSet() const
{
    return m_IsRestartAtEachSectionIsSet;
}

void ListInfo::unsetIsRestartAtEachSection()
{
    m_IsRestartAtEachSectionIsSet = false;
}

<DATA_TYPE_START>int?<DATA_TYPE_END> ListInfo::getListId() const
{
    return m_ListId;
}


void ListInfo::setListId(<DATA_TYPE_START>int?<DATA_TYPE_END> value)
{
    m_ListId = value;
    m_ListIdIsSet = true;
}
bool ListInfo::listIdIsSet() const
{
    return m_ListIdIsSet;
}

void ListInfo::unsetListId()
{
    m_ListIdIsSet = false;
}

<DATA_TYPE_START>ListLevels<DATA_TYPE_END> ListInfo::getListLevels() const
{
    return m_ListLevels;
}


void ListInfo::setListLevels(<DATA_TYPE_START>ListLevels<DATA_TYPE_END> value)
{
    m_ListLevels = value;
    m_ListLevelsIsSet = true;
}
bool ListInfo::listLevelsIsSet() const
{
    return m_ListLevelsIsSet;
}

void ListInfo::unsetListLevels()
{
    m_ListLevelsIsSet = false;
}

<DATA_TYPE_START>Style<DATA_TYPE_END> ListInfo::getStyle() const
{
    return m_Style;
}


void ListInfo::setStyle(<DATA_TYPE_START>Style<DATA_TYPE_END> value)
{
    m_Style = value;
    m_StyleIsSet = true;
}
bool ListInfo::styleIsSet() const
{
    return m_StyleIsSet;
}

void ListInfo::unsetStyle()
{
    m_StyleIsSet = false;
}

}
}
}
}
}

