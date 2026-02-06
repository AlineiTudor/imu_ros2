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

#include "adi_imu/imu_covariance_factory.h"
#include "adi_imu/static_covariance_provider.h"
#include "adi_imu/welford_covariance_provider.h"
#include "adi_imu/sliding_window_covariance_provider.h"
#include <stdexcept>

namespace adi_imu
{
    CovarianceAlgorithm ImuCovarianceFactory::parseAlgorithm(const std::string & algorithm_str)
    {
        if(algorithm_str == "static") return CovarianceAlgorithm::STATIC;
        if(algorithm_str == "welford") return CovarianceAlgorithm::WELFORD_ONLINE;
        if(algorithm_str == "sliding_window") return CovarianceAlgorithm::SLIDING_WINDOW;

        throw std::invalid_argument("Unknown covariance algorithmL " + algorithm_str);
    }

    std::unique_ptr<ImuCovarianceInterface> ImuCovarianceFactory::createFromParameters(const std::shared_ptr<rclcpp::Node> & node)
    {
        //Declare parameters with defaults
        node->declare_parameter("covariance.enable", false);
        node->declare_parameter("covariance.algorithm", "welford");

        // Welford parameters
        node->declare_parameter("covariance.welford.calibration_samples", 1000);
        node->declare_parameter("covariance.welford.min_variance", 1e-9);

        // Sliding window parameters
        node->declare_parameter("covariance.sliding_window.window_size", 500);
        node->declare_parameter("covariance.sliding_window.min_samples", 100);

        // Static covariance parameters (diagonal values)
        node->declare_parameter("covariance.static.accel_variance_x", 0.01);
        node->declare_parameter("covariance.static.accel_variance_y", 0.01);
        node->declare_parameter("covariance.static.accel_variance_z", 0.01);
        node->declare_parameter("covariance.static.gyro_variance_x", 0.001);
        node->declare_parameter("covariance.static.gyro_variance_y", 0.001);
        node->declare_parameter("covariance.static.gyro_variance_z", 0.001);

        // Check if covariance is enabled
        bool enable = node->get_parameter("covariance.enable").as_bool();
        if (!enable){
            RCLCPP_INFO(node->get_logger(), "Covariance computation disabled.");
            return nullptr;
        }

        std::string algorithm_str = node->get_parameter("covariance.algorithm").as_string();
        CovarianceAlgorithm algorithm = parseAlgorithm(algorithm_str);

        RCLCPP_INFO(node->get_logger(), "Creating covariance provider: %s", algorithm_str.c_str());

        return create(algorithm, node);
    }

    std::unique_ptr<ImuCovarianceInterface> ImuCovarianceFactory::create(
        CovarianceAlgorithm algorithm, 
        const std::shared_ptr<rclcpp::Node> & node)
    {
        switch (algorithm){
            case CovarianceAlgorithm::STATIC:{
                Vec3 accel_var = {
                    node->get_parameter("covariance.static.accel_variance_x").as_double(),
                    node->get_parameter("covariance.static.accel_variance_y").as_double(),
                    node->get_parameter("covariance.static.accel_variance_z").as_double(),
                };
                Vec3 gyro_var = {
                    node->get_parameter("covariance.static.gyro_variance_x").as_double(),
                    node->get_parameter("covariance.static.gyro_variance_y").as_double(),
                    node->get_parameter("covariance.static.gyro_variance_z").as_double(),
                };
                return std::make_unique<StaticCovarianceProvider>(accel_var, gyro_var);
            }
            case CovarianceAlgorithm::WELFORD_ONLINE:{
                size_t calibration_samples = static_cast<size_t>(node->get_parameter("covariance.welford.calibration_samples").as_int());
                double min_variance = node->get_parameter("covariance.welford.min_variance").as_double();
                return std::make_unique<WelfordCovarianceProvider>(calibration_samples, min_variance);
            }
            case CovarianceAlgorithm::SLIDING_WINDOW:{
                size_t window_size = static_cast<size_t>(node->get_parameter("covariance.sliding_window.window_size").as_int());
                size_t min_samples = static_cast<size_t>(node->get_parameter("covariance.sliding_window.min_samples").as_int());
                return std::make_unique<SlidingWindowCovarianceProvider>(window_size, min_samples);
            }
        }

        return nullptr;
    }

}   // namespace adi_imu