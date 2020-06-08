/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="SearchResponse.cpp">
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


#include "SearchResponse.h"

namespace aspose {
namespace words {
namespace cloud {
namespace api {
namespace models {

SearchResponse::SearchResponse()
{
    m_SearchingPattern = utility::conversions::to_string_t("");
    m_SearchingPatternIsSet = false;
    m_SearchResultsIsSet = false;
}

SearchResponse::~SearchResponse()
{
}

void SearchResponse::validate()
{
    // TODO: implement validation
}

web::json::value SearchResponse::toJson() const
{
    web::json::value val = this->WordsResponse::toJson();

    if(m_SearchingPatternIsSet)
    {
        val[_XPLATSTR("SearchingPattern")] = ModelBase::toJson(m_SearchingPattern);
    }
    if(m_SearchResultsIsSet)
    {
        val[_XPLATSTR("SearchResults")] = ModelBase::toJson(m_SearchResults);
    }

    return val;
}

void SearchResponse::fromJson(web::json::value& val)
{
    this->WordsResponse::fromJson(val);

    if(val.has_field(_XPLATSTR("SearchingPattern")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("SearchingPattern")];
        if(!fieldValue.is_null())
        {
            setSearchingPattern(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(_XPLATSTR("SearchResults")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("SearchResults")];
        if(!fieldValue.is_null())
        {
            <DATA_TYPE_START>SearchResultsCollection<DATA_TYPE_END> newItem(new SearchResultsCollection());
            newItem->fromJson(fieldValue);
            setSearchResults( newItem );
        }
    }
}

void SearchResponse::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    WordsResponse::toMultipart(multipart, prefix);
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    if(m_SearchingPatternIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("SearchingPattern"), m_SearchingPattern));
        
    }
    if(m_SearchResultsIsSet)
    {
        if (m_SearchResults.get())
        {
            m_SearchResults->toMultipart(multipart, _XPLATSTR("SearchResults."));
        }
        
    }
}

void SearchResponse::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    WordsResponse::fromMultiPart(multipart, prefix);

    if(multipart->hasContent(_XPLATSTR("SearchingPattern")))
    {
        setSearchingPattern(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("SearchingPattern"))));
    }
    if(multipart->hasContent(_XPLATSTR("SearchResults")))
    {
        if(multipart->hasContent(_XPLATSTR("SearchResults")))
        {
            <DATA_TYPE_START>SearchResultsCollection<DATA_TYPE_END> newItem(new SearchResultsCollection());
            newItem->fromMultiPart(multipart, _XPLATSTR("SearchResults."));
            setSearchResults( newItem );
        }
    }
}

<DATA_TYPE_START>string<DATA_TYPE_END> SearchResponse::getSearchingPattern() const
{
    return m_SearchingPattern;
}


void SearchResponse::setSearchingPattern(<DATA_TYPE_START>string<DATA_TYPE_END> value)
{
    m_SearchingPattern = value;
    m_SearchingPatternIsSet = true;
}
bool SearchResponse::searchingPatternIsSet() const
{
    return m_SearchingPatternIsSet;
}

void SearchResponse::unsetSearchingPattern()
{
    m_SearchingPatternIsSet = false;
}

<DATA_TYPE_START>SearchResultsCollection<DATA_TYPE_END> SearchResponse::getSearchResults() const
{
    return m_SearchResults;
}


void SearchResponse::setSearchResults(<DATA_TYPE_START>SearchResultsCollection<DATA_TYPE_END> value)
{
    m_SearchResults = value;
    m_SearchResultsIsSet = true;
}
bool SearchResponse::searchResultsIsSet() const
{
    return m_SearchResultsIsSet;
}

void SearchResponse::unsetSearchResults()
{
    m_SearchResultsIsSet = false;
}

}
}
}
}
}

