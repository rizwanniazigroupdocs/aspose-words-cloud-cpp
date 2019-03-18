git clone https://github.com/Microsoft/cpprestsdk.git

mkdir -p aspose-words-cloud-cpp/out

# Generate credentials
echo "{
        \"AppKey\" : \"$1\",
        \"AppSid\" : \"$2\",
        \"BaseUrl\" : \"$3\"
      }" > aspose-words-cloud-cpp/servercreds.json

# Compile aw
rm -r -f aspose-words-cloud-cpp/build
mkdir aspose-words-cloud-cpp/build

cmake -Dcpprestsdk_ROOT=install/cpprestsdk -DCMAKE_BUILD_TYPE=Debug -S aspose-words-cloud-cpp -B aspose-words-cloud-cpp/build 
cmake --build aspose-words-cloud-cpp/build --config Debug --target all_unity -- VERBOSE=1

# Run tests
cmake -E chdir aspose-words-cloud-cpp/build ctest -V -C Debug

# Run code check
cppcheck aspose-words-cloud-cpp  --quiet --xml -iboost/ -iinstall/ -ithirdparty/ -iCMakeFiles/ \
--platform=win32W --enable=all --force --std=c++11 --suppress=useInitializationList --suppress=unusedFunction \
-Iaspose-words-cloud-cpp/sources/ -Iaspose-words-cloud-cpp/sources/model -Iaspose-words-cloud-cpp/sources/model/requests --suppress=missingIncludeSystem --suppress=missingInclude \
--suppress=unmatchedSuppression --output-file=checkResult.xml

cp aspose-words-cloud-cpp/build/tests/test_result.xml aspose-words-cloud-cpp/out/test_result.xml
cp checkResult.xml aspose-words-cloud-cpp/out/checkResult.xml

