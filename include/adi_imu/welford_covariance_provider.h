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

#ifndef ADI_IMU__WELFORD_COVARIANCE_PROVIDER_H_
#define ADI_IMU__WELFORD_COVARIANCE_PROVIDER_H_

#include "adi_imu/imu_covariance_interface.h"
#include <cstddef>

namespace adi_imu
{

        /**
        * @brief Computes covariance online using Welford's algorithm.
        *
        * This provider collects samples during the calibration phrase (IMU should 
        * be stationary) and computes variance using Welford's numerically stable
        * online algorithm. After calibration_samples are collected, the covariance
        * is frozen and returned for all subsequent queries.
        *
        * Reference: Welford, B. P. (1962). "Note on method for calculating
        * corrected sum of squares and products"
        */
        class WelfordCovarianceProvider : public ImuCovarianceInterface
        {
        public:
            explicit WelfordCovarianceProvider(size_t calibration_samples = 1000, double min_variance = 1e-9);

            void addSample(const Vec3 & accel, const Vec3 & gyro) override;
            bool isReady() const override; 
            CovarianceMatrix getAccelCovariance() const override;
            CovarianceMatrix getGyroCovariance() const override;
            void reset() override;
            double getCalibrationProgress() const override;

        private:
            void updateWelford(double value, double & mean, double &M2, size_t n);
            double computeVariance(double M2, size_t n) const;

            size_t m_target_samples;
            size_t m_samples_count;
            double m_min_variance;

            // Welford state for accelerometer (mean and M2 for each axis)
            Vec3 m_accel_mean;
            Vec3 m_accel_M2;

            // Welford state for gyro
            Vec3 m_gyro_mean;
            Vec3 m_gyro_M2;

            // Frozen covariance after calibration
            CovarianceMatrix m_accel_covariance;
            CovarianceMatrix m_gyro_covariance;
            bool m_calibration_complete;

    };
} // namespace adi_imu

#endif // ADI_IMU__WELFORD_COVARIANCE_PROVIDER_M_