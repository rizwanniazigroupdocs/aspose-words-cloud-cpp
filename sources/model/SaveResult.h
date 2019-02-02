
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="SaveResult.h">
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

#ifndef IO_SWAGGER_CLIENT_MODEL_SaveResult_H_
#define IO_SWAGGER_CLIENT_MODEL_SaveResult_H_


#include "../ModelBase.h"

#include "FileLink.h"
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Result of saving.
/// </summary>
class  SaveResult
    : public ModelBase
{
public:
    SaveResult();
    virtual ~SaveResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SaveResult members

    /// <summary>
    /// Link to source document.
    /// </summary>
    std::shared_ptr<FileLink> getSourceDocument() const;
    bool sourceDocumentIsSet() const;
    void unsetSourceDocument();
    void setSourceDocument(std::shared_ptr<FileLink> value);
    /// <summary>
    /// Link to destination document.
    /// </summary>
    std::shared_ptr<FileLink> getDestDocument() const;
    bool destDocumentIsSet() const;
    void unsetDestDocument();
    void setDestDocument(std::shared_ptr<FileLink> value);
    /// <summary>
    /// Links to additional items (css, images etc).
    /// </summary>
    std::vector<std::shared_ptr<FileLink>>& getAdditionalItems();
    bool additionalItemsIsSet() const;
    void unsetAdditionalItems();
    void setAdditionalItems(std::vector<std::shared_ptr<FileLink>> const& value);

protected:
    std::shared_ptr<FileLink> m_SourceDocument;
    bool m_SourceDocumentIsSet;
    std::shared_ptr<FileLink> m_DestDocument;
    bool m_DestDocumentIsSet;
    std::vector<std::shared_ptr<FileLink>> m_AdditionalItems;
    bool m_AdditionalItemsIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_SaveResult_H_ */
