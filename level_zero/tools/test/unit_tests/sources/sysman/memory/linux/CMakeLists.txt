#
# Copyright (C) 2020 Intel Corporation
#
# SPDX-License-Identifier: MIT
#

if(UNIX)
    target_sources(${TARGET_NAME}
        PRIVATE
           ${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt
           ${CMAKE_CURRENT_SOURCE_DIR}${BRANCH_DIR_SUFFIX}/test_sysman_memory.cpp
           ${CMAKE_CURRENT_SOURCE_DIR}${BRANCH_DIR_SUFFIX}/mock_sysfs_memory.h
    )
endif()
