/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="DrawingObjectUpdate.h">
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

#ifndef ASPOSE_WORDS_CLOUD_API_MODELS_DrawingObjectUpdate_H_
#define ASPOSE_WORDS_CLOUD_API_MODELS_DrawingObjectUpdate_H_

#include "../ModelBase.h"
#include <cpprest/details/basic_types.h>

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

/// <summary>
/// Drawing object element for update.
/// </summary>
class DrawingObjectUpdate
    : public ModelBase
{
public:
    DrawingObjectUpdate();
    virtual ~DrawingObjectUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DrawingObjectUpdate members

    /// <summary>
    /// Gets or sets the height of the DrawingObject in points.
    /// </summary>
    double getHeight() const;
    bool heightIsSet() const;
    void unsetHeight();
    void setHeight(double value);

    /// <summary>
    /// Gets or sets the distance in points from the origin to the left side of the image.
    /// </summary>
    double getLeft() const;
    bool leftIsSet() const;
    void unsetLeft();
    void setLeft(double value);

    /// <summary>
    /// Gets or sets the relative horizontal position, from which the distance to the image is measured.
    /// </summary>
    utility::string_t getRelativeHorizontalPosition() const;
    bool relativeHorizontalPositionIsSet() const;
    void unsetRelativeHorizontalPosition();
    void setRelativeHorizontalPosition(utility::string_t value);

    /// <summary>
    /// Gets or sets the relative vertical position, from which the distance to the image measured.
    /// </summary>
    utility::string_t getRelativeVerticalPosition() const;
    bool relativeVerticalPositionIsSet() const;
    void unsetRelativeVerticalPosition();
    void setRelativeVerticalPosition(utility::string_t value);

    /// <summary>
    /// Gets or sets the distance in points from the origin to the top side of the image.
    /// </summary>
    double getTop() const;
    bool topIsSet() const;
    void unsetTop();
    void setTop(double value);

    /// <summary>
    /// Gets or sets the width of the DrawingObjects in points.
    /// </summary>
    double getWidth() const;
    bool widthIsSet() const;
    void unsetWidth();
    void setWidth(double value);

    /// <summary>
    /// Gets or sets the option that controls how to wrap text around the image.
    /// </summary>
    utility::string_t getWrapType() const;
    bool wrapTypeIsSet() const;
    void unsetWrapType();
    void setWrapType(utility::string_t value);

protected:
    double m_Height;
    bool m_HeightIsSet;

    double m_Left;
    bool m_LeftIsSet;

    utility::string_t m_RelativeHorizontalPosition;
    bool m_RelativeHorizontalPositionIsSet;

    utility::string_t m_RelativeVerticalPosition;
    bool m_RelativeVerticalPositionIsSet;

    double m_Top;
    bool m_TopIsSet;

    double m_Width;
    bool m_WidthIsSet;

    utility::string_t m_WrapType;
    bool m_WrapTypeIsSet;
};

}
}
}
}
}

#endif /* ASPOSE_WORDS_CLOUD_API_MODELS_DrawingObjectUpdate_H_ */
