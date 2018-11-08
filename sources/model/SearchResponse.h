/**
 * Aspose.Words for Cloud API Reference
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 18.9.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SearchResponse.h
 *
 * This response should be returned by the service when handling: GET http://api.aspose.com/v1.1/words/Test.doc/search 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_SearchResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_SearchResponse_H_


#include "AsposeResponse.h"
#include "SearchResultsCollection.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// This response should be returned by the service when handling: GET http://api.aspose.com/v1.1/words/Test.doc/search 
/// </summary>
class  SearchResponse
    : public AsposeResponse
{
public:
    SearchResponse();
    virtual ~SearchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SearchResponse members

    /// <summary>
    /// A regular expression pattern used to find matches.
    /// </summary>
    utility::string_t getSearchingPattern() const;
    bool searchingPatternIsSet() const;
    void unsetSearchingPattern();
    void setSearchingPattern(utility::string_t value);
    /// <summary>
    /// Collection of search results.
    /// </summary>
    std::shared_ptr<SearchResultsCollection> getSearchResults() const;
    bool searchResultsIsSet() const;
    void unsetSearchResults();
    void setSearchResults(std::shared_ptr<SearchResultsCollection> value);

protected:
    utility::string_t m_SearchingPattern;
    bool m_SearchingPatternIsSet;
    std::shared_ptr<SearchResultsCollection> m_SearchResults;
    bool m_SearchResultsIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_SearchResponse_H_ */
