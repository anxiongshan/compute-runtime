#
# Copyright (C) 2017-2020 Intel Corporation
#
# SPDX-License-Identifier: MIT
#

set(IGDRCL_SRCS_tests_d3d_sharing
  ${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt
  ${CMAKE_CURRENT_SOURCE_DIR}/d3d9_tests.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/d3d_tests_part1.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/d3d_tests_part2.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/d3d_aux_tests.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/cl_dx_sharing_tests.cpp
)
if(WIN32)
  target_sources(igdrcl_tests PRIVATE ${IGDRCL_SRCS_tests_d3d_sharing})
endif()
