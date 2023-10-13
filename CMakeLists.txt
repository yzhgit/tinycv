cmake_minimum_required(VERSION 3.14)
project(tinycv)

include(cmake/common.cmake)
include(cmake/deps.cmake)

# --------------------------------------------------------------------------- #

option(TINYCV_INSTALL "install tinycv libs and headers" ON)
option(TINYCV_BUILD_TESTS "build tests" ON)
option(TINYCV_BUILD_BENCHMARK "build benchmark" ON)
option(TINYCV_HOLD_DEPS "don't update dependencies" OFF)

if(MSVC)
    option(TINYCV_USE_MSVC_STATIC_RUNTIME "" ON)
endif()

option(TINYCV_USE_X86_64 "" ON)
option(TINYCV_USE_AARCH64 "" OFF)

# --------------------------------------------------------------------------- #

set(TINYCV_VERSION_MAJOR 0)
set(TINYCV_VERSION_MINOR 7)
set(TINYCV_VERSION_PATCH 0)

# --------------------------------------------------------------------------- #

set(TINYCV_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/tinycv/sys.cpp)
set(TINYCV_BENCHMARK_SRC )
set(TINYCV_UNITTEST_SRC )
set(TINYCV_INCLUDE_DIRECTORIES )
set(TINYCV_LINK_LIBRARIES )
set(TINYCV_COMPILE_DEFINITIONS )

# --------------------------------------------------------------------------- #

if(TINYCV_USE_MSVC_STATIC_RUNTIME)
    tinycv_use_msvc_static_runtime()
else()
    tinycv_use_msvc_dynamic_runtime()
endif()

# --------------------------------------------------------------------------- #

if(${CMAKE_VERSION} VERSION_GREATER_EQUAL "3.18.0")
    # suppress 'CMAKE_CUDA_ARCHITECTURES' warning
    cmake_policy(SET CMP0104 OLD)
endif()

if(TINYCV_USE_X86_64)
    include(cmake/x86.cmake)
endif()

if(TINYCV_USE_AARCH64)
    include(cmake/arm.cmake)
endif()

list(FILTER TINYCV_SRC EXCLUDE REGEX "(.*)_unittest\\.cpp$")
list(FILTER TINYCV_SRC EXCLUDE REGEX "(.*)_benchmark\\.cpp$")

add_library(tinycv_static STATIC ${TINYCV_SRC})
target_include_directories(tinycv_static PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:$<INSTALL_PREFIX>/include>
    ${TINYCV_INCLUDE_DIRECTORIES})
target_link_libraries(tinycv_static PUBLIC ${TINYCV_LINK_LIBRARIES})
target_compile_definitions(tinycv_static PUBLIC
    ${TINYCV_COMPILE_DEFINITIONS}
    TINYCV_VERSION_MAJOR=${TINYCV_VERSION_MAJOR}
    TINYCV_VERSION_MINOR=${TINYCV_VERSION_MINOR}
    TINYCV_VERSION_PATCH=${TINYCV_VERSION_PATCH})

target_compile_options(tinycv_static PRIVATE $<$<AND:$<COMPILE_LANGUAGE:CXX>,$<OR:$<CXX_COMPILER_ID:GNU>,$<CXX_COMPILER_ID:Clang>>>:-fno-exceptions -Wno-strict-aliasing>)
target_compile_features(tinycv_static PUBLIC cxx_std_11)

if(TINYCV_INSTALL)
    install(DIRECTORY include DESTINATION .)
    install(TARGETS tinycv_static DESTINATION lib)

    set(TINYCV_CMAKE_CONFIG_FILE ${CMAKE_CURRENT_BINARY_DIR}/generated/tinycv-config.cmake)
    configure_file(${CMAKE_CURRENT_LIST_DIR}/cmake/tinycv-config.cmake.in
        ${TINYCV_CMAKE_CONFIG_FILE}
        @ONLY)
    install(FILES ${TINYCV_CMAKE_CONFIG_FILE} DESTINATION lib/cmake/tinycv)
    unset(TINYCV_CMAKE_CONFIG_FILE)
endif()

if(TINYCV_BUILD_TESTS OR TINYCV_BUILD_BENCHMARK)
    include(cmake/opencv.cmake)
    if (TINYCV_BUILD_TESTS)
        include(cmake/unittest.cmake)
    endif()
    if(TINYCV_BUILD_BENCHMARK)
        include(cmake/benchmark.cmake)
    endif()
endif()
