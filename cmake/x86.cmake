# CV x86 source cmake script
file(GLOB TINYCV_X86_PUBLIC_HEADERS src/tinycv/x86/*.h)
install(FILES ${TINYCV_X86_PUBLIC_HEADERS}
        DESTINATION include/tinycv/x86)

# set(WITH_X86 ON)
set(TINYCV_USE_X86 ON)

list(APPEND TINYCV_COMPILE_DEFINITIONS TINYCV_USE_X86_64)

file(GLOB TINYCV_X86_SSE_SRC
     src/tinycv/x86/*.cpp
     src/tinycv/x86/*x86_64.S)
file(GLOB TINYCV_X86_AVX_SRC
     src/tinycv/x86/avx/*.cpp)
file(GLOB TINYCV_X86_FMA_SRC
     src/tinycv/x86/fma/*.cpp)

set(TINYCV_X86_SRC
    ${TINYCV_X86_SSE_SRC}
    ${TINYCV_X86_AVX_SRC}
    ${TINYCV_X86_FMA_SRC})

foreach(filename ${TINYCV_X86_FMA_SRC})
    set_source_files_properties(${filename} PROPERTIES COMPILE_FLAGS "${FMA_ENABLED_FLAGS}")
endforeach()
foreach(filename ${TINYCV_X86_AVX_SRC})
    set_source_files_properties(${filename} PROPERTIES COMPILE_FLAGS "${AVX_ENABLED_FLAGS}")
endforeach()
foreach(filename ${TINYCV_X86_SSE_SRC})
    set_source_files_properties(${filename} PROPERTIES COMPILE_FLAGS "${SSE_ENABLED_FLAGS}")
endforeach()

list(APPEND TINYCV_SRC ${TINYCV_X86_SRC})

# glog benchmark and unittest sources
file(GLOB TINYCV_X86_BENCHMARK_SRC "src/tinycv/x86/*_benchmark.cpp")
file(GLOB TINYCV_X86_UNITTEST_SRC "src/tinycv/x86/*_unittest.cpp")
list(APPEND TINYCV_BENCHMARK_SRC ${TINYCV_X86_BENCHMARK_SRC})
list(APPEND TINYCV_UNITTEST_SRC ${TINYCV_X86_UNITTEST_SRC})
