/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="DocumentPosition.cpp">
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


#include "DocumentPosition.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

DocumentPosition::DocumentPosition()
{
    m_NodeIsSet = false;
    m_Offset = 0;
    m_OffsetIsSet = false;
}

DocumentPosition::~DocumentPosition()
{
}

void DocumentPosition::validate()
{
    // TODO: implement validation
}

web::json::value DocumentPosition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_NodeIsSet)
    {
        val[_XPLATSTR("node")] = ModelBase::toJson(m_Node);
    }
    if(m_OffsetIsSet)
    {
        val[_XPLATSTR("offset")] = ModelBase::toJson(m_Offset);
    }

    return val;
}

void DocumentPosition::fromJson(web::json::value& val)
{
    if(val.has_field(_XPLATSTR("node")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("node")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<NodeLink> newItem(new NodeLink());
            newItem->fromJson(fieldValue);
            setNode( newItem );
        }
    }
    if(val.has_field(_XPLATSTR("offset")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("offset")];
        if(!fieldValue.is_null())
        {
            setOffset(ModelBase::int32_tFromJson(fieldValue));
        }
    }
}

void DocumentPosition::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    if(m_NodeIsSet)
    {
        if (m_Node.get())
        {
            m_Node->toMultipart(multipart, _XPLATSTR("node."));
        }
        
    }
    if(m_OffsetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("offset"), m_Offset));
    }
}

void DocumentPosition::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    if(multipart->hasContent(_XPLATSTR("node")))
    {
        if(multipart->hasContent(_XPLATSTR("node")))
        {
            std::shared_ptr<NodeLink> newItem(new NodeLink());
            newItem->fromMultiPart(multipart, _XPLATSTR("node."));
            setNode( newItem );
        }
    }
    if(multipart->hasContent(_XPLATSTR("offset")))
    {
        setOffset(ModelBase::int32_tFromHttpContent(multipart->getContent(_XPLATSTR("offset"))));
    }
}

std::shared_ptr<NodeLink> DocumentPosition::getNode() const
{
    return m_Node;
}


void DocumentPosition::setNode(std::shared_ptr<NodeLink> value)
{
    m_Node = value;
    m_NodeIsSet = true;
}
bool DocumentPosition::nodeIsSet() const
{
    return m_NodeIsSet;
}

void DocumentPosition::unsetNode()
{
    m_NodeIsSet = false;
}

int32_t DocumentPosition::getOffset() const
{
    return m_Offset;
}


void DocumentPosition::setOffset(int32_t value)
{
    m_Offset = value;
    m_OffsetIsSet = true;
}
bool DocumentPosition::offsetIsSet() const
{
    return m_OffsetIsSet;
}

void DocumentPosition::unsetOffset()
{
    m_OffsetIsSet = false;
}

}
}
}
}
}

