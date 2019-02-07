/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="ReplaceTextRequest.cpp">
*   Copyright (c) 2018 Aspose.Words for Cloud
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


#include "ReplaceTextRequest.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ReplaceTextRequest::ReplaceTextRequest()
{
    m_OldValue = utility::conversions::to_string_t("");
    m_OldValueIsSet = false;
    m_NewValue = utility::conversions::to_string_t("");
    m_NewValueIsSet = false;
    m_IsMatchCase = false;
    m_IsMatchWholeWord = false;
    m_IsOldValueRegex = false;
}

ReplaceTextRequest::~ReplaceTextRequest()
{
}

void ReplaceTextRequest::validate()
{
    // TODO: implement validation
}

web::json::value ReplaceTextRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_OldValueIsSet)
    {
        val[_XPLATSTR("OldValue")] = ModelBase::toJson(m_OldValue);
    }
    if(m_NewValueIsSet)
    {
        val[_XPLATSTR("NewValue")] = ModelBase::toJson(m_NewValue);
    }
    val[_XPLATSTR("IsMatchCase")] = ModelBase::toJson(m_IsMatchCase);
    val[_XPLATSTR("IsMatchWholeWord")] = ModelBase::toJson(m_IsMatchWholeWord);
    val[_XPLATSTR("IsOldValueRegex")] = ModelBase::toJson(m_IsOldValueRegex);

    return val;
}

void ReplaceTextRequest::fromJson(web::json::value& val)
{
    if(val.has_field(_XPLATSTR("OldValue")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("OldValue")];
        if(!fieldValue.is_null())
        {
            setOldValue(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("NewValue")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("NewValue")];
        if(!fieldValue.is_null())
        {
            setNewValue(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("IsMatchCase")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("IsMatchCase")];
        if(!fieldValue.is_null())
        {
            setIsMatchCase(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("IsMatchWholeWord")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("IsMatchWholeWord")];
        if(!fieldValue.is_null())
        {
            setIsMatchWholeWord(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("IsOldValueRegex")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("IsOldValueRegex")];
        if(!fieldValue.is_null())
        {
            setIsOldValueRegex(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void ReplaceTextRequest::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    if(m_OldValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("OldValue"), m_OldValue));
        
    }
    if(m_NewValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("NewValue"), m_NewValue));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("IsMatchCase"), m_IsMatchCase));
    multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("IsMatchWholeWord"), m_IsMatchWholeWord));
    multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("IsOldValueRegex"), m_IsOldValueRegex));
}

void ReplaceTextRequest::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    if(multipart->hasContent(_XPLATSTR("OldValue")))
    {
        setOldValue(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("OldValue"))));
    }
    if(multipart->hasContent(_XPLATSTR("NewValue")))
    {
        setNewValue(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("NewValue"))));
    }
    setIsMatchCase(ModelBase::boolFromHttpContent(multipart->getContent(_XPLATSTR("IsMatchCase"))));
    setIsMatchWholeWord(ModelBase::boolFromHttpContent(multipart->getContent(_XPLATSTR("IsMatchWholeWord"))));
    setIsOldValueRegex(ModelBase::boolFromHttpContent(multipart->getContent(_XPLATSTR("IsOldValueRegex"))));
}

utility::string_t ReplaceTextRequest::getOldValue() const
{
    return m_OldValue;
}


void ReplaceTextRequest::setOldValue(utility::string_t value)
{
    m_OldValue = value;
    m_OldValueIsSet = true;
}
bool ReplaceTextRequest::oldValueIsSet() const
{
    return m_OldValueIsSet;
}

void ReplaceTextRequest::unsetOldValue()
{
    m_OldValueIsSet = false;
}

utility::string_t ReplaceTextRequest::getNewValue() const
{
    return m_NewValue;
}


void ReplaceTextRequest::setNewValue(utility::string_t value)
{
    m_NewValue = value;
    m_NewValueIsSet = true;
}
bool ReplaceTextRequest::newValueIsSet() const
{
    return m_NewValueIsSet;
}

void ReplaceTextRequest::unsetNewValue()
{
    m_NewValueIsSet = false;
}

bool ReplaceTextRequest::isIsMatchCase() const
{
    return m_IsMatchCase;
}


void ReplaceTextRequest::setIsMatchCase(bool value)
{
    m_IsMatchCase = value;
    
}
bool ReplaceTextRequest::isIsMatchWholeWord() const
{
    return m_IsMatchWholeWord;
}


void ReplaceTextRequest::setIsMatchWholeWord(bool value)
{
    m_IsMatchWholeWord = value;
    
}
bool ReplaceTextRequest::isIsOldValueRegex() const
{
    return m_IsOldValueRegex;
}


void ReplaceTextRequest::setIsOldValueRegex(bool value)
{
    m_IsOldValueRegex = value;
    
}
}
}
}
}

