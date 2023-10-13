set(BUILD_SHARED_LIBS OFF CACHE INTERNAL "")
tinycv_populate_dep(benchmark)

add_executable(tinycv_benchmark
    ${TINYCV_BENCHMARK_SRC}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/tinycv/benchmark_main.cc)

target_compile_definitions(tinycv_benchmark PRIVATE TINYCV_BENCHMARK_OPENCV)

target_include_directories(tinycv_benchmark PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
    ${opencv_INCLUDE_DIRECTORIES}
    ${benchmark_SOURCE_DIR}/include)

target_link_libraries(tinycv_benchmark PRIVATE tinycv_static benchmark
                      ${opencv_LIBRARIES})
