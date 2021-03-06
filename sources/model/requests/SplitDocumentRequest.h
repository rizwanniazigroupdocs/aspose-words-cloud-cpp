/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="SplitDocumentRequest.h">
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

#ifndef ASPOSE_WORDS_CLOUD_API_MODELS_SplitDocumentRequest_H_
#define ASPOSE_WORDS_CLOUD_API_MODELS_SplitDocumentRequest_H_

#include "HttpContent.h"
#include "cpprest/details/basic_types.h"
#include <boost/optional.hpp>

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

class SplitDocumentRequest {
    public: 
 SplitDocumentRequest(
            utility::string_t name,
            utility::string_t format,
            boost::optional< utility::string_t > folder,
            boost::optional< utility::string_t > storage,
            boost::optional< utility::string_t > loadEncoding,
            boost::optional< utility::string_t > password,
            boost::optional< utility::string_t > destFileName,
            boost::optional< int32_t > from,
            boost::optional< int32_t > to,
            boost::optional< bool > zipOutput,
            boost::optional< utility::string_t > fontsLocation
        );

        utility::string_t getName() const;
        void setName(utility::string_t name);

        utility::string_t getFormat() const;
        void setFormat(utility::string_t format);

        boost::optional< utility::string_t > getFolder() const;
        void setFolder(boost::optional< utility::string_t > folder);

        boost::optional< utility::string_t > getStorage() const;
        void setStorage(boost::optional< utility::string_t > storage);

        boost::optional< utility::string_t > getLoadEncoding() const;
        void setLoadEncoding(boost::optional< utility::string_t > loadEncoding);

        boost::optional< utility::string_t > getPassword() const;
        void setPassword(boost::optional< utility::string_t > password);

        boost::optional< utility::string_t > getDestFileName() const;
        void setDestFileName(boost::optional< utility::string_t > destFileName);

        boost::optional< int32_t > getFrom() const;
        void setFrom(boost::optional< int32_t > from);

        boost::optional< int32_t > getTo() const;
        void setTo(boost::optional< int32_t > to);

        boost::optional< bool > getZipOutput() const;
        void setZipOutput(boost::optional< bool > zipOutput);

        boost::optional< utility::string_t > getFontsLocation() const;
        void setFontsLocation(boost::optional< utility::string_t > fontsLocation);

    private:
        utility::string_t m_Name;
        utility::string_t m_Format;
        boost::optional< utility::string_t > m_Folder;
        boost::optional< utility::string_t > m_Storage;
        boost::optional< utility::string_t > m_LoadEncoding;
        boost::optional< utility::string_t > m_Password;
        boost::optional< utility::string_t > m_DestFileName;
        boost::optional< int32_t > m_From;
        boost::optional< int32_t > m_To;
        boost::optional< bool > m_ZipOutput;
        boost::optional< utility::string_t > m_FontsLocation;
};

}
}
}
}
}

#endif  /* ASPOSE_WORDS_CLOUD_API_MODELS_SplitDocumentRequest_H_ */
