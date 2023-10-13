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

#ifndef __ST_TINYCV_FLIP_H_
#define __ST_TINYCV_FLIP_H_

#include "tinycv/types.h"

namespace tinycv {

/**
 * @brief Flips a 2D array around vertical, horizontal, or both axes. Support in-place operation;
 * @tparam T The data type of input and output image, currently only \a uint8_t and \a float are supported.
 * @tparam channels The number of channels of input image and output image, 1, 3 and 4 are supported.
 * @param height            input image's height
 * @param width             input image's width
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    output image's width stride, usually it equals to `width * channels`
 * @param outData           output image data
 * @param flipCode          0 means flipping around the x-axis and positive value (for example, 1) means flipping around y-axis. Negative value (for example, -1) means flipping around both axes.
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ***************************************************************************************************/

template <typename T, int32_t nc>
void Flip(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T *inData,
    int32_t outWidthStride,
    T *outData,
    int32_t flipCode);

} // namespace tinycv

#endif //!__ST_TINYCV_FLIP_H_
