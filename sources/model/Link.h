/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="Link.h">
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

#ifndef ASPOSE_WORDS_CLOUD_API_MODELS_Link_H_
#define ASPOSE_WORDS_CLOUD_API_MODELS_Link_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

/// <summary>
/// Provides information for the object link. This is supposed to be an atom:link, therefore it should have all attributes specified here http://tools.ietf.org/html/rfc4287#section-4.2.7.
/// </summary>
class  Link
    : public ModelBase
{
public:
    Link();
    virtual ~Link();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Link members

    /// <summary>
    /// Gets or sets the \&quot;href\&quot; attribute contains the link&#x27;s IRI. atom:link elements MUST have an href attribute, whose value MUST be a IRI reference.
    /// </summary>
    <DATA_TYPE_START>string<DATA_TYPE_END> getHref() const;
    bool hrefIsSet() const;
    void unsetHref();
    void setHref(<DATA_TYPE_START>string<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets atom:link elements MAY have a \&quot;rel\&quot; attribute that indicates the link relation type.  If the \&quot;rel\&quot; attribute is not present, the link element MUST be interpreted as if the link relation type is \&quot;alternate\&quot;.
    /// </summary>
    <DATA_TYPE_START>string<DATA_TYPE_END> getRel() const;
    bool relIsSet() const;
    void unsetRel();
    void setRel(<DATA_TYPE_START>string<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets on the link element, the \&quot;type\&quot; attribute&#x27;s value is an advisory media type: it is a hint about the type of the representation that is expected to be returned when the value of the href attribute is dereferenced.  Note that the type attribute does not override the actual media type returned with the representation.
    /// </summary>
    <DATA_TYPE_START>string<DATA_TYPE_END> getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(<DATA_TYPE_START>string<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets the \&quot;title\&quot; attribute conveys human-readable information about the link.  The content of the \&quot;title\&quot; attribute is Language-Sensitive.
    /// </summary>
    <DATA_TYPE_START>string<DATA_TYPE_END> getTitle() const;
    bool titleIsSet() const;
    void unsetTitle();
    void setTitle(<DATA_TYPE_START>string<DATA_TYPE_END> value);

protected:
    <DATA_TYPE_START>string<DATA_TYPE_END> m_Href;
    bool m_HrefIsSet;
    <DATA_TYPE_START>string<DATA_TYPE_END> m_Rel;
    bool m_RelIsSet;
    <DATA_TYPE_START>string<DATA_TYPE_END> m_Type;
    bool m_TypeIsSet;
    <DATA_TYPE_START>string<DATA_TYPE_END> m_Title;
    bool m_TitleIsSet;
};

}
}
}
}
}

#endif /* ASPOSE_WORDS_CLOUD_API_MODELS_Link_H_ */
