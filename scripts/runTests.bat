cmake -E chdir aspose-words-cloud-cpp\build ctest -V -C Debug
cd aspose-words-cloud-cpp/build/tests
copy test_result.xml "C:/TestData/output/test_result.xml"