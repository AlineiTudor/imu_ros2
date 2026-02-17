# Copyright 2026 Analog Devices, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import os

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    iio_context_string_arg = DeclareLaunchArgument(
        'iio_context_string',
        description='The URI of the processing unit to which the IMU is connected to (e.g: ip:192.168.2.1).',
    )
    imu_device_name_arg = DeclareLaunchArgument(
        'imu_device_name',
        description='The name of the IMU device to be used (use lowercase and a dash, e.g., adis16545-3).',
    )
    measured_data_topic_selection_arg = DeclareLaunchArgument(
        'measured_data_topic_selection',
        description=(
            'Selects the topic mode for sending IMU data:\n'
            '\t0: measured data is published on /velangtempdata topic - not available for adis1646x; sampling is performed on each data ready impulse\n'
            '\t1: measured data is published on /accelgyrotempdata topic; sampling is performed on each data ready impulse\n'
            '\t2: measured data is published on /imu topic; sampling performed on each data ready impulse\n'
            '\t3: measured data is published on /imufullmeasureddata topic (default); sampling is performed by polling the data registers without taking into consideration the data ready impulse\n'
        ),
        default_value='2',
        choices=['0', '1', '2', '3'],
    )
    diag_data_enable_arg = DeclareLaunchArgument(
        'diag_data_enable',
        description='Whether to enable the publisher of IMU diagnostic data.',
        default_value='false'
    )
    ident_data_enable_arg = DeclareLaunchArgument(
        'ident_data_enable',
        description='Whether to enable the publisher of IMU identification data.',
        default_value='false'
    )

    # ======================================================================
    # Covariance parameters
    # ======================================================================
    covariance_enable_arg = DeclareLaunchArgument(
        'covariance_enable',
        description = 'Enable covariance computation and publishing for ROS2 imu topic.\n',
        default_value = 'false' 
    )

    covariance_algorithm_arg = DeclareLaunchArgument(
        'covariance_algorithm',
        description = ('Name of the desired covariance algorithm used to publish covariance for sensor_msgs/msg/Imu.\n'
                       '\tstatic: Fixed values from parameters.\n'
                       '\twelford: Calibration-based (Welford\'s algorithm)\n'
                       '\tsliding_window:  Adaptive sliding window\n'
                       '\tewma: Exponentially-Weighted Moving Average (EWMA)\n'
                       '\tkalman: Kalman filter-based variance estimation\n'),
        default_value = 'kalman',
        choices = ['static', 'welford', 'sliding_window', 'ewma', 'kalman']
    )

    # --- Static covariance parameters ---
    static_accel_variance_x_arg = DeclareLaunchArgument(
        'static_accel_variance_x',
        description = 'Static accelerometer X-axis variance (m\s^2)^2',
        default_value = '0.01'
    )
    static_accel_variance_y_arg = DeclareLaunchArgument(
        'static_accel_variance_y',
        description = 'Static accelerometer Y-axis variance (m\s^2)^2',
        default_value = '0.01'
    )
    static_accel_variance_z_arg = DeclareLaunchArgument(
        'static_accel_variance_z',
        description = 'Static accelerometer Z-axis variance (m\s^2)^2',
        default_value = '0.01'
    )
    static_gyro_variance_x_arg = DeclareLaunchArgument(
        'static_gyro_variance_x',
        description = 'Static gyroscope X-axis variance (rad/s)^2',
        default_value = '0.001'
    )
    static_gyro_variance_y_arg = DeclareLaunchArgument(
        'static_gyro_variance_y',
        description = 'Static gyroscope Y-axis variance (rad/s)^2',
        default_value = '0.001'
    )
    static_gyro_variance_z_arg = DeclareLaunchArgument(
        'static_gyro_variance_z',
        description = 'Static gyroscope Z-axis variance (rad/s)^2',
        default_value = '0.001'
    )

    # --- Welford algorithm parameters ---
    welford_calibration_samples_arg = DeclareLaunchArgument(
        'welford_calibration_samples',
        description = 'Number of samples for Welford calibration (IMU should be stationary)',
        default_value = '1000'
    )
    welford_min_variance_arg = DeclareLaunchArgument(
        'welford_min_variance',
        description = 'Minimum variance floor for Welford algorithm',
        default_value = '1e-9'
    )

    # --- Sliding Window parameters ---
    sliding_window_size_arg = DeclareLaunchArgument(
        'sliding_window_size',
        description = 'Number of samples in sliding window',
        default_value = '500'
    )
    sliding_window_min_samples_arg = DeclareLaunchArgument(
        'sliding_window_min_samples',
        description = 'Minimum samples before covariance is valid',
        default_value = '100'
    )

    # --- EWmA parameters ---
    ewma_alpha_arg = DeclareLaunchArgument(
        'ewma_alpha',
        description = 'EWMA smoothing factor (0 < alpha < 1). Higher = faster adaptation.',
        default_value = '0.1'
    )
    ewma_warmup_samples_arg = DeclareLaunchArgument(
        'ewma_warmup_samples',
        description = 'Warmup samples berfore EWMA covariance is valid',
        default_value = '100'
    )
    ewma_min_variance_arg = DeclareLaunchArgument(
        'ewma_min_variance',
        description = 'Minimum variance floor for EWMA algorithm',
        default_value = '1e-9'
    )

    # --- Kalman filter parameters ---
    kalman_process_noise_q_arg = DeclareLaunchArgument(
        'kalman_process_noise_q',
        description = 'Kalman process noise Q (variance change rate). Larger = more adaptive.',
        default_value = '1e-2'
    )
    kalman_measurement_noise_r_arg = DeclareLaunchArgument(
        'kalman_measurement_noise_r',
        description = 'Kalman measurement noise R (noise in variance observations).',
        default_value = '1e-4'
    )
    kalman_initial_variance_arg = DeclareLaunchArgument(
        'kalman_initial_variance',
        description = 'Initial variance estimate for Kalman filter.',
        default_value = '1e-4'
    )
    kalman_warmup_samples_arg = DeclareLaunchArgument(
        'kalman_warmup_samples',
        description = 'Warmup samples before Kalman covariance estimates are valid.',
        default_value = '100'
    )
    kalman_min_variance_arg = DeclareLaunchArgument(
        'kalman_min_variance',
        description = 'Minimum variance floor for Kalman filter.',
        default_value = '1e-12'
    )

    # =========================================================================
    # LaunchConfigurations (retrieve values from arguments)
    # =========================================================================
    iio_context_string = LaunchConfiguration('iio_context_string')
    imu_device_name = LaunchConfiguration('imu_device_name')
    measured_data_topic_selection = LaunchConfiguration('measured_data_topic_selection')
    diag_data_enable = LaunchConfiguration('diag_data_enable')
    ident_data_enable = LaunchConfiguration('ident_data_enable')

    # Covariance configurations
    covariance_enable = LaunchConfiguration('covariance_enable')
    covariance_algorithm = LaunchConfiguration('covariance_algorithm')

    # Static
    static_accel_variance_x = LaunchConfiguration('static_accel_variance_x')
    static_accel_variance_y = LaunchConfiguration('static_accel_variance_y')
    static_accel_variance_z = LaunchConfiguration('static_accel_variance_z')
    static_gyro_variance_x = LaunchConfiguration('static_gyro_variance_x')
    static_gyro_variance_y = LaunchConfiguration('static_gyro_variance_y')
    static_gyro_variance_z = LaunchConfiguration('static_gyro_variance_z')

    # Welford
    welford_calibration_samples = LaunchConfiguration('welford_calibration_samples')
    welford_min_variance = LaunchConfiguration('welford_min_variance')

    # Sliding window
    sliding_window_size = LaunchConfiguration('sliding_window_size')
    sliding_window_min_samples = LaunchConfiguration('sliding_window_min_samples')

    # EWMA
    ewma_alpha = LaunchConfiguration('ewma_alpha')
    ewma_warmup_samples = LaunchConfiguration('ewma_warmup_samples')
    ewma_min_variance = LaunchConfiguration('ewma_min_variance')

    # Kalman
    kalman_process_noise_q = LaunchConfiguration('kalman_process_noise_q')
    kalman_measurement_noise_r = LaunchConfiguration('kalman_measurement_noise_r')
    kalman_initial_variance = LaunchConfiguration('kalman_initial_variance')
    kalman_warmup_samples = LaunchConfiguration('kalman_warmup_samples')
    kalman_min_variance = LaunchConfiguration('kalman_min_variance')

    # =========================================================================
    # Node definition
    # =========================================================================


    adi_imu_node = launch_ros.actions.Node(
        package='adi_imu',
        executable='adi_imu_node',
        parameters=[
            # Core params 
            {'iio_context_string': iio_context_string},
            {'imu_device_name': imu_device_name},
            {'measured_data_topic_selection': measured_data_topic_selection},
            {'diag_data_enable': diag_data_enable},
            {'ident_data_enable': ident_data_enable},
             # Covariance parameters
            {'covariance.enable': covariance_enable},
            {'covariance.algorithm': covariance_algorithm},
            # Static covariance
            {'covariance.static.accel_variance_x': static_accel_variance_x},
            {'covariance.static.accel_variance_y': static_accel_variance_y},
            {'covariance.static.accel_variance_z': static_accel_variance_z},
            {'covariance.static.gyro_variance_x': static_gyro_variance_x},
            {'covariance.static.gyro_variance_y': static_gyro_variance_y},
            {'covariance.static.gyro_variance_z': static_gyro_variance_z},
            # Welford
            {'covariance.welford.calibration_samples': welford_calibration_samples},
            {'covariance.welford.min_variance': welford_min_variance},
            # Sliding window
            {'covariance.sliding_window.window_size': sliding_window_size},
            {'covariance.sliding_window.min_samples': sliding_window_min_samples},
            # EWMA
            {'covariance.ewma.alpha': ewma_alpha},
            {'covariance.ewma.warmup_samples': ewma_warmup_samples},
            {'covariance.ewma.min_variance': ewma_min_variance},
            # Kalman
            {'covariance.kalman.process_noise_q': kalman_process_noise_q},
            {'covariance.kalman.measurement_noise_r': kalman_measurement_noise_r},
            {'covariance.kalman.initial_variance': kalman_initial_variance},
            {'covariance.kalman.warmup_samples': kalman_warmup_samples},
            {'covariance.kalman.min_variance': kalman_min_variance},
        ],
        remappings=[('/imu', '/imu/data_raw')],
        output='screen'
    )

    # =========================================================================
    # Launch description
    # =========================================================================
    return launch.LaunchDescription([
        # Core arguments
        iio_context_string_arg,
        imu_device_name_arg,
        measured_data_topic_selection_arg,
        diag_data_enable_arg,
        ident_data_enable_arg,
        # Covariance arguments
        covariance_enable_arg,
        covariance_algorithm_arg,
        # Static
        static_accel_variance_x_arg,
        static_accel_variance_y_arg,
        static_accel_variance_z_arg,
        static_gyro_variance_x_arg,
        static_gyro_variance_y_arg,
        static_gyro_variance_z_arg,
        # Welford
        welford_calibration_samples_arg,
        welford_min_variance_arg,
        # Sliding window
        sliding_window_size_arg,
        sliding_window_min_samples_arg,
        # EWMA
        ewma_alpha_arg,
        ewma_warmup_samples_arg,
        ewma_min_variance_arg,
        # Kalman
        kalman_process_noise_q_arg,
        kalman_measurement_noise_r_arg,
        kalman_initial_variance_arg,
        kalman_warmup_samples_arg,
        kalman_min_variance_arg,
        # Node
        adi_imu_node,
    ])
