#include "TestBase.h"

#include <gmock/gmock.h>

using ::testing::AllOf;
using ::testing::HasSubstr;

#include <string>
#include <iostream>
#include <regex>

namespace fs = boost::filesystem;

class ConfigurationTest : public InfrastructureTest {
protected:
	utility::string_t dataFolder = STCONVERT("BaseApiTest");
};

///Checks that debug message is writing when debug mode is turned on
TEST_F(ConfigurationTest, TestDebugMode) {
    fs::path filePath = get_data_dir(commonFolder) / "test_multi_pages.docx";
    auto remoteName = STCONVERT("TestDebugMode.docx");
    utility::string_t fullName = path_combine(dataFolder, remoteName);

	auto client = get_client();
	auto newConfig = get_config();
	newConfig->setDebugMode(true);
    std::shared_ptr<WordsApi> api= std::make_shared<WordsApi>(client);
    std::shared_ptr<DeleteFieldsRequest> request= std::make_shared<DeleteFieldsRequest>(remoteName, dataFolder, boost::none, boost::none,
		boost::none, boost::none, boost::none, boost::none, boost::none);

	UploadFileToStorage(fullName, filePath);

	utility::stringstream_t ss;
    auto outbuf = ucout.rdbuf(ss.rdbuf());
    client->setConfiguration(newConfig);

    api->deleteFields(request).get();

	utility::string_t res = ss.str(),
		fwSlash = _XPLATSTR("/"),
		expectedUri = _XPLATSTR("DELETE ") +
						fwSlash + newConfig->getApiVersion() + fwSlash + _XPLATSTR("words") +
						fwSlash + remoteName + fwSlash + _XPLATSTR("fields"),
		expectedResponseHeader = _XPLATSTR("Response HTTP/1.1 200 OK"),
		expectedResponseBody = _XPLATSTR("{\"Code\":200,\"Status\":\"OK\"}");

    ucout.rdbuf(outbuf);

    EXPECT_THAT(res, AllOf(HasSubstr(expectedUri), HasSubstr(expectedResponseHeader), HasSubstr(expectedResponseBody)));

}

///Checks that API version is properly applied to path building
TEST_F(ConfigurationTest, TestVersionIsUsing) {
    utility::string_t localName = _XPLATSTR("test_multi_pages.docx");
    utility::string_t remoteName = _XPLATSTR("TestVersionIsUsing.docx");
    utility::string_t fullName = path_combine(dataFolder, remoteName);
    utility::string_t filePath = path_combine(get_data_dir(commonFolder), localName);


    auto client = get_client();
	auto newConfig = get_config();
	newConfig->setDebugMode(true);
	newConfig->setApiVersion(_XPLATSTR("v2"));

    std::shared_ptr<WordsApi> api= std::make_shared<WordsApi>(client);

    std::shared_ptr<DeleteFieldsRequest> request= std::make_shared<DeleteFieldsRequest>(remoteName, dataFolder, boost::none, boost::none,
		boost::none, boost::none, boost::none, boost::none, boost::none);
	ucout << "Uploading";
	UploadFileToStorage(fullName, filePath);

	utility::stringstream_t ss;
	streambuf_t* outbuf = ucout.rdbuf(ss.rdbuf());
    client->setConfiguration(newConfig);

	api->deleteFields(request).get();

	utility::string_t res = ss.str(),
		fwSlash = _XPLATSTR("/"),
		expectedUri = _XPLATSTR("DELETE ") +
		fwSlash + newConfig->getApiVersion() + fwSlash + _XPLATSTR("words") +
		fwSlash + remoteName + fwSlash + _XPLATSTR("fields"),
		expectedResponseHeader = _XPLATSTR("Response HTTP/1.1 200 OK"),
		expectedResponseBody = _XPLATSTR("{\"Code\":200,\"Status\":\"OK\"}");
    ucout.rdbuf(outbuf);

    EXPECT_THAT(res, AllOf(HasSubstr(expectedUri), HasSubstr(expectedResponseHeader), HasSubstr(expectedResponseBody)));

}

#if 0

class BaseApiTest : public InfrastructureTest {

};
/// <summary>
/// If file does not exist, 400 response should be returned with message "Error while loading file ".
/// </summary>
TEST_F(BaseApiTest, TestHandleErrors) {
	utility::string_t name = _XPLATSTR("noFileWithThisName.docx");

	try {
		std::shared_ptr<GetSectionsRequest> request= std::make_shared<GetSectionsRequest>(name, boost::none, boost::none, boost::none, boost::none);
		auto response = get_api()->getSections(request).wait();

		ASSERT_FALSE(true) << "Expected exception has not been thrown";
	}
	catch (ApiException& exception) {
		ASSERT_EQ(400, exception.error_code().value()) << "Exception code is not equals to 400";
		std::string message((std::istreambuf_iterator<char>(*(exception.getContent()))), std::istreambuf_iterator<char>());
		web::json::value actual = web::json::value::parse(STCONVERT(message));
		ASSERT_TRUE(actual.has_field(STCONVERT("Message")));
		ASSERT_EQ(STCONVERT("Error while loading file 'noFileWithThisName.docx' from storage:"),
			actual[STCONVERT("Message")].as_string().substr(0, 64)) << "Wrong message: " << message;
	}
}
/// <summary>
/// Check if all API methods have covered by tests
/// </summary>
TEST_F(BaseApiTest, TestApiCoverage) {
	utility::string_t sdkRoot = get_sdk_root();
	auto rootParts = split(sdkRoot);
	rootParts.pop_back();
	utility::string_t testsPath = join(rootParts) + STCONVERT("\\tests");
	utility::string_t apiPath = join(rootParts) + STCONVERT("\\sources\\api\\WordsApi.h");

	utility::string_t apiCode = get_file_text(apiPath);
	std::string apiCode_str(apiCode.begin(), apiCode.end());
	std::vector<utility::string_t> apiMethods;
	std::smatch match;
	std::regex regEx(">> (.*)\\(");
	while (std::regex_search(apiCode_str, match, regEx)) {
		apiMethods.push_back(STCONVERT(match[1].str()));
		apiCode_str = match.suffix().str();
	}

	std::vector<utility::string_t> files = get_directory_files(testsPath);
	utility::string_t testsCode;
	for (auto file : files)
		testsCode += get_file_text(file);

	std::vector<utility::string_t> uncoveredMethods;
	for (auto method : apiMethods) {
		size_t pos = testsCode.find(STCONVERT("->") + method + STCONVERT("("), 0);
		if (pos == std::wstring::npos) {
			uncoveredMethods.push_back(method);
		}
	}
	ASSERT_EQ(0, uncoveredMethods.size()) << "Found uncovered methods: " << std::endl << join(uncoveredMethods, STCONVERT("\n"));

}
#endif

TEST_F(InfrastructureTest, OAuthTest)
{
	std::shared_ptr<ApiClient> client = get_client();
	client->requestToken().wait();
	ASSERT_TRUE(true);
}

#pragma region Upload To Storage Tests
class StorageApiTest : public InfrastructureTest {
protected:
	utility::string_t get_data_folder() override {
        return _XPLATSTR("Temp\\SdkTests\\TestData\\DocumentElements\\Bookmarks");
	}
};

TEST_F(StorageApiTest, UploadToStorageTestPNG) {
	utility::string_t localName = STCONVERT("Aspose Logo.png"),
		remoteName = STCONVERT("AsposeLogo.png"),
		fullName = path_combine(get_data_folder(), remoteName);
	utility::string_t filePath = path_combine(get_data_dir(commonFolder), localName);

	UploadFileToStorage(fullName, filePath);
}

TEST_F(StorageApiTest, UploadToStorageTestDOCX) {
	utility::string_t localName = STCONVERT("test_doc.docx"),
		remoteName = STCONVERT("TestDoc.docx"),
		fullName = path_combine(get_data_folder(), remoteName);
	utility::string_t filePath = path_combine(get_data_dir(commonFolder), localName);

	UploadFileToStorage(fullName, filePath);
}

TEST_F(StorageApiTest, TestIsExists) {
	utility::string_t localName = STCONVERT("test_doc.docx"),
		remoteName = STCONVERT("TestDoc.docx"),
		fullName = path_combine(get_data_folder(), remoteName);
	utility::string_t filePath = path_combine(get_data_dir(commonFolder), localName);

	UploadFileToStorage(fullName, filePath);

	ASSERT_TRUE(GetIsExists(fullName));
}

TEST_F(StorageApiTest, TestIsNotExists) {
	ASSERT_FALSE(GetIsExists(STCONVERT("NoSuchFile.ext")));
}
#pragma endregion
