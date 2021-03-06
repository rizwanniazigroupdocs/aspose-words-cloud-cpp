/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="RenderMathObjectRequest.cpp">
*   Copyright (c) 2020 Aspose.Words for Cloud
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

#include "RenderMathObjectRequest.h"
namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {
RenderMathObjectRequest::RenderMathObjectRequest(
    utility::string_t name,
    utility::string_t format,
    int32_t index,
    boost::optional< utility::string_t > nodePath,
    boost::optional< utility::string_t > folder,
    boost::optional< utility::string_t > storage,
    boost::optional< utility::string_t > loadEncoding,
    boost::optional< utility::string_t > password,
    boost::optional< utility::string_t > fontsLocation
) : m_Name(std::move(name)),
m_Format(std::move(format)),
m_Index(std::move(index)),
m_NodePath(std::move(nodePath)),
m_Folder(std::move(folder)),
m_Storage(std::move(storage)),
m_LoadEncoding(std::move(loadEncoding)),
m_Password(std::move(password)),
m_FontsLocation(std::move(fontsLocation))
{
}

utility::string_t RenderMathObjectRequest::getName() const
{
    return m_Name;
}

void RenderMathObjectRequest::setName(utility::string_t name)
{
    m_Name = std::move(name);
}

utility::string_t RenderMathObjectRequest::getFormat() const
{
    return m_Format;
}

void RenderMathObjectRequest::setFormat(utility::string_t format)
{
    m_Format = std::move(format);
}

int32_t RenderMathObjectRequest::getIndex() const
{
    return m_Index;
}

void RenderMathObjectRequest::setIndex(int32_t index)
{
    m_Index = std::move(index);
}

boost::optional< utility::string_t > RenderMathObjectRequest::getNodePath() const
{
    return m_NodePath;
}

void RenderMathObjectRequest::setNodePath(boost::optional< utility::string_t > nodePath)
{
    m_NodePath = std::move(nodePath);
}

boost::optional< utility::string_t > RenderMathObjectRequest::getFolder() const
{
    return m_Folder;
}

void RenderMathObjectRequest::setFolder(boost::optional< utility::string_t > folder)
{
    m_Folder = std::move(folder);
}

boost::optional< utility::string_t > RenderMathObjectRequest::getStorage() const
{
    return m_Storage;
}

void RenderMathObjectRequest::setStorage(boost::optional< utility::string_t > storage)
{
    m_Storage = std::move(storage);
}

boost::optional< utility::string_t > RenderMathObjectRequest::getLoadEncoding() const
{
    return m_LoadEncoding;
}

void RenderMathObjectRequest::setLoadEncoding(boost::optional< utility::string_t > loadEncoding)
{
    m_LoadEncoding = std::move(loadEncoding);
}

boost::optional< utility::string_t > RenderMathObjectRequest::getPassword() const
{
    return m_Password;
}

void RenderMathObjectRequest::setPassword(boost::optional< utility::string_t > password)
{
    m_Password = std::move(password);
}

boost::optional< utility::string_t > RenderMathObjectRequest::getFontsLocation() const
{
    return m_FontsLocation;
}

void RenderMathObjectRequest::setFontsLocation(boost::optional< utility::string_t > fontsLocation)
{
    m_FontsLocation = std::move(fontsLocation);
}

}
}
}
}
}
