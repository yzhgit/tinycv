tinycv_populate_dep(googletest)

add_executable(tinycv_unittest ${TINYCV_UNITTEST_SRC})

target_compile_features(tinycv_unittest PRIVATE cxx_std_11)

if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj")
endif()

target_compile_definitions(tinycv_unittest PRIVATE TINYCV_UNITTEST_OPENCV)

target_include_directories(tinycv_unittest PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
    ${opencv_INCLUDE_DIRECTORIES}
    ${googletest_SOURCE_DIR}/include)

target_link_libraries(tinycv_unittest PRIVATE
    tinycv_static gtest_main ${opencv_LIBRARIES})
