/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="UpdateTablePropertiesWithoutNodePathRequest.h">
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
#pragma once
#ifndef updateTablePropertiesWithoutNodePath_H
#define updateTablePropertiesWithoutNodePath_H 

#include "cpprest/details/basic_types.h"
#include "TableProperties.h"
#include <boost/optional.hpp>

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

class UpdateTablePropertiesWithoutNodePathRequest{
    public: 
     UpdateTablePropertiesWithoutNodePathRequest(
        utility::string_t name,
                int32_t index,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password,
                boost::optional<utility::string_t> destFileName,
                boost::optional<utility::string_t> revisionAuthor,
                boost::optional<utility::string_t> revisionDateTime,
                boost::optional<std::shared_ptr<TableProperties>> properties
        );

        utility::string_t getName() const;
        void setName(utility::string_t name);

        int32_t getIndex() const;
        void setIndex(int32_t index);

        boost::optional<utility::string_t> getFolder() const;
        void setFolder(boost::optional<utility::string_t> folder);

        boost::optional<utility::string_t> getStorage() const;
        void setStorage(boost::optional<utility::string_t> storage);

        boost::optional<utility::string_t> getLoadEncoding() const;
        void setLoadEncoding(boost::optional<utility::string_t> loadEncoding);

        boost::optional<utility::string_t> getPassword() const;
        void setPassword(boost::optional<utility::string_t> password);

        boost::optional<utility::string_t> getDestFileName() const;
        void setDestFileName(boost::optional<utility::string_t> destFileName);

        boost::optional<utility::string_t> getRevisionAuthor() const;
        void setRevisionAuthor(boost::optional<utility::string_t> revisionAuthor);

        boost::optional<utility::string_t> getRevisionDateTime() const;
        void setRevisionDateTime(boost::optional<utility::string_t> revisionDateTime);

        boost::optional<std::shared_ptr<TableProperties>> getProperties() const;
        void setProperties(boost::optional<std::shared_ptr<TableProperties>> properties);
    private:
        utility::string_t m_name;
        int32_t m_index;
        boost::optional<utility::string_t> m_folder;
        boost::optional<utility::string_t> m_storage;
        boost::optional<utility::string_t> m_loadEncoding;
        boost::optional<utility::string_t> m_password;
        boost::optional<utility::string_t> m_destFileName;
        boost::optional<utility::string_t> m_revisionAuthor;
        boost::optional<utility::string_t> m_revisionDateTime;
        boost::optional<std::shared_ptr<TableProperties>> m_properties;
};

}
}
}
}
}

#endif
