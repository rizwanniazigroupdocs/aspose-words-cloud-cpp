cppcheck . --xml -iboost/ -iinstall/ -ithirdparty/ -iCMakeFiles/ --platform=win32W --enable=all --force --std=c++11 --suppress=useInitializationList --suppress=unusedFunction -Isources/ -Isources/model -Isources/model/requests --suppress=missingIncludeSystem --suppress=missingInclude --suppress=unmatchedSuppression --output-file=checkResult.xml