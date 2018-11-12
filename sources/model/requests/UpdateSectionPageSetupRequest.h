//UpdateSectionPageSetupRequest.h
#include "cpprest/details/basic_types.h"
#undef U
#include "PageSetup.h"
#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace model {

class UpdateSectionPageSetupRequest{
    public: 
    UpdateSectionPageSetupRequest(
        utility::string_t name,
                int32_t sectionIndex,
                std::shared_ptr<PageSetup> pageSetup,
                boost::optional<utility::string_t> folder,
                boost::optional<utility::string_t> storage,
                boost::optional<utility::string_t> loadEncoding,
                boost::optional<utility::string_t> password,
                boost::optional<utility::string_t> destFileName,
                boost::optional<utility::string_t> revisionAuthor,
                boost::optional<utility::string_t> revisionDateTime
        );

    public:
        utility::string_t name;
        int32_t sectionIndex;
        std::shared_ptr<PageSetup> pageSetup;
        boost::optional<utility::string_t> folder;
        boost::optional<utility::string_t> storage;
        boost::optional<utility::string_t> loadEncoding;
        boost::optional<utility::string_t> password;
        boost::optional<utility::string_t> destFileName;
        boost::optional<utility::string_t> revisionAuthor;
        boost::optional<utility::string_t> revisionDateTime;
};

}
}
}
}
