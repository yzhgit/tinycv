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

#ifndef __ST_TINYCV_RESIZE_H_
#define __ST_TINYCV_RESIZE_H_

#include "tinycv/types.h"

namespace tinycv {

/**
 * @brief Resize the image with nearest neighbor interpolation method
 * @tparam T The data type of input and output image, currently only \a uint8_t and \a float are supported.
 * @tparam channels The number of channels of input image, 1, 3 and 4 are supported.
 * @param inHeight          input image's height
 * @param inWidth           input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData           input image data
 * @param outHeight         output image's height
 * @param outWidth          output image's width need to be processed
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ***************************************************************************************************/
template<typename T, int32_t channels>
void ResizeNearestPoint(
        int32_t inHeight,
        int32_t inWidth,
        int32_t inWidthStride,
        const T *inData,
        int32_t outHeight,
        int32_t outWidth,
        int32_t outWidthStride,
        T *outData);

/**
 * @brief Resize the image with linear interpolation method.
 * @tparam TSrc The data type of input image, currently only \a uint8_t and \a float are supported.
 * @tparam channels The number of channels of input image, 1, 3 and 4 are supported.
 * @tparam TDst The data type of output image, currently only \a uint8_t and \a float are supported.The param is same with TSrc.
 * @param inHeight          input image's height
 * @param inWidth           input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outHeight         output image's height
 * @param outWidth          output image's width need to be processed
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ***************************************************************************************************/
template<typename T, int32_t channels>
void ResizeLinear(
        int32_t inHeight,
        int32_t inWidth,
        int32_t inWidthStride,
        const T *inData,
        int32_t outHeight,
        int32_t outWidth,
        int32_t outWidthStride,
        T *outData);

/**
 * @brief Scale the image with area interpolation method
 * @tparam TSrc The data type of input image, currently only \a uint8_t and \a float are supported.
 * @tparam channels The number of channels of input image, 1, 3 and 4 are supported.
 * @tparam TDst The data type of output image, currently only \a uint8_t and \a float are supported.The param is same with TSrc.
 * @param inHeight          input image's height
 * @param inWidth           input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outHeight         output image's height
 * @param outWidth          output image's width need to be processed
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ***************************************************************************************************/
template<typename T, int channels>
void ResizeArea(
        int32_t inHeight,
        int32_t inWidth,
        int32_t inWidthStride,
        const T *inData,
        int32_t outHeight,
        int32_t outWidth,
        int32_t outWidthStride,
        T *outData);

} // namespace tinycv

#endif //! __ST_TINYCV_RESIZE_H_
