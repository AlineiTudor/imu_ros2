// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from adi_imu:msg/ImuDiagDataADIS1654X.idl
// generated code does not contain a copyright notice

#ifndef ADI_IMU__MSG__DETAIL__IMU_DIAG_DATA_ADIS1654_X__STRUCT_HPP_
#define ADI_IMU__MSG__DETAIL__IMU_DIAG_DATA_ADIS1654_X__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__adi_imu__msg__ImuDiagDataADIS1654X __attribute__((deprecated))
#else
# define DEPRECATED__adi_imu__msg__ImuDiagDataADIS1654X __declspec(deprecated)
#endif

namespace adi_imu
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuDiagDataADIS1654X_
{
  using Type = ImuDiagDataADIS1654X_<ContainerAllocator>;

  explicit ImuDiagDataADIS1654X_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->diag_data_path_overrun = false;
      this->diag_flash_memory_update_error = false;
      this->diag_automatic_reset = false;
      this->diag_clock_error = false;
      this->diag_flash_memory_test_error = false;
      this->diag_sensor_self_test_error = false;
      this->diag_spi_communication_error = false;
      this->diag_crc_error = false;
      this->diag_x_axis_gyroscope_failure = false;
      this->diag_y_axis_gyroscope_failure = false;
      this->diag_z_axis_gyroscope_failure = false;
      this->diag_x_axis_accelerometer_failure = false;
      this->diag_y_axis_accelerometer_failure = false;
      this->diag_z_axis_accelerometer_failure = false;
      this->diag_flash_memory_write_count_exceeded_error = false;
      this->flash_counter = 0ul;
    }
  }

  explicit ImuDiagDataADIS1654X_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->diag_data_path_overrun = false;
      this->diag_flash_memory_update_error = false;
      this->diag_automatic_reset = false;
      this->diag_clock_error = false;
      this->diag_flash_memory_test_error = false;
      this->diag_sensor_self_test_error = false;
      this->diag_spi_communication_error = false;
      this->diag_crc_error = false;
      this->diag_x_axis_gyroscope_failure = false;
      this->diag_y_axis_gyroscope_failure = false;
      this->diag_z_axis_gyroscope_failure = false;
      this->diag_x_axis_accelerometer_failure = false;
      this->diag_y_axis_accelerometer_failure = false;
      this->diag_z_axis_accelerometer_failure = false;
      this->diag_flash_memory_write_count_exceeded_error = false;
      this->flash_counter = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _diag_data_path_overrun_type =
    bool;
  _diag_data_path_overrun_type diag_data_path_overrun;
  using _diag_flash_memory_update_error_type =
    bool;
  _diag_flash_memory_update_error_type diag_flash_memory_update_error;
  using _diag_automatic_reset_type =
    bool;
  _diag_automatic_reset_type diag_automatic_reset;
  using _diag_clock_error_type =
    bool;
  _diag_clock_error_type diag_clock_error;
  using _diag_flash_memory_test_error_type =
    bool;
  _diag_flash_memory_test_error_type diag_flash_memory_test_error;
  using _diag_sensor_self_test_error_type =
    bool;
  _diag_sensor_self_test_error_type diag_sensor_self_test_error;
  using _diag_spi_communication_error_type =
    bool;
  _diag_spi_communication_error_type diag_spi_communication_error;
  using _diag_crc_error_type =
    bool;
  _diag_crc_error_type diag_crc_error;
  using _diag_x_axis_gyroscope_failure_type =
    bool;
  _diag_x_axis_gyroscope_failure_type diag_x_axis_gyroscope_failure;
  using _diag_y_axis_gyroscope_failure_type =
    bool;
  _diag_y_axis_gyroscope_failure_type diag_y_axis_gyroscope_failure;
  using _diag_z_axis_gyroscope_failure_type =
    bool;
  _diag_z_axis_gyroscope_failure_type diag_z_axis_gyroscope_failure;
  using _diag_x_axis_accelerometer_failure_type =
    bool;
  _diag_x_axis_accelerometer_failure_type diag_x_axis_accelerometer_failure;
  using _diag_y_axis_accelerometer_failure_type =
    bool;
  _diag_y_axis_accelerometer_failure_type diag_y_axis_accelerometer_failure;
  using _diag_z_axis_accelerometer_failure_type =
    bool;
  _diag_z_axis_accelerometer_failure_type diag_z_axis_accelerometer_failure;
  using _diag_flash_memory_write_count_exceeded_error_type =
    bool;
  _diag_flash_memory_write_count_exceeded_error_type diag_flash_memory_write_count_exceeded_error;
  using _flash_counter_type =
    uint32_t;
  _flash_counter_type flash_counter;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__diag_data_path_overrun(
    const bool & _arg)
  {
    this->diag_data_path_overrun = _arg;
    return *this;
  }
  Type & set__diag_flash_memory_update_error(
    const bool & _arg)
  {
    this->diag_flash_memory_update_error = _arg;
    return *this;
  }
  Type & set__diag_automatic_reset(
    const bool & _arg)
  {
    this->diag_automatic_reset = _arg;
    return *this;
  }
  Type & set__diag_clock_error(
    const bool & _arg)
  {
    this->diag_clock_error = _arg;
    return *this;
  }
  Type & set__diag_flash_memory_test_error(
    const bool & _arg)
  {
    this->diag_flash_memory_test_error = _arg;
    return *this;
  }
  Type & set__diag_sensor_self_test_error(
    const bool & _arg)
  {
    this->diag_sensor_self_test_error = _arg;
    return *this;
  }
  Type & set__diag_spi_communication_error(
    const bool & _arg)
  {
    this->diag_spi_communication_error = _arg;
    return *this;
  }
  Type & set__diag_crc_error(
    const bool & _arg)
  {
    this->diag_crc_error = _arg;
    return *this;
  }
  Type & set__diag_x_axis_gyroscope_failure(
    const bool & _arg)
  {
    this->diag_x_axis_gyroscope_failure = _arg;
    return *this;
  }
  Type & set__diag_y_axis_gyroscope_failure(
    const bool & _arg)
  {
    this->diag_y_axis_gyroscope_failure = _arg;
    return *this;
  }
  Type & set__diag_z_axis_gyroscope_failure(
    const bool & _arg)
  {
    this->diag_z_axis_gyroscope_failure = _arg;
    return *this;
  }
  Type & set__diag_x_axis_accelerometer_failure(
    const bool & _arg)
  {
    this->diag_x_axis_accelerometer_failure = _arg;
    return *this;
  }
  Type & set__diag_y_axis_accelerometer_failure(
    const bool & _arg)
  {
    this->diag_y_axis_accelerometer_failure = _arg;
    return *this;
  }
  Type & set__diag_z_axis_accelerometer_failure(
    const bool & _arg)
  {
    this->diag_z_axis_accelerometer_failure = _arg;
    return *this;
  }
  Type & set__diag_flash_memory_write_count_exceeded_error(
    const bool & _arg)
  {
    this->diag_flash_memory_write_count_exceeded_error = _arg;
    return *this;
  }
  Type & set__flash_counter(
    const uint32_t & _arg)
  {
    this->flash_counter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    adi_imu::msg::ImuDiagDataADIS1654X_<ContainerAllocator> *;
  using ConstRawPtr =
    const adi_imu::msg::ImuDiagDataADIS1654X_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<adi_imu::msg::ImuDiagDataADIS1654X_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<adi_imu::msg::ImuDiagDataADIS1654X_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      adi_imu::msg::ImuDiagDataADIS1654X_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<adi_imu::msg::ImuDiagDataADIS1654X_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      adi_imu::msg::ImuDiagDataADIS1654X_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<adi_imu::msg::ImuDiagDataADIS1654X_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<adi_imu::msg::ImuDiagDataADIS1654X_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<adi_imu::msg::ImuDiagDataADIS1654X_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__adi_imu__msg__ImuDiagDataADIS1654X
    std::shared_ptr<adi_imu::msg::ImuDiagDataADIS1654X_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__adi_imu__msg__ImuDiagDataADIS1654X
    std::shared_ptr<adi_imu::msg::ImuDiagDataADIS1654X_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuDiagDataADIS1654X_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->diag_data_path_overrun != other.diag_data_path_overrun) {
      return false;
    }
    if (this->diag_flash_memory_update_error != other.diag_flash_memory_update_error) {
      return false;
    }
    if (this->diag_automatic_reset != other.diag_automatic_reset) {
      return false;
    }
    if (this->diag_clock_error != other.diag_clock_error) {
      return false;
    }
    if (this->diag_flash_memory_test_error != other.diag_flash_memory_test_error) {
      return false;
    }
    if (this->diag_sensor_self_test_error != other.diag_sensor_self_test_error) {
      return false;
    }
    if (this->diag_spi_communication_error != other.diag_spi_communication_error) {
      return false;
    }
    if (this->diag_crc_error != other.diag_crc_error) {
      return false;
    }
    if (this->diag_x_axis_gyroscope_failure != other.diag_x_axis_gyroscope_failure) {
      return false;
    }
    if (this->diag_y_axis_gyroscope_failure != other.diag_y_axis_gyroscope_failure) {
      return false;
    }
    if (this->diag_z_axis_gyroscope_failure != other.diag_z_axis_gyroscope_failure) {
      return false;
    }
    if (this->diag_x_axis_accelerometer_failure != other.diag_x_axis_accelerometer_failure) {
      return false;
    }
    if (this->diag_y_axis_accelerometer_failure != other.diag_y_axis_accelerometer_failure) {
      return false;
    }
    if (this->diag_z_axis_accelerometer_failure != other.diag_z_axis_accelerometer_failure) {
      return false;
    }
    if (this->diag_flash_memory_write_count_exceeded_error != other.diag_flash_memory_write_count_exceeded_error) {
      return false;
    }
    if (this->flash_counter != other.flash_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuDiagDataADIS1654X_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuDiagDataADIS1654X_

// alias to use template instance with default allocator
using ImuDiagDataADIS1654X =
  adi_imu::msg::ImuDiagDataADIS1654X_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace adi_imu

#endif  // ADI_IMU__MSG__DETAIL__IMU_DIAG_DATA_ADIS1654_X__STRUCT_HPP_
