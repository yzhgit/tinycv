@echo off

set BuildDir="build"

if not exist %BuildDir% (
    echo "create build directory"
    md %BuildDir%
)

pushd %BuildDir%

cmake %* -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=install ..
cmake --build . --config Release --parallel
cmake --install . --config Release

popd
