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
#include <opencv2/imgproc.hpp>

namespace {

enum Color2YUV420Mode { RGB2I420_MODE,
                        BGR2I420_MODE,
                        RGB2YV12_MODE,
                        BGR2YV12_MODE };

template<typename T, Color2YUV420Mode mode>
void BM_Color2YUV420_tinycv_x86(benchmark::State &state)
{
    int32_t width = state.range(0);
    int32_t height = state.range(1);
    std::unique_ptr<uint8_t[]> src(new uint8_t[width * height * 3]);
    std::unique_ptr<uint8_t[]> dst(new uint8_t[width * height * 3 / 2]);
    tinycv::debug::randomFill<uint8_t>(src.get(), width * height * 3, 0, 255);
    for (auto _ : state) {
        if (mode == RGB2I420_MODE) {
            tinycv::RGB2I420<uint8_t>(height, width, width * 3, src.get(), width, dst.get());
        } else if (mode == RGB2YV12_MODE) {
            tinycv::RGB2YV12<uint8_t>(height, width, width * 3, src.get(), width, dst.get());
        } else if (mode == BGR2I420_MODE) {
            tinycv::BGR2I420<uint8_t>(height, width, width * 3, src.get(), width, dst.get());
        } else if (mode == BGR2YV12_MODE) {
            tinycv::BGR2YV12<uint8_t>(height, width, width * 3, src.get(), width, dst.get());
        }
    }
    state.SetItemsProcessed(state.iterations() * 1);
}

enum YUV4202ColorMode { I4202RGB_MODE,
                        I4202BGR_MODE,
                        YV122RGB_MODE,
                        YV122BGR_MODE };

template<typename T, YUV4202ColorMode mode>
void BM_YUV4202Color_tinycv_x86(benchmark::State &state)
{
    int32_t width = state.range(0);
    int32_t height = state.range(1);
    std::unique_ptr<uint8_t[]> src(new uint8_t[width * height * 3 / 2]);
    std::unique_ptr<uint8_t[]> dst(new uint8_t[width * height * 3]);
    tinycv::debug::randomFill<uint8_t>(src.get(), width * height * 3 / 2, 0, 255);
    for (auto _ : state) {
        if (mode == I4202RGB_MODE) {
            tinycv::I4202RGB<uint8_t>(height, width, width, src.get(), width * 3, dst.get());
        } else if (mode == YV122RGB_MODE) {
            tinycv::YV122RGB<uint8_t>(height, width, width, src.get(), width * 3, dst.get());
        } else if (mode == I4202BGR_MODE) {
            tinycv::I4202BGR<uint8_t>(height, width, width, src.get(), width * 3, dst.get());
        } else if (mode == YV122BGR_MODE) {
            tinycv::YV122BGR<uint8_t>(height, width, width, src.get(), width * 3, dst.get());
        }
    }
    state.SetItemsProcessed(state.iterations() * 1);
}

using namespace tinycv::debug;

BENCHMARK_TEMPLATE(BM_Color2YUV420_tinycv_x86, uint8_t, RGB2I420_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });
BENCHMARK_TEMPLATE(BM_Color2YUV420_tinycv_x86, uint8_t, BGR2I420_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });
BENCHMARK_TEMPLATE(BM_Color2YUV420_tinycv_x86, uint8_t, RGB2YV12_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });
BENCHMARK_TEMPLATE(BM_Color2YUV420_tinycv_x86, uint8_t, BGR2YV12_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });

BENCHMARK_TEMPLATE(BM_YUV4202Color_tinycv_x86, uint8_t, I4202RGB_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });
BENCHMARK_TEMPLATE(BM_YUV4202Color_tinycv_x86, uint8_t, I4202BGR_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });
BENCHMARK_TEMPLATE(BM_YUV4202Color_tinycv_x86, uint8_t, YV122RGB_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });
BENCHMARK_TEMPLATE(BM_YUV4202Color_tinycv_x86, uint8_t, YV122BGR_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });

#ifdef TINYCV_BENCHMARK_OPENCV

template<typename T, Color2YUV420Mode mode>
void BM_Color2YUV420_opencv_x86(benchmark::State &state)
{
    int32_t width = state.range(0);
    int32_t height = state.range(1);
    std::unique_ptr<uint8_t[]> src(new uint8_t[width * height * 3]);
    std::unique_ptr<uint8_t[]> dst(new uint8_t[width * height * 3 / 2]);
    tinycv::debug::randomFill<uint8_t>(src.get(), width * height * 3, 0, 255);
    cv::Mat srcMat(height, width, CV_MAKETYPE(cv::DataType<uint8_t>::depth, 3), src.get());
    cv::Mat dstMat(3 * height / 2, width, CV_MAKETYPE(cv::DataType<uint8_t>::depth, 1), dst.get());
    for (auto _ : state) {
        if (mode == RGB2I420_MODE) {
            cv::cvtColor(srcMat, dstMat, cv::COLOR_RGB2YUV_I420);
        } else if (mode == RGB2YV12_MODE) {
            cv::cvtColor(srcMat, dstMat, cv::COLOR_RGB2YUV_YV12);
        } else if (mode == BGR2I420_MODE) {
            cv::cvtColor(srcMat, dstMat, cv::COLOR_BGR2YUV_I420);
        } else if (mode == BGR2YV12_MODE) {
            cv::cvtColor(srcMat, dstMat, cv::COLOR_BGR2YUV_YV12);
        }
    }
    state.SetItemsProcessed(state.iterations() * 1);
}

template<typename T, YUV4202ColorMode mode>
void BM_YUV4202Color_opencv_x86(benchmark::State &state)
{
    int32_t width = state.range(0);
    int32_t height = state.range(1);
    std::unique_ptr<uint8_t[]> src(new uint8_t[width * height * 3 / 2]);
    std::unique_ptr<uint8_t[]> dst(new uint8_t[width * height * 3]);
    tinycv::debug::randomFill<uint8_t>(src.get(), width * height * 3 / 2, 0, 255);
    cv::Mat srcMat(3 * height / 2, width, CV_MAKETYPE(cv::DataType<uint8_t>::depth, 1), src.get());
    cv::Mat dstMat(height, width, CV_MAKETYPE(cv::DataType<uint8_t>::depth, 3), dst.get());
    for (auto _ : state) {
        if (mode == I4202RGB_MODE) {
            cv::cvtColor(srcMat, dstMat, cv::COLOR_YUV2RGB_I420);
        } else if (mode == YV122RGB_MODE) {
            cv::cvtColor(srcMat, dstMat, cv::COLOR_YUV2RGB_YV12);
        } else if (mode == I4202BGR_MODE) {
            cv::cvtColor(srcMat, dstMat, cv::COLOR_YUV2BGR_I420);
        } else if (mode == YV122BGR_MODE) {
            cv::cvtColor(srcMat, dstMat, cv::COLOR_YUV2BGR_YV12);
        }
    }
    state.SetItemsProcessed(state.iterations() * 1);
}

BENCHMARK_TEMPLATE(BM_Color2YUV420_opencv_x86, uint8_t, RGB2I420_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });
BENCHMARK_TEMPLATE(BM_Color2YUV420_opencv_x86, uint8_t, BGR2I420_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });
BENCHMARK_TEMPLATE(BM_Color2YUV420_opencv_x86, uint8_t, RGB2YV12_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });
BENCHMARK_TEMPLATE(BM_Color2YUV420_opencv_x86, uint8_t, BGR2YV12_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });

BENCHMARK_TEMPLATE(BM_YUV4202Color_opencv_x86, uint8_t, I4202RGB_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });
BENCHMARK_TEMPLATE(BM_YUV4202Color_opencv_x86, uint8_t, I4202BGR_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });
BENCHMARK_TEMPLATE(BM_YUV4202Color_opencv_x86, uint8_t, YV122RGB_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });
BENCHMARK_TEMPLATE(BM_YUV4202Color_opencv_x86, uint8_t, YV122BGR_MODE)->Args({ 320, 240 })->Args({ 640, 480 })->Args({ 1280, 720 })->Args({ 1920, 1080 })->Args({ 3840, 2160 });

#endif //! TINYCV_BENCHMARK_OPENCV

} // namespace
