#
# Copyright (C) 2018-2020 Intel Corporation
#
# SPDX-License-Identifier: MIT
#

set(NEO_CORE_OS_INTERFACE
  ${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt
  ${CMAKE_CURRENT_SOURCE_DIR}/aub_memory_operations_handler.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/aub_memory_operations_handler.h
  ${CMAKE_CURRENT_SOURCE_DIR}/debug_env_reader.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/debug_env_reader.h
  ${CMAKE_CURRENT_SOURCE_DIR}/device_factory.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/device_factory.h
  ${CMAKE_CURRENT_SOURCE_DIR}/driver_info.h
  ${CMAKE_CURRENT_SOURCE_DIR}/hw_info_config.h
  ${CMAKE_CURRENT_SOURCE_DIR}/hw_info_config.inl
  ${CMAKE_CURRENT_SOURCE_DIR}/hw_info_config_bdw_plus.inl
  ${CMAKE_CURRENT_SOURCE_DIR}/os_context.h
  ${CMAKE_CURRENT_SOURCE_DIR}/os_environment.h
  ${CMAKE_CURRENT_SOURCE_DIR}/os_interface.h
  ${CMAKE_CURRENT_SOURCE_DIR}/os_library.h
  ${CMAKE_CURRENT_SOURCE_DIR}/os_memory.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/os_memory.h
  ${CMAKE_CURRENT_SOURCE_DIR}/os_thread.h
  ${CMAKE_CURRENT_SOURCE_DIR}/os_time.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/os_time.h
  ${CMAKE_CURRENT_SOURCE_DIR}/print.h
)

set_property(GLOBAL PROPERTY NEO_CORE_OS_INTERFACE ${NEO_CORE_OS_INTERFACE})
add_subdirectories()
