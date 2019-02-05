
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="HeaderFooter.h">
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

#ifndef IO_SWAGGER_CLIENT_MODEL_HeaderFooter_H_
#define IO_SWAGGER_CLIENT_MODEL_HeaderFooter_H_


#include "HeaderFooterLink.h"
#include <cpprest/details/basic_types.h>
#include "LinkElement.h"
#include "WordsApiLink.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Section element
/// </summary>
class  HeaderFooter
    : public HeaderFooterLink
{
public:
    HeaderFooter();
    virtual ~HeaderFooter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// HeaderFooter members

    /// <summary>
    /// Link to DrawingObjects resource
    /// </summary>
    std::shared_ptr<LinkElement> getDrawingObjects() const;
    bool drawingObjectsIsSet() const;
    void unsetDrawingObjects();
    void setDrawingObjects(std::shared_ptr<LinkElement> value);
    /// <summary>
    /// Link to Paragraphs resource
    /// </summary>
    std::shared_ptr<LinkElement> getParagraphs() const;
    bool paragraphsIsSet() const;
    void unsetParagraphs();
    void setParagraphs(std::shared_ptr<LinkElement> value);

protected:
    std::shared_ptr<LinkElement> m_DrawingObjects;
    bool m_DrawingObjectsIsSet;
    std::shared_ptr<LinkElement> m_Paragraphs;
    bool m_ParagraphsIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_HeaderFooter_H_ */
