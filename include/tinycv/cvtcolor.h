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

#ifndef __ST_TINYCV_CVTCOLOR_H_
#define __ST_TINYCV_CVTCOLOR_H_

#include "tinycv/types.h"

namespace tinycv {

/**
 * @brief Convert BGR images to BGRA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t and \a float are supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGR2BGRA(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert BGRA images to BGR images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t and \a float are supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGRA2BGR(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert RGB images to GRAY images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t and \a float are supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGB2GRAY(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert GRAY images to RGB images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t and \a float are supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void GRAY2RGB(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert RGBA images to GRAY images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t and \a float are supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGBA2GRAY(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert GRAY images to RGBA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t and \a float are supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void GRAY2RGBA(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

// BGR_GRAY
/**
 * @brief Convert BGR images to GRAY images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t and \a float are supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGR2GRAY(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert GRAY images to BGR images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t and \a float are supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void GRAY2BGR(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert BGRA images to GRAY images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t and \a float are supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGRA2GRAY(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert GRAY images to BGRA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t and \a float are supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void GRAY2BGRA(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

// BGR_I420
/**
 * @brief Convert BGR images to I420 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGR2I420(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert BGR images to I420 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * ncSrc`
 * @param inData            input image data
 * @param outYStride        output Y stride, usually it equals to `width`
 * @param outY              output Y
 * @param outUStride        output U stride, usually it equals to `width / 2`
 * @param outU              output U
 * @param outVStride        output V stride, usually it equals to `width / 2`
 * @param outV              output V
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGR2I420(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outYStride,
    T* outDataY,
    int32_t outUStride,
    T* outDataU,
    int32_t outVStride,
    T* outDataV);

/**
 * @brief Convert I420 images to BGR images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void I4202BGR(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert I420 images to BGR images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            bgr image's height
 * @param width             input image's width need to be processed
 * @param inYStride         input Y stride, usually it equals to `width`
 * @param inDataY           input Y
 * @param inUStride         input U stride, usually it equals to `width / 2`
 * @param inDataU           input U
 * @param inVStride         input V stride, usually it equals to `width / 2`
 * @param inDataV           input V
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void I4202BGR(
    int32_t height,
    int32_t width,
    int32_t inYStride,
    const T* inDataY,
    int32_t inUStride,
    const T* inDataU,
    int32_t inVStride,
    const T* inDataV,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert RGB images to I420 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGB2I420(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert RGB images to I420 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * ncSrc`
 * @param inData            input image data
 * @param outYStride        output Y stride, usually it equals to `width`
 * @param outDataY          output Y
 * @param outUStride        output U stride, usually it equals to `width / 2`
 * @param outDataU          output U
 * @param outVStride        output V stride, usually it equals to `width / 2`
 * @param outDataV          output V
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGB2I420(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outYStride,
    T* outDataY,
    int32_t outUStride,
    T* outDataU,
    int32_t outVStride,
    T* outDataV);

/**
 * @brief Convert I420 images to RGB images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void I4202RGB(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert I420 images to RGB images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            rgb image's height
 * @param width             rgb image's width need to be processed
 * @param inYStride         stride of y dimension, usually it equals to `width`
 * @param inDataY           input image data of y
 * @param inUStride         stride of u dimension, usually it equals to `width / 2`
 * @param inDataU           input image data of u
 * @param inVStride         stride of v dimension, usually it equals to `width / 2`
 * @param inDataV           input image data of v
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void I4202RGB(
    int32_t height,
    int32_t width,
    int32_t inYStride,
    const T* inDataY,
    int32_t inUStride,
    const T* inDataU,
    int32_t inVStride,
    const T* inDataV,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert BGRA images to I420 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGRA2I420(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert BGRA images to I420 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outYStride        output Y stride, usually it equals to `width`
 * @param outDataY          output Y
 * @param outUStride        output U stride, usually it equals to `width / 2`
 * @param outDataU          output U
 * @param outVStride        output V stride, usually it equals to `width / 2`
 * @param outDataV          output V
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGRA2I420(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    T* inData,
    int32_t outYStride,
    T* outDataY,
    int32_t outUStride,
    T* outDataU,
    int32_t outVStride,
    T* outDataV);

/**
 * @brief Convert I420 images to BGRA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void I4202BGRA(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert I420 images to BGRA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            bgra image's height
 * @param width             bgra image's width need to be processed
 * @param inYStride         stride of y dimension, usually it equals to `width`
 * @param inDataY           input image data of y
 * @param inUStride         stride of u dimension, usually it equals to `width / 2`
 * @param inDataU           input image data of u
 * @param inVStride         stride of v dimension, usually it equals to `width / 2`
 * @param inDataV           input image data of v
 * @param outWidthStride    the width stride of output image, usually it equals to `width * ncDst`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void I4202BGRA(
    int32_t height,
    int32_t width,
    int32_t inYStride,
    const T* inDataY,
    int32_t inUStride,
    const T* inDataU,
    int32_t inVStride,
    const T* inDataV,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert RGBA images to I420 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGBA2I420(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert RGBA images to I420 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * ncSrc`
 * @param inData            input image data
 * @param outYStride        output Y stride, usually it equals to `width`
 * @param outDataY          output Y
 * @param outUStride        output U stride, usually it equals to `width / 2`
 * @param outDataU          output U
 * @param outVStride        output V stride, usually it equals to `width / 2`
 * @param outDataV          output V
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGBA2I420(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outYStride,
    T* outDataY,
    int32_t outUStride,
    T* outDataU,
    int32_t outVStride,
    T* outDataV);

/**
 * @brief Convert I420 images to RGBA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void I4202RGBA(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert I420 images to RGBA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inYStride         stride of y dimension, usually it equals to `width`
 * @param inDataY           input image data of y
 * @param inUStride         stride of u dimension, usually it equals to `width / 2`
 * @param inDataU           input image data of u
 * @param inVStride         stride of v dimension, usually it equals to `width / 2`
 * @param inDataV           input image data of v
 * @param outWidthStride    the width stride of output image, usually it equals to `width * ncDst`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void I4202RGBA(
    int32_t height,
    int32_t width,
    int32_t inYStride,
    const T* inDataY,
    int32_t inUStride,
    const T* inDataU,
    int32_t inVStride,
    const T* inDataV,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert BGR images to YV12 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGR2YV12(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert YV12 images to BGR images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void YV122BGR(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert RGB images to YV12 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGB2YV12(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert YV12 images to RGB images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void YV122RGB(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert BGRA images to YV12 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGRA2YV12(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert YV12 images to BGRA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void YV122BGRA(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert RGBA images to YV12 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGBA2YV12(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert YV12 images to RGBA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void YV122RGBA(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

// BGR_NV12
/**
 * @brief Convert BGR images to NV12 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGR2NV12(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);
/**
 * @brief Convert BGR images to NV12 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outYStride        the width stride of output Y plane image, usually it equals to `width`
 * @param outY              output image data
 * @param outUVStride       the width stride of output UV plane image, usually it equals to `width`
 * @param outUV             output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGR2NV12(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outYStride,
    T* outY,
    int32_t outUVStride,
    T* outUV);

/**
 * @brief Convert NV12 images to BGR images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV122BGR(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);
/**
 * @brief Convert NV12 images to BGR images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inYStride         input image Y plane stride, usually it equals to `width`
 * @param inY               input image Y plane data
 * @param inUVStride        input image UV width stride, usually it equals to `width`
 * @param inUV              input image UV data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/

template <typename T>
void NV122BGR(
    int32_t height,
    int32_t width,
    int32_t inYStride,
    const T* inY,
    int32_t inUVStride,
    const T* inUV,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert BGRA images to NV12 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGRA2NV12(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert BGRA images to NV12 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outYStride        output image Y plane stride, usually it equals to `width`
 * @param outY              output image Y plane data
 * @param outUVStride       output image UV plane stride, usually it equals to `width`
 * @param outUV             output image UV plane data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/

template <typename T>
void BGRA2NV12(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outYtride,
    T* outY,
    int32_t outUVStride,
    T* outUV);

/**
 * @brief Convert NV12 images to BGRA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV122BGRA(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert NV12 images to BGRA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inYStride         input image Y plane stride, usually it equals to `width`
 * @param inY               input image Y plane data
 * @param inUVStride        input image UV plane stride, usually it equals to `width`
 * @param inUV              input image UV plane data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV122BGRA(
    int32_t height,
    int32_t width,
    int32_t inYStride,
    const T* inY,
    int32_t inUVStride,
    const T* inU,
    int32_t outWidthStride,
    T* outData);
/**
 * @brief Convert BGR images to NV21 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGR2NV21(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);
/**
 * @brief Convert BGR images to NV21 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outYStride        output image Y plane stride, usually it equals to `width`
 * @param outY              output image Y plane data
 * @param outUVStride       output image UV plane stride, usually it equals to `width`
 * @param outUV             output image UV plane data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGR2NV21(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outYStride,
    T* outY,
    int32_t outUVStride,
    T* outUV);

/**
 * @brief Convert NV21 images to BGR images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV212BGR(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert NV21 images to BGR images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inYStride         input image Y plane stride, usually it equals to `width`
 * @param inY               input image Y plane data
 * @param inUVStride        input image UV plane stride, usually it equals to `width`
 * @param inUV              input image UV plane data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV212BGR(
    int32_t height,
    int32_t width,
    int32_t inYStride,
    const T* inY,
    int32_t inUVStride,
    const T* inU,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert BGRA images to NV21 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGRA2NV21(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert BGRA images to NV21 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outYStride        output image Y plane stride, usually it equals to `width`
 * @param outY              output image Y plane data
 * @param outUVStride       output image UV plane stride, usually it equals to `width`
 * @param outUV             output image UV plane data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void BGRA2NV21(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outYStride,
    T* outY,
    int32_t outUVStride,
    T* outUV);

/**
 * @brief Convert NV21 images to BGRA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV212BGRA(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);
/**
 * @brief Convert NV21 images to BGRA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inYStride         input image Y plane stride, usually it equals to `width`
 * @param inY               input image Y plane data
 * @param inUVStride        input image UV plane stride, usually it equals to `width`
 * @param inUV              input image UV plane data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV212BGRA(
    int32_t height,
    int32_t width,
    int32_t inYStride,
    const T* inY,
    int32_t inUVStride,
    const T* inU,
    int32_t outWidthStride,
    T* outData);

// RGB_NV12
/**
 * @brief Convert RGB images to NV12 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGB2NV12(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert RGB images to NV12 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outYStride        the Y plane stride of output image, usually it equals to `width * channels`
 * @param outY              output Y plane image data
 * @param outUVStride       the UV plabe stride of output image, usually it equals to `width * channels`
 * @param outUV             output UV plane image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGB2NV12(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outYStride,
    T* outY,
    int32_t outUVStride,
    T* outUV);

/**
 * @brief Convert NV12 images to RGB images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV122RGB(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert NV12 images to RGB images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inYStride         input y plane's width stride, usually it equals to `width`
 * @param inY               input y plane data
 * @param inUVStride        input uv plane's width stride, usually it equals to `width`
 * @param inUV              input uv plane data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV122RGB(
    int32_t height,
    int32_t width,
    int32_t inYStride,
    const T* inY,
    int32_t inUVStride,
    const T* inU,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert RGBA images to NV12 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGBA2NV12(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert RGBA images to NV12 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outYStride        the width stride of y plane, usually it equals to `width`
 * @param outY              output y plane data
 * @param outUVStride       the width stride of uv plane, usually it equals to `width`
 * @param outUV             output uv plane data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGBA2NV12(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outYStride,
    T* outY,
    int32_t outUVStride,
    T* outUV);

/**
 * @brief Convert NV12 images to RGBA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV122RGBA(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert NV12 images to RGBA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inYStride         input y plane 's width stride, usually it equals to `width`
 * @param inY               input y plane data
 * @param inUVStride        input uv plane 's width stride, usually it equals to `width`
 * @param inUV              input uv plane data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV122RGBA(
    int32_t height,
    int32_t width,
    int32_t inYStride,
    const T* inY,
    int32_t inUVStride,
    const T* inUV,
    int32_t outWidthStride,
    T* outData);

// RGB_NV21
/**
 * @brief Convert RGB images to NV21 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGB2NV21(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);
/**
 * @brief Convert RGB images to NV21 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 3 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outYStride        output image Y plane stride, usually it equals to `width`
 * @param outY              output image Y plane data
 * @param outUVStride       output image UV plane stride, usually it equals to `width`
 * @param outUV             output image UV plane data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGB2NV21(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outYStride,
    T* outY,
    int32_t outUVStride,
    T* outUV);

/**
 * @brief Convert NV21 images to RGB images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV212RGB(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert NV21 images to RGB images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 3 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inYStride         input image Y plane stride, usually it equals to `width`
 * @param inY               input image Y plane data
 * @param inUVStride        input image UV plane stride, usually it equals to `width`
 * @param inUV              input image UV plane data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV212RGB(
    int32_t height,
    int32_t width,
    int32_t inYStride,
    const T* inY,
    int32_t inUVStride,
    const T* inUV,
    int32_t outWidthStride,
    T* outData);
/**
 * @brief Convert RGBA images to NV21 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGBA2NV21(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);
/**
 * @brief Convert RGBA images to NV21 images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t and \a float are supported.
 * @tparam ncSrc The number of channels of input image, 4 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outYStride        output image Y plane stride, usually it equals to `width`
 * @param outY              output image Y plane data
 * @param outUVStride       output image UV plane stride, usually it equals to `width`
 * @param outUV             output image UV plane data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void RGBA2NV21(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outYStride,
    T* outY,
    int32_t outUVStride,
    T* outUV);

/**
 * @brief Convert NV21 images to RGBA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inWidthStride     input image's width stride, usually it equals to `width * channels`
 * @param inData            input image data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV212RGBA(
    int32_t height,
    int32_t width,
    int32_t inWidthStride,
    const T* inData,
    int32_t outWidthStride,
    T* outData);
/**
 * @brief Convert NV21 images to RGBA images
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 4 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inYStride         input image Y plane stride, usually it equals to `width`
 * @param inY               input image Y plane data
 * @param inUVStride        input image UV plane stride, usually it equals to `width`
 * @param inUV              input image UV plane data
 * @param outWidthStride    the width stride of output image, usually it equals to `width * channels`
 * @param outData           output image data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV212RGBA(
    int32_t height,
    int32_t width,
    int32_t inYStride,
    const T* inY,
    int32_t inUVStride,
    const T* inUV,
    int32_t outWidthStride,
    T* outData);

/**
 * @brief Convert I420 images to NV21 images,format: YYYYUUUUVVVV -> YYYYVUVUVUVU
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inStrideY         input Y plane width stride, usually it equals to `width`
 * @param inDataY           input Y plane data
 * @param inStrideU         input U plane width stride, usually it equals to `width / 2`
 * @param inDataU           input U plane data
 * @param inStrideV         input V plane width stride, usually it equals to `width / 2`
 * @param inDataV           input V plane data
 * @param outStrideY        output Y plane width stride, usually it equals to `width`
 * @param outDataY          output Y plane data
 * @param outStrideUV       output UV plane width stride, usually it equals to `width`
 * @param outDataUV         output UV plane data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void I4202NV21(
    int32_t height,
    int32_t width,
    int32_t inStrideY,
    const T* inDataY,
    int32_t inStrideU,
    const T* inDataU,
    int32_t inStrideV,
    const T* inDataV,
    int32_t outStrideY,
    T* outDataY,
    int32_t outStrideVU,
    T* outDataVU);

/**
 * @brief Convert NV21 images to I420 images,format: YYYYVUVUVUVU -> YYYYUUUUVVVV
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inStrideY         input Y plane width stride, usually it equals to `width`
 * @param inDataY           input Y plane data
 * @param inStrideUV        input UV plane width stride, usually it equals to `width`
 * @param inDataUV          input UV plane data
 * @param outStrideY        output Y plane width stride, usually it equals to `width`
 * @param outDataY          output Y plane data
 * @param outStrideU        output U plane width stride, usually it equals to `width / 2`
 * @param outDataU          output U plane data
 * @param outStrideV        output V plane width stride, usually it equals to `width / 2`
 * @param outDataV          output V plane data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV212I420(
    int32_t height,
    int32_t width,
    int32_t inStrideY,
    const T* inDataY,
    int32_t inStrideVU,
    const T* inDataVU,
    int32_t outStrideY,
    T* outDataY,
    int32_t outStrideU,
    T* outDataU,
    int32_t outStrideV,
    T* outDataV);
/**
 * @brief Convert I420 images to NV12 images,format: YYYYUUUUVVVV -> YYYYUVUVUVUV
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inStrideY         input Y plane width stride, usually it equals to `width`
 * @param inDataY           input Y plane data
 * @param inStrideU         input U plane width stride, usually it equals to `width / 2`
 * @param inDataU           input U plane data
 * @param inStrideV         input V plane width stride, usually it equals to `width / 2`
 * @param inDataV           input V plane data
 * @param outStrideY        output Y plane width stride, usually it equals to `width`
 * @param outDataY          output Y plane data
 * @param outStrideUV       output UV plane width stride, usually it equals to `width`
 * @param outDataUV         output UV plane data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void I4202NV12(
    int32_t height,
    int32_t width,
    int32_t inStrideY,
    const T* inDataY,
    int32_t inStrideU,
    const T* inDataU,
    int32_t inStrideV,
    const T* inDataV,
    int32_t outStrideY,
    T* outDataY,
    int32_t outStrideUV,
    T* outDataUV);

/**
 * @brief Convert NV12 images to I420 images,format: YYYYUVUVUVUV-> YYYYUUUUVVVV
 * @tparam T The data type, used for both input image and output image, currently only \a uint8_t is supported.
 * @tparam ncSrc The number of channels of input image, 1 is supported.
 * @tparam ncDst The number of channels of output image, 1 is supported.
 * @param height            input image's height
 * @param width             input image's width need to be processed
 * @param inStrideY         input Y plane width stride, usually it equals to `width`
 * @param inDataY           input Y plane data
 * @param inStrideUV        input UV plane width stride, usually it equals to `width`
 * @param inDataUV          input UV plane data
 * @param outStrideY        output Y plane width stride, usually it equals to `width`
 * @param outDataY          output Y plane data
 * @param outStrideU        output U plane width stride, usually it equals to `width / 2`
 * @param outDataU          output U plane data
 * @param outStrideV        output V plane width stride, usually it equals to `width / 2`
 * @param outDataV          output V plane data
 * @warning All input parameters must be valid, or undefined behaviour may occur.
 ****************************************************************************************************/
template <typename T>
void NV122I420(
    int32_t height,
    int32_t width,
    int32_t inStrideY,
    const T* inDataY,
    int32_t inStrideUV,
    const T* inDataUV,
    int32_t outStrideY,
    T* outDataY,
    int32_t outStrideU,
    T* outDataU,
    int32_t outStrideV,
    T* outDataV);

} // namespace tinycv

#endif //! __ST_TINYCV_CVTCOLOR_H_
