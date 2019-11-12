
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="NodeLink.h">
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

#ifndef ASPOSE_WORDS_CLOUD_API_MODELS_NodeLink_H_
#define ASPOSE_WORDS_CLOUD_API_MODELS_NodeLink_H_


#include <cpprest/details/basic_types.h>
#include "LinkElement.h"
#include "WordsApiLink.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

/// <summary>
/// Reference to node.
/// </summary>
class  NodeLink
    : public LinkElement
{
public:
    NodeLink();
    virtual ~NodeLink();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// NodeLink members

    /// <summary>
    /// Gets or sets node id.
    /// </summary>
    utility::string_t getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetNodeId();
    void setNodeId(utility::string_t value);

protected:
    utility::string_t m_NodeId;
    bool m_NodeIdIsSet;
};

}
}
}
}
}

#endif /* ASPOSE_WORDS_CLOUD_API_MODELS_NodeLink_H_ */
