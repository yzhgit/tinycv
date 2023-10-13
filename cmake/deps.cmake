if(NOT TINYCV_DEPS_DIR)
    set(TINYCV_DEPS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/deps)
endif()

include(FetchContent)

set(FETCHCONTENT_BASE_DIR ${TINYCV_DEPS_DIR})
set(FETCHCONTENT_QUIET OFF)

if(TINYCV_HOLD_DEPS)
    set(FETCHCONTENT_UPDATES_DISCONNECTED ON)
endif()

# --------------------------------------------------------------------------- #

set(BUILD_GMOCK OFF CACHE BOOL "")
set(INSTALL_GTEST OFF CACHE BOOL "")
# Prevent overriding the parent project's compiler/linker settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

set(__GOOGLETEST_TAG__ release-1.10.0)

if(TINYCV_DEP_GOOGLETEST_PKG)
    tinycv_declare_pkg_dep(googletest
        ${TINYCV_DEP_GOOGLETEST_PKG})
else()
    if(NOT TINYCV_DEP_GOOGLETEST_GIT)
        set(TINYCV_DEP_GOOGLETEST_GIT "git@github.com:google/googletest.git")
    endif()
    tinycv_declare_git_dep(googletest
        ${TINYCV_DEP_GOOGLETEST_GIT}
        ${__GOOGLETEST_TAG__})
endif()

unset(__GOOGLETEST_TAG__)

# --------------------------------------------------------------------------- #

set(BENCHMARK_ENABLE_TESTING OFF CACHE BOOL "disable benchmark tests")
set(BENCHMARK_ENABLE_INSTALL OFF CACHE BOOL "")

set(__BENCHMARK__TAG__ v1.5.6)

if(TINYCV_DEP_BENCHMARK_PKG)
    tinycv_declare_pkg_dep(benchmark
        ${TINYCV_DEP_BENCHMARK_PKG})
else()
    if(NOT TINYCV_DEP_BENCHMARK_GIT)
        set(TINYCV_DEP_BENCHMARK_GIT "git@github.com:google/benchmark.git")
    endif()
    tinycv_declare_git_dep(benchmark
        ${TINYCV_DEP_BENCHMARK_GIT}
        ${__BENCHMARK__TAG__})
endif()

unset(__BENCHMARK__TAG__)

# --------------------------------------------------------------------------- #

set(BUILD_TESTS OFF CACHE BOOL "")
set(BUILD_PERF_TESTS OFF CACHE BOOL "")
set(BUILD_EXAMPLES OFF CACHE BOOL "")
set(BUILD_opencv_apps OFF CACHE BOOL "")
set(OPENCV_EXTRA_MODULES_PATH "${TINYCV_DEPS_DIR}/opencv_contrib/modules" CACHE INTERNAL "")

set(__OPENCV_TAG__ 4.4.0)

if(TINYCV_DEP_OPENCV_PKG)
    tinycv_declare_pkg_dep(opencv
        ${TINYCV_DEP_OPENCV_PKG})
else()
    if(NOT TINYCV_DEP_OPENCV_GIT)
        set(TINYCV_DEP_OPENCV_GIT "git@github.com:opencv/opencv.git")
    endif()
    tinycv_declare_git_dep(opencv
        ${TINYCV_DEP_OPENCV_GIT}
        ${__OPENCV_TAG__})
endif()

if(TINYCV_DEP_OPENCV_CONTRIB_PKG)
    tinycv_declare_pkg_dep(opencv_contrib
        ${TINYCV_DEP_OPENCV_CONTRIB_PKG})
else()
    if(NOT TINYCV_DEP_OPENCV_CONTRIB_GIT)
        set(TINYCV_DEP_OPENCV_CONTRIB_GIT "git@github.com:opencv/opencv_contrib.git")
    endif()
    tinycv_declare_git_dep(opencv_contrib
        ${TINYCV_DEP_OPENCV_CONTRIB_GIT}
        ${__OPENCV_TAG__})
endif()

unset(__OPENCV_TAG__)
