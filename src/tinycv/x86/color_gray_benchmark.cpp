// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#include <memory>

#include "tinycv/cvtcolor.h"
#include "tinycv/debug.h"

#include <benchmark/benchmark.h>

namespace {

template<typename T>
void BM_BGR2GRAY_tinycv_x86(benchmark::State &state)
{
    int32_t width = state.range(0);
    int32_t height = state.range(1);
    std::unique_ptr<T[]> src(new T[width * height * 3]);
    std::unique_ptr<T[]> dst(new T[width * height]);
    tinycv::debug::randomFill<T>(src.get(), width * height * 3, 0, 255);
    for (auto _ : state) {
        tinycv::BGR2GRAY<T>(height, width, width * 3, src.get(), width, dst.get());
    }
    state.SetItemsProcessed(state.iterations() * 1);
}

using namespace tinycv::debug;

BENCHMARK_TEMPLATE(BM_BGR2GRAY_tinycv_x86, float)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });
BENCHMARK_TEMPLATE(BM_BGR2GRAY_tinycv_x86, uint8_t)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });

#ifdef TINYCV_BENCHMARK_OPENCV
template<typename T>
void BM_BGR2GRAY_opencv_x86(benchmark::State &state)
{
    int32_t width = state.range(0);
    int32_t height = state.range(1);
    std::unique_ptr<T[]> src(new T[width * height * 3]);
    std::unique_ptr<T[]> dst(new T[width * height]);
    tinycv::debug::randomFill<T>(src.get(), width * height * 3, 0, 255);
    cv::Mat srcMat(height, width, CV_MAKETYPE(cv::DataType<T>::depth, 3), src.get());
    cv::Mat dstMat(height, width, CV_MAKETYPE(cv::DataType<T>::depth, 1), dst.get());
    for (auto _ : state) {
        cv::cvtColor(srcMat, dstMat, cv::COLOR_BGR2GRAY);
    }
    state.SetItemsProcessed(state.iterations() * 1);
}

BENCHMARK_TEMPLATE(BM_BGR2GRAY_opencv_x86, float)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });
BENCHMARK_TEMPLATE(BM_BGR2GRAY_opencv_x86, uint8_t)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });

#endif //! TINYCV_BENCHMARK_OPENCV
} // namespace
