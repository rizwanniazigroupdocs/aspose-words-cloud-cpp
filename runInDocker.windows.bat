mkdir out

docker build -f Dockerfile.tests.windows -t aspose-words-cloud-cpp-test:windows .
docker run --rm -m 2g -v "%cd%/scripts:C:/scripts" -v "%cd%/out:C:/out" aspose-words-cloud-cpp-test:windows cmd /c ".\scripts\runAll.bat %1 %2 %3