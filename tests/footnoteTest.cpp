/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="footnoteTest.cpp">
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
#include "TestBase.h"

/// <summary>
/// Example of how to work with footnotes
/// </summary>
class FootnoteTest : public InfrastructureTest {
protected:
	utility::string_t dataFolder = path_combine_url(remoteBaseTestDataFolder, STCONVERT("DocumentElements/Footnotes")),
		footnoteFolder = STCONVERT("DocumentElements/Footnotes");
};

/// <summary>
/// Test for adding footnote
/// </summary>
TEST_F(FootnoteTest, TestPostFootnote) {
	utility::string_t
		localName = STCONVERT("Footnote.doc"),
		remoteName = STCONVERT("TestPutFootnote.docx"),
		fullName = path_combine_url(dataFolder, remoteName),
		filePath = path_combine(get_data_dir(footnoteFolder), localName);

	std::shared_ptr<Footnote> footnote= std::make_shared<Footnote>();
	footnote->setText(STCONVERT("new text"));

	UploadFileToStorage(fullName, filePath);

	std::shared_ptr<InsertFootnoteRequest> request= std::make_shared<InsertFootnoteRequest>(remoteName, footnote, STCONVERT("sections/0"), dataFolder, boost::none, boost::none,
		boost::none, boost::none, boost::none, boost::none);

	AsposeResponse<FootnoteResponse> actual = get_api()->insertFootnote(request).get();

	ASSERT_EQ(200, actual.httpResponse->status_code());
}

/// <summary>
/// Test for deleting footnote
/// </summary>
TEST_F(FootnoteTest, TestDeleteFootnote) {
	utility::string_t
		localName = STCONVERT("Footnote.doc"),
		remoteName = STCONVERT("TestDeleteFootnote.docx"),
		fullName = path_combine_url(dataFolder, remoteName),
		filePath = path_combine(get_data_dir(footnoteFolder), localName);

	int32_t index = 0;

	UploadFileToStorage(fullName, filePath);

	std::shared_ptr<DeleteFootnoteRequest> request=
			std::make_shared<DeleteFootnoteRequest>(remoteName, STCONVERT(""), index, dataFolder,
		boost::none, boost::none, boost::none, boost::none, boost::none, boost::none);

	std::shared_ptr<web::http::http_response> actual = get_api()->deleteFootnote(request).get();

	ASSERT_EQ(200, actual->status_code());
}

/// <summary>
/// Test for getting footnotes
/// </summary>
TEST_F(FootnoteTest, TestGetFootnotes) {
	utility::string_t
		localName = STCONVERT("Footnote.doc"),
		remoteName = STCONVERT("TestGetFootnotes.docx"),
		fullName = path_combine_url(dataFolder, remoteName),
		filePath = path_combine(get_data_dir(footnoteFolder), localName);

	UploadFileToStorage(fullName, filePath);

	std::shared_ptr<GetFootnotesRequest> request=
			std::make_shared<GetFootnotesRequest>(remoteName, STCONVERT("sections/0"), dataFolder,
		boost::none, boost::none, boost::none);

	AsposeResponse<FootnotesResponse> actual = get_api()->getFootnotes(request).get();

	ASSERT_EQ(200, actual.httpResponse->status_code());
}

/// <summary>
/// Test for getting footnote
/// </summary>
TEST_F(FootnoteTest, TestGetFootnote) {
	utility::string_t
		localName = STCONVERT("Footnote.doc"),
		remoteName = STCONVERT("TestGetFootnote.docx"),
		fullName = path_combine_url(dataFolder, remoteName),
		filePath = path_combine(get_data_dir(footnoteFolder), localName);
	int32_t index = 0;

	UploadFileToStorage(fullName, filePath);

	std::shared_ptr<GetFootnoteRequest> request=
			std::make_shared<GetFootnoteRequest>(remoteName, STCONVERT(""), index, dataFolder, boost::none,
		boost::none, boost::none);

	AsposeResponse<FootnoteResponse> actual = get_api()->getFootnote(request).get();

	ASSERT_EQ(200, actual.httpResponse->status_code());
}

/// <summary>
/// Test for updating footnote
/// </summary>
TEST_F(FootnoteTest, TestPutFootnote) {
	utility::string_t
		localName = STCONVERT("Footnote.doc"),
		remoteName = STCONVERT("TestPostFootnote.docx"),
		fullName = path_combine_url(dataFolder, remoteName),
		filePath = path_combine(get_data_dir(footnoteFolder), localName);
	int32_t index = 0;
	std::shared_ptr<Footnote> footnote= std::make_shared<Footnote>();
	footnote->setText(STCONVERT("new text is here"));

	UploadFileToStorage(fullName, filePath);

	std::shared_ptr<UpdateFootnoteRequest> request= std::make_shared<UpdateFootnoteRequest>(remoteName, footnote, STCONVERT("sections/0"), index, dataFolder, boost::none,
		boost::none, boost::none, boost::none, boost::none, boost::none);

	AsposeResponse<FootnoteResponse> actual = get_api()->updateFootnote(request).get();

	ASSERT_EQ(200, actual.httpResponse->status_code());
}

/// <summary>
/// Test for adding footnote
/// </summary>
TEST_F(FootnoteTest, TestPostFootnoteWithoutNodePath) {
	utility::string_t
		localName = STCONVERT("Footnote.doc"),
		remoteName = STCONVERT("TestPutFootnoteWithoutNodePath.docx"),
		fullName = path_combine_url(dataFolder, remoteName),
		filePath = path_combine(get_data_dir(footnoteFolder), localName);

	std::shared_ptr<Footnote> footnote = std::make_shared<Footnote>();
	footnote->setFootnoteType(STCONVERT("Endnote"));
	footnote->setText(STCONVERT("test endnote"));

	UploadFileToStorage(fullName, filePath);

	std::shared_ptr<InsertFootnoteWithoutNodePathRequest> request = std::make_shared<InsertFootnoteWithoutNodePathRequest>(remoteName, footnote, dataFolder, boost::none,
		boost::none, boost::none, boost::none, boost::none, boost::none);

	AsposeResponse<FootnoteResponse> actual = get_api()->insertFootnoteWithoutNodePath(request).get();

	ASSERT_EQ(200, actual.httpResponse->status_code());
}

/// <summary>
/// Test for deleting footnote
/// </summary>
TEST_F(FootnoteTest, TestDeleteFootnoteWithoutNodePath) {
	utility::string_t
		localName = STCONVERT("Footnote.doc"),
		remoteName = STCONVERT("TestDeleteFootnoteWithoutNodePath.docx"),
		fullName = path_combine_url(dataFolder, remoteName),
		filePath = path_combine(get_data_dir(footnoteFolder), localName);

	int32_t index = 0;

	UploadFileToStorage(fullName, filePath);

	std::shared_ptr<DeleteFootnoteWithoutNodePathRequest> request =
		std::make_shared<DeleteFootnoteWithoutNodePathRequest>(remoteName, index, dataFolder,
			boost::none, boost::none, boost::none, boost::none, boost::none, boost::none);

	std::shared_ptr<web::http::http_response> actual = get_api()->deleteFootnoteWithoutNodePath(request).get();

	ASSERT_EQ(200, actual->status_code());
}

/// <summary>
/// Test for getting footnotes
/// </summary>
TEST_F(FootnoteTest, TestGetFootnotesWithoutNodePath) {
	utility::string_t
		localName = STCONVERT("Footnote.doc"),
		remoteName = STCONVERT("TestGetFootnotesWithoutNodePath.docx"),
		fullName = path_combine_url(dataFolder, remoteName),
		filePath = path_combine(get_data_dir(footnoteFolder), localName);

	UploadFileToStorage(fullName, filePath);

	std::shared_ptr<GetFootnotesWithoutNodePathRequest> request =
		std::make_shared<GetFootnotesWithoutNodePathRequest>(remoteName, dataFolder,
			boost::none, boost::none, boost::none);

	AsposeResponse<FootnotesResponse> actual = get_api()->getFootnotesWithoutNodePath(request).get();

	ASSERT_EQ(200, actual.httpResponse->status_code());
}

/// <summary>
/// Test for getting footnote
/// </summary>
TEST_F(FootnoteTest, TestGetFootnoteWithoutNodePath) {
	utility::string_t
		localName = STCONVERT("Footnote.doc"),
		remoteName = STCONVERT("TestGetFootnoteWithoutNodePath.docx"),
		fullName = path_combine_url(dataFolder, remoteName),
		filePath = path_combine(get_data_dir(footnoteFolder), localName);
	int32_t index = 0;

	UploadFileToStorage(fullName, filePath);

	std::shared_ptr<GetFootnoteWithoutNodePathRequest> request =
		std::make_shared<GetFootnoteWithoutNodePathRequest>(remoteName, index, dataFolder, boost::none,
			boost::none, boost::none);

	AsposeResponse<FootnoteResponse> actual = get_api()->getFootnoteWithoutNodePath(request).get();

	ASSERT_EQ(200, actual.httpResponse->status_code());
}

/// <summary>
/// Test for updating footnote
/// </summary>
TEST_F(FootnoteTest, TestPutFootnoteWithoutNodePath) {
	utility::string_t
		localName = STCONVERT("Footnote.doc"),
		remoteName = STCONVERT("TestPostFootnote.docx"),
		fullName = path_combine_url(dataFolder, remoteName),
		filePath = path_combine(get_data_dir(footnoteFolder), localName);
	int32_t index = 0;
	std::shared_ptr<Footnote> footnote = std::make_shared<Footnote>();
	footnote->setText(STCONVERT("new text is here"));

	UploadFileToStorage(fullName, filePath);

	std::shared_ptr<UpdateFootnoteWithoutNodePathRequest> request = std::make_shared<UpdateFootnoteWithoutNodePathRequest>(remoteName, footnote, index, dataFolder, boost::none,
		boost::none, boost::none, boost::none, boost::none, boost::none);

	AsposeResponse<FootnoteResponse> actual = get_api()->updateFootnoteWithoutNodePath(request).get();

	ASSERT_EQ(200, actual.httpResponse->status_code());
}