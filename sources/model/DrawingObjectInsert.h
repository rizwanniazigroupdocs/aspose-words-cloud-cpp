/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="DrawingObjectInsert.h">
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

#ifndef ASPOSE_WORDS_CLOUD_API_MODELS_DrawingObjectInsert_H_
#define ASPOSE_WORDS_CLOUD_API_MODELS_DrawingObjectInsert_H_


#include "../ModelBase.h"

#include "DocumentPosition.h"
#include <cpprest/details/basic_types.h>

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

/// <summary>
/// Drawing object element for insert.
/// </summary>
class  DrawingObjectInsert
    : public ModelBase
{
public:
    DrawingObjectInsert();
    virtual ~DrawingObjectInsert();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DrawingObjectInsert members

    /// <summary>
    /// Gets or sets Position.
    /// </summary>
    <DATA_TYPE_START>DocumentPosition<DATA_TYPE_END> getPosition() const;
    bool positionIsSet() const;
    void unsetPosition();
    void setPosition(<DATA_TYPE_START>DocumentPosition<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets specifies where the distance to the image is measured from.             
    /// </summary>
    <DATA_TYPE_START>string<DATA_TYPE_END> getRelativeHorizontalPosition() const;
    bool relativeHorizontalPositionIsSet() const;
    void unsetRelativeHorizontalPosition();
    void setRelativeHorizontalPosition(<DATA_TYPE_START>string<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets distance in points from the origin to the left side of the image.             
    /// </summary>
    <DATA_TYPE_START>double?<DATA_TYPE_END> getLeft() const;
    bool leftIsSet() const;
    void unsetLeft();
    void setLeft(<DATA_TYPE_START>double?<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets specifies where the distance to the image measured from.
    /// </summary>
    <DATA_TYPE_START>string<DATA_TYPE_END> getRelativeVerticalPosition() const;
    bool relativeVerticalPositionIsSet() const;
    void unsetRelativeVerticalPosition();
    void setRelativeVerticalPosition(<DATA_TYPE_START>string<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets distance in points from the origin to the top side of the image.
    /// </summary>
    <DATA_TYPE_START>double?<DATA_TYPE_END> getTop() const;
    bool topIsSet() const;
    void unsetTop();
    void setTop(<DATA_TYPE_START>double?<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets width of the drawing objects in points.
    /// </summary>
    <DATA_TYPE_START>double?<DATA_TYPE_END> getWidth() const;
    bool widthIsSet() const;
    void unsetWidth();
    void setWidth(<DATA_TYPE_START>double?<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets height of the drawing object in points.
    /// </summary>
    <DATA_TYPE_START>double?<DATA_TYPE_END> getHeight() const;
    bool heightIsSet() const;
    void unsetHeight();
    void setHeight(<DATA_TYPE_START>double?<DATA_TYPE_END> value);
    /// <summary>
    /// Gets or sets specifies how to wrap text around the image.
    /// </summary>
    <DATA_TYPE_START>string<DATA_TYPE_END> getWrapType() const;
    bool wrapTypeIsSet() const;
    void unsetWrapType();
    void setWrapType(<DATA_TYPE_START>string<DATA_TYPE_END> value);

protected:
    <DATA_TYPE_START>DocumentPosition<DATA_TYPE_END> m_Position;
    bool m_PositionIsSet;
    <DATA_TYPE_START>string<DATA_TYPE_END> m_RelativeHorizontalPosition;
    bool m_RelativeHorizontalPositionIsSet;
    <DATA_TYPE_START>double?<DATA_TYPE_END> m_Left;
    bool m_LeftIsSet;
    <DATA_TYPE_START>string<DATA_TYPE_END> m_RelativeVerticalPosition;
    bool m_RelativeVerticalPositionIsSet;
    <DATA_TYPE_START>double?<DATA_TYPE_END> m_Top;
    bool m_TopIsSet;
    <DATA_TYPE_START>double?<DATA_TYPE_END> m_Width;
    bool m_WidthIsSet;
    <DATA_TYPE_START>double?<DATA_TYPE_END> m_Height;
    bool m_HeightIsSet;
    <DATA_TYPE_START>string<DATA_TYPE_END> m_WrapType;
    bool m_WrapTypeIsSet;
};

}
}
}
}
}

#endif /* ASPOSE_WORDS_CLOUD_API_MODELS_DrawingObjectInsert_H_ */
