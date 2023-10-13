set(BUILD_PNG ON CACHE BOOL "")
set(BUILD_LIST "ximgproc,core,imgproc,features2d,flann,calib3d,${BUILD_LIST}" CACHE INTERNAL "")

tinycv_populate_dep(opencv_contrib)
tinycv_populate_dep(opencv)

# --------------------------------------------------------------------------- #

set(opencv_INCLUDE_DIRECTORIES )
set(opencv_LIBRARIES )

list(APPEND opencv_INCLUDE_DIRECTORIES
    ${opencv_contrib_SOURCE_DIR}/modules/ximgproc/include
    ${opencv_SOURCE_DIR}/modules/features2d/include
    ${opencv_SOURCE_DIR}/modules/flann/include
    ${opencv_SOURCE_DIR}/modules/calib3d/include
    ${opencv_SOURCE_DIR}/modules/core/include
    ${opencv_SOURCE_DIR}/modules/imgproc/include)
list(APPEND opencv_LIBRARIES opencv_ximgproc opencv_imgproc opencv_core)
