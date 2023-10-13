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

#ifndef __ST_TINYCV_COPYMAKEBORDER_H_
#define __ST_TINYCV_COPYMAKEBORDER_H_

#include "tinycv/types.h"

namespace tinycv {
    
/**
 * @brief Copy the source image into the middle of dest image, and make border pixels according to specific border type.
 * @tparam T The data type of input image, currently \a float and \a uint8_t are supported.
 * @tparam channels The number of channels of input image, 1, 3 and 4 are supported.
 * @param srcHeight         input image's height
 * @param srcWidth          input image's width need to be processed
 * @param srcWidthStride    input image's width stride, usually it equals to `width * channels`
 * @param src               input image data
 * @param dstHeight         output image's height
 * @param dstWidth          output image's width
 * @param dstWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param dst               output image data
 * @param border_type       ways to deal with border. BORDER_REFLECT_101 ,BORDER_REFLECT, BORDER_CONSTANT and BORDER_REPLICATE are supported
 * @param border_value      padding value when border_type is BORDER_CONSTANT
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ***************************************************************************************************/
template <typename T, int32_t channels>
void CopyMakeBorder(
    int32_t srcHeight,
    int32_t srcWidth,
    int32_t srcWidthStride,
    const T* src,
    int32_t dstHeight,
    int32_t dstWidth,
    int32_t dstWidthStride,
    T* dst,
    BorderType border_type,
    T border_value = 0);

} // namespace tinycv

#endif //! __ST_TINYCV_COPYMAKEBORDER_H_
