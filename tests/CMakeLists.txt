#[[
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="CMakeLists.txt">
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
]]

cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

project(tests CXX)
file(GLOB TEST_SOURCES *.cpp api/*.cpp TestBase.h)
add_executable(words-cloud-test ${TEST_SOURCES})
add_subdirectory(../thirdparty/gtest gtest)
target_link_libraries(words-cloud-test PRIVATE gtest Aspose::Words.Cloud)

target_compile_definitions(words-cloud-test PRIVATE TEST_ROOT="${CMAKE_CURRENT_SOURCE_DIR}")

if (COMMAND cotire)
  cotire(words-cloud-test)
endif()

add_test(NAME words-cloud-test COMMAND words-cloud-test_unity --gtest_output=xml:test_result.xml) 

if (MSVC)
  set(Boost_USE_STATIC_LIBS OFF) 
  set(Boost_USE_MULTITHREADED ON)
  set(Boost_USE_STATIC_RUNTIME OFF)
  find_package(Boost 1.68 REQUIRED COMPONENTS filesystem)
  find_package(cpprestsdk CONFIG REQUIRED)

  add_custom_command(TARGET words-cloud-test_unity POST_BUILD 
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_PROPERTY:cpprestsdk::cpprest,IMPORTED_LOCATION_DEBUG> $<TARGET_FILE_DIR:words-cloud-test_unity>
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_PROPERTY:cpprestsdk::cpprest,IMPORTED_LOCATION_RELEASE> $<TARGET_FILE_DIR:words-cloud-test_unity>)

  file(TO_NATIVE_PATH ${Boost_LIBRARY_DIR_DEBUG} DLL_ROOT_DEBUG)
  file(TO_NATIVE_PATH ${Boost_LIBRARY_DIR_RELEASE} DLL_ROOT_RELEASE)

  set_property(TEST words-cloud-test PROPERTY ENVIRONMENT "PATH=${DLL_ROOT_DEBUG};$ENV{PATH}")

  if (MSVC_IDE)
    configure_file(custom.user.props custom.user.props @ONLY)
    set_property(TARGET words-cloud-test PROPERTY VS_USER_PROPS "${CMAKE_CURRENT_BINARY_DIR}/custom.user.props")
    set_property(TARGET words-cloud-test_unity PROPERTY VS_USER_PROPS "${CMAKE_CURRENT_BINARY_DIR}/custom.user.props")
  endif()
endif()
