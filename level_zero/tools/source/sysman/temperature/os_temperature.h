/*
 * Copyright (C) 2020 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 */

#pragma once

#include <level_zero/zet_api.h>

namespace L0 {

struct OsSysman;
class OsTemperature {
  public:
    virtual ze_result_t getSensorTemperature(double *pTemperature) = 0;
    virtual bool isTempModuleSupported() = 0;
    virtual void setSensorType(zet_temp_sensors_t sensorType) = 0;
    static OsTemperature *create(OsSysman *pOsSysman);
    virtual ~OsTemperature() = default;
};

} // namespace L0