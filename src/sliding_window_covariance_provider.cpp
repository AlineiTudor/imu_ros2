// Copyright 2025 Analog Devices, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "adi_imu/sliding_window_covariance_provider.h"
#include <algorithm>
#include <numeric>
#include <cmath>

namespace adi_imu
{
    SlidingWindowCovarianceProvider::SlidingWindowCovarianceProvider(
        size_t window_size, size_t min_samples, double min_variance):
        m_window_size(window_size),
        m_min_samples(min_samples),
        m_min_variance(min_variance),
        m_accel_covariance{},
        m_gyro_covariance{},
        m_update_interval(50),
        m_samples_since_update(0)
        {}
        

}   // namespace adi_imu
