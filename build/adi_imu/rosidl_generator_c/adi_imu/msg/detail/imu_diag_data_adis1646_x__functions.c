// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from adi_imu:msg/ImuDiagDataADIS1646X.idl
// generated code does not contain a copyright notice
#include "adi_imu/msg/detail/imu_diag_data_adis1646_x__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
adi_imu__msg__ImuDiagDataADIS1646X__init(adi_imu__msg__ImuDiagDataADIS1646X * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    adi_imu__msg__ImuDiagDataADIS1646X__fini(msg);
    return false;
  }
  // diag_data_path_overrun
  // diag_flash_memory_update_error
  // diag_spi_communication_error
  // diag_standby_mode
  // diag_sensor_self_test_error
  // diag_flash_memory_test_error
  // diag_clock_error
  // diag_flash_memory_write_count_exceeded_error
  // flash_counter
  return true;
}

void
adi_imu__msg__ImuDiagDataADIS1646X__fini(adi_imu__msg__ImuDiagDataADIS1646X * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // diag_data_path_overrun
  // diag_flash_memory_update_error
  // diag_spi_communication_error
  // diag_standby_mode
  // diag_sensor_self_test_error
  // diag_flash_memory_test_error
  // diag_clock_error
  // diag_flash_memory_write_count_exceeded_error
  // flash_counter
}

bool
adi_imu__msg__ImuDiagDataADIS1646X__are_equal(const adi_imu__msg__ImuDiagDataADIS1646X * lhs, const adi_imu__msg__ImuDiagDataADIS1646X * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // diag_data_path_overrun
  if (lhs->diag_data_path_overrun != rhs->diag_data_path_overrun) {
    return false;
  }
  // diag_flash_memory_update_error
  if (lhs->diag_flash_memory_update_error != rhs->diag_flash_memory_update_error) {
    return false;
  }
  // diag_spi_communication_error
  if (lhs->diag_spi_communication_error != rhs->diag_spi_communication_error) {
    return false;
  }
  // diag_standby_mode
  if (lhs->diag_standby_mode != rhs->diag_standby_mode) {
    return false;
  }
  // diag_sensor_self_test_error
  if (lhs->diag_sensor_self_test_error != rhs->diag_sensor_self_test_error) {
    return false;
  }
  // diag_flash_memory_test_error
  if (lhs->diag_flash_memory_test_error != rhs->diag_flash_memory_test_error) {
    return false;
  }
  // diag_clock_error
  if (lhs->diag_clock_error != rhs->diag_clock_error) {
    return false;
  }
  // diag_flash_memory_write_count_exceeded_error
  if (lhs->diag_flash_memory_write_count_exceeded_error != rhs->diag_flash_memory_write_count_exceeded_error) {
    return false;
  }
  // flash_counter
  if (lhs->flash_counter != rhs->flash_counter) {
    return false;
  }
  return true;
}

bool
adi_imu__msg__ImuDiagDataADIS1646X__copy(
  const adi_imu__msg__ImuDiagDataADIS1646X * input,
  adi_imu__msg__ImuDiagDataADIS1646X * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // diag_data_path_overrun
  output->diag_data_path_overrun = input->diag_data_path_overrun;
  // diag_flash_memory_update_error
  output->diag_flash_memory_update_error = input->diag_flash_memory_update_error;
  // diag_spi_communication_error
  output->diag_spi_communication_error = input->diag_spi_communication_error;
  // diag_standby_mode
  output->diag_standby_mode = input->diag_standby_mode;
  // diag_sensor_self_test_error
  output->diag_sensor_self_test_error = input->diag_sensor_self_test_error;
  // diag_flash_memory_test_error
  output->diag_flash_memory_test_error = input->diag_flash_memory_test_error;
  // diag_clock_error
  output->diag_clock_error = input->diag_clock_error;
  // diag_flash_memory_write_count_exceeded_error
  output->diag_flash_memory_write_count_exceeded_error = input->diag_flash_memory_write_count_exceeded_error;
  // flash_counter
  output->flash_counter = input->flash_counter;
  return true;
}

adi_imu__msg__ImuDiagDataADIS1646X *
adi_imu__msg__ImuDiagDataADIS1646X__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  adi_imu__msg__ImuDiagDataADIS1646X * msg = (adi_imu__msg__ImuDiagDataADIS1646X *)allocator.allocate(sizeof(adi_imu__msg__ImuDiagDataADIS1646X), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(adi_imu__msg__ImuDiagDataADIS1646X));
  bool success = adi_imu__msg__ImuDiagDataADIS1646X__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
adi_imu__msg__ImuDiagDataADIS1646X__destroy(adi_imu__msg__ImuDiagDataADIS1646X * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    adi_imu__msg__ImuDiagDataADIS1646X__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
adi_imu__msg__ImuDiagDataADIS1646X__Sequence__init(adi_imu__msg__ImuDiagDataADIS1646X__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  adi_imu__msg__ImuDiagDataADIS1646X * data = NULL;

  if (size) {
    data = (adi_imu__msg__ImuDiagDataADIS1646X *)allocator.zero_allocate(size, sizeof(adi_imu__msg__ImuDiagDataADIS1646X), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = adi_imu__msg__ImuDiagDataADIS1646X__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        adi_imu__msg__ImuDiagDataADIS1646X__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
adi_imu__msg__ImuDiagDataADIS1646X__Sequence__fini(adi_imu__msg__ImuDiagDataADIS1646X__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      adi_imu__msg__ImuDiagDataADIS1646X__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

adi_imu__msg__ImuDiagDataADIS1646X__Sequence *
adi_imu__msg__ImuDiagDataADIS1646X__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  adi_imu__msg__ImuDiagDataADIS1646X__Sequence * array = (adi_imu__msg__ImuDiagDataADIS1646X__Sequence *)allocator.allocate(sizeof(adi_imu__msg__ImuDiagDataADIS1646X__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = adi_imu__msg__ImuDiagDataADIS1646X__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
adi_imu__msg__ImuDiagDataADIS1646X__Sequence__destroy(adi_imu__msg__ImuDiagDataADIS1646X__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    adi_imu__msg__ImuDiagDataADIS1646X__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
adi_imu__msg__ImuDiagDataADIS1646X__Sequence__are_equal(const adi_imu__msg__ImuDiagDataADIS1646X__Sequence * lhs, const adi_imu__msg__ImuDiagDataADIS1646X__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!adi_imu__msg__ImuDiagDataADIS1646X__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
adi_imu__msg__ImuDiagDataADIS1646X__Sequence__copy(
  const adi_imu__msg__ImuDiagDataADIS1646X__Sequence * input,
  adi_imu__msg__ImuDiagDataADIS1646X__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(adi_imu__msg__ImuDiagDataADIS1646X);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    adi_imu__msg__ImuDiagDataADIS1646X * data =
      (adi_imu__msg__ImuDiagDataADIS1646X *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!adi_imu__msg__ImuDiagDataADIS1646X__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          adi_imu__msg__ImuDiagDataADIS1646X__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!adi_imu__msg__ImuDiagDataADIS1646X__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
