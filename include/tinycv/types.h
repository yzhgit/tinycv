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

#ifndef __ST_HPC_TINYCV_TYPES_H_
#define __ST_HPC_TINYCV_TYPES_H_

#include <stdlib.h>
#include <stdint.h>

namespace tinycv {

/**
 * \brief
 * Interpolation algorithm type.
 **********************************/
enum InterpolationType {
    INTERPOLATION_LINEAR, //!< Linear interpolation
    INTERPOLATION_NEAREST_POINT, //!< Nearest point interpolation
    INTERPOLATION_AREA //!< Area interpolation
};

enum BorderType {
    BORDER_CONSTANT = 0, //!< `iiiiii|abcdefgh|iiiiii` with some specified `i`
    BORDER_REPLICATE = 1, //!< `aaaaaa|abcdefgh|hhhhhh`
    BORDER_REFLECT = 2, //!< `fedcba|abcdefgh|hgfedc`
    BORDER_WRAP = 3, //!< `cdefgh|abcdefgh|abcdef`
    BORDER_REFLECT_101 = 4, //!< `gfedcb|abcdefgh|gfedcb`
    BORDER_TRANSPARENT = 5, //!< `uvwxyz|abcdefgh|ijklmn`
    BORDER_REFLECT101 = BORDER_REFLECT_101,
    BORDER_DEFAULT = BORDER_REFLECT_101,
    BORDER_ISOLATED = 16
};

/* Sub-pixel interpolation methods */
enum { INTER_NN = 0,
       INTER_LINEAR = 1,
       INTER_CUBIC = 2,
       INTER_AREA = 3 };

typedef unsigned char uchar; //!< Type alias. For some code backward compatibility.
typedef unsigned short ushort; //!< Type alias. For some code backward compatibility.

} // namespace tinycv

#endif //! __ST_HPC_TINYCV_TYPES_H_
