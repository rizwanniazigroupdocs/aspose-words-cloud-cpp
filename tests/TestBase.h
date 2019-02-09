#ifndef TEST_BASE
#define TEST_BASE

#include <boost/filesystem/path.hpp>

#include <gtest/gtest.h>
#include "WordsApi.h"

#define STCONVERT(s) utility::conversions::to_string_t(s)

using streambuf_t = std::basic_streambuf<utility::char_t>;

using namespace io::swagger::client::api;

std::shared_ptr<ApiConfiguration> get_config();

class InfrastructureTest : public ::testing::Test
{
protected:
    static boost::filesystem::path get_sdk_root();

    boost::filesystem::path LocalTestDataFolder{get_sdk_root()/"TestData"};

    virtual utility::string_t get_data_folder();

	void SetUp() override
    {
		m_Config = get_config();
	};
    static utility::string_t path_combine(const boost::filesystem::path& base, const utility::string_t& stringToAdd);
    static utility::string_t path_combine_url(const utility::string_t& base, const utility::string_t& stringToAdd);
    static utility::string_t cutFileExtension(const boost::filesystem::path& filename);
    boost::filesystem::path get_data_dir(const boost::filesystem::path& subfolder) const;

	static std::shared_ptr<HttpContent> generate_http_content_from_file(const boost::filesystem::path& filePath,
        const utility::string_t& filename = {}, const utility::string_t& contentType = {});

    static utility::string_t get_file_text(const boost::filesystem::path& file);

    static std::vector<boost::filesystem::path> get_directory_files(const boost::filesystem::path& dir);

public:
	void UploadFileToStorage(const utility::string_t& path, const boost::filesystem::path& filePath);
	bool GetIsExists(const utility::string_t& path);

public:
	std::shared_ptr<ApiConfiguration> get_configuration() const;
	std::shared_ptr<ApiClient> get_client();
	std::shared_ptr<WordsApi> get_api();

protected:
    const utility::string_t baseTestOutPath{_XPLATSTR("TestOut")};
    const utility::string_t remoteBaseTestDataFolder{_XPLATSTR("Temp/SdkTests/TestData")};
    const boost::filesystem::path commonFolder{"Common"};

private:
	std::shared_ptr<ApiClient> client;
	std::shared_ptr<WordsApi> api;
	std::shared_ptr<ApiConfiguration> m_Config;
};
#endif
