/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="DrawingObjectsResponse.cpp">
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


#include "DrawingObjectsResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

DrawingObjectsResponse::DrawingObjectsResponse()
{
    m_DrawingObjectsIsSet = false;
}

DrawingObjectsResponse::~DrawingObjectsResponse()
{
}

void DrawingObjectsResponse::validate()
{
    // TODO: implement validation
}

web::json::value DrawingObjectsResponse::toJson() const
{
    web::json::value val = this->AsposeResponse::toJson();

    if(m_DrawingObjectsIsSet)
    {
        val[_XPLATSTR("DrawingObjects")] = ModelBase::toJson(m_DrawingObjects);
    }

    return val;
}

void DrawingObjectsResponse::fromJson(web::json::value& val)
{
    this->AsposeResponse::fromJson(val);

    if(val.has_field(_XPLATSTR("DrawingObjects")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("DrawingObjects")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DrawingObjectCollection> newItem(new DrawingObjectCollection());
            newItem->fromJson(fieldValue);
            setDrawingObjects( newItem );
        }
    }
}

void DrawingObjectsResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != _XPLATSTR("."))
    {
        namePrefix += _XPLATSTR(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Code"), m_Code));
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("Status"), m_Status));
        
    }
    if(m_DrawingObjectsIsSet)
    {
        if (m_DrawingObjects.get())
        {
            m_DrawingObjects->toMultipart(multipart, _XPLATSTR("DrawingObjects."));
        }
        
    }
}

void DrawingObjectsResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != _XPLATSTR("."))
    {
        namePrefix += _XPLATSTR(".");
    }

    setCode(ModelBase::int32_tFromHttpContent(multipart->getContent(_XPLATSTR("Code"))));
    if(multipart->hasContent(_XPLATSTR("Status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("Status"))));
    }
    if(multipart->hasContent(_XPLATSTR("DrawingObjects")))
    {
        if(multipart->hasContent(_XPLATSTR("DrawingObjects")))
        {
            std::shared_ptr<DrawingObjectCollection> newItem(new DrawingObjectCollection());
            newItem->fromMultiPart(multipart, _XPLATSTR("DrawingObjects."));
            setDrawingObjects( newItem );
        }
    }
}

std::shared_ptr<DrawingObjectCollection> DrawingObjectsResponse::getDrawingObjects() const
{
    return m_DrawingObjects;
}


void DrawingObjectsResponse::setDrawingObjects(std::shared_ptr<DrawingObjectCollection> value)
{
    m_DrawingObjects = value;
    m_DrawingObjectsIsSet = true;
}
bool DrawingObjectsResponse::drawingObjectsIsSet() const
{
    return m_DrawingObjectsIsSet;
}

void DrawingObjectsResponse::unsetDrawingObjects()
{
    m_DrawingObjectsIsSet = false;
}

}
}
}
}

