// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from adi_imu:msg/ImuIdentificationData.idl
// generated code does not contain a copyright notice
#include "adi_imu/msg/detail/imu_identification_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `firmware_revision`
// Member `firmware_date`
// Member `gyroscope_measurement_range`
#include "rosidl_runtime_c/string_functions.h"

bool
adi_imu__msg__ImuIdentificationData__init(adi_imu__msg__ImuIdentificationData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    adi_imu__msg__ImuIdentificationData__fini(msg);
    return false;
  }
  // firmware_revision
  if (!rosidl_runtime_c__String__init(&msg->firmware_revision)) {
    adi_imu__msg__ImuIdentificationData__fini(msg);
    return false;
  }
  // firmware_date
  if (!rosidl_runtime_c__String__init(&msg->firmware_date)) {
    adi_imu__msg__ImuIdentificationData__fini(msg);
    return false;
  }
  // product_id
  // serial_number
  // gyroscope_measurement_range
  if (!rosidl_runtime_c__String__init(&msg->gyroscope_measurement_range)) {
    adi_imu__msg__ImuIdentificationData__fini(msg);
    return false;
  }
  return true;
}

void
adi_imu__msg__ImuIdentificationData__fini(adi_imu__msg__ImuIdentificationData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // firmware_revision
  rosidl_runtime_c__String__fini(&msg->firmware_revision);
  // firmware_date
  rosidl_runtime_c__String__fini(&msg->firmware_date);
  // product_id
  // serial_number
  // gyroscope_measurement_range
  rosidl_runtime_c__String__fini(&msg->gyroscope_measurement_range);
}

bool
adi_imu__msg__ImuIdentificationData__are_equal(const adi_imu__msg__ImuIdentificationData * lhs, const adi_imu__msg__ImuIdentificationData * rhs)
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
  // firmware_revision
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->firmware_revision), &(rhs->firmware_revision)))
  {
    return false;
  }
  // firmware_date
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->firmware_date), &(rhs->firmware_date)))
  {
    return false;
  }
  // product_id
  if (lhs->product_id != rhs->product_id) {
    return false;
  }
  // serial_number
  if (lhs->serial_number != rhs->serial_number) {
    return false;
  }
  // gyroscope_measurement_range
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gyroscope_measurement_range), &(rhs->gyroscope_measurement_range)))
  {
    return false;
  }
  return true;
}

bool
adi_imu__msg__ImuIdentificationData__copy(
  const adi_imu__msg__ImuIdentificationData * input,
  adi_imu__msg__ImuIdentificationData * output)
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
  // firmware_revision
  if (!rosidl_runtime_c__String__copy(
      &(input->firmware_revision), &(output->firmware_revision)))
  {
    return false;
  }
  // firmware_date
  if (!rosidl_runtime_c__String__copy(
      &(input->firmware_date), &(output->firmware_date)))
  {
    return false;
  }
  // product_id
  output->product_id = input->product_id;
  // serial_number
  output->serial_number = input->serial_number;
  // gyroscope_measurement_range
  if (!rosidl_runtime_c__String__copy(
      &(input->gyroscope_measurement_range), &(output->gyroscope_measurement_range)))
  {
    return false;
  }
  return true;
}

adi_imu__msg__ImuIdentificationData *
adi_imu__msg__ImuIdentificationData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  adi_imu__msg__ImuIdentificationData * msg = (adi_imu__msg__ImuIdentificationData *)allocator.allocate(sizeof(adi_imu__msg__ImuIdentificationData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(adi_imu__msg__ImuIdentificationData));
  bool success = adi_imu__msg__ImuIdentificationData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
adi_imu__msg__ImuIdentificationData__destroy(adi_imu__msg__ImuIdentificationData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    adi_imu__msg__ImuIdentificationData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
adi_imu__msg__ImuIdentificationData__Sequence__init(adi_imu__msg__ImuIdentificationData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  adi_imu__msg__ImuIdentificationData * data = NULL;

  if (size) {
    data = (adi_imu__msg__ImuIdentificationData *)allocator.zero_allocate(size, sizeof(adi_imu__msg__ImuIdentificationData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = adi_imu__msg__ImuIdentificationData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        adi_imu__msg__ImuIdentificationData__fini(&data[i - 1]);
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
adi_imu__msg__ImuIdentificationData__Sequence__fini(adi_imu__msg__ImuIdentificationData__Sequence * array)
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
      adi_imu__msg__ImuIdentificationData__fini(&array->data[i]);
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

adi_imu__msg__ImuIdentificationData__Sequence *
adi_imu__msg__ImuIdentificationData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  adi_imu__msg__ImuIdentificationData__Sequence * array = (adi_imu__msg__ImuIdentificationData__Sequence *)allocator.allocate(sizeof(adi_imu__msg__ImuIdentificationData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = adi_imu__msg__ImuIdentificationData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
adi_imu__msg__ImuIdentificationData__Sequence__destroy(adi_imu__msg__ImuIdentificationData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    adi_imu__msg__ImuIdentificationData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
adi_imu__msg__ImuIdentificationData__Sequence__are_equal(const adi_imu__msg__ImuIdentificationData__Sequence * lhs, const adi_imu__msg__ImuIdentificationData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!adi_imu__msg__ImuIdentificationData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
adi_imu__msg__ImuIdentificationData__Sequence__copy(
  const adi_imu__msg__ImuIdentificationData__Sequence * input,
  adi_imu__msg__ImuIdentificationData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(adi_imu__msg__ImuIdentificationData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    adi_imu__msg__ImuIdentificationData * data =
      (adi_imu__msg__ImuIdentificationData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!adi_imu__msg__ImuIdentificationData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          adi_imu__msg__ImuIdentificationData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!adi_imu__msg__ImuIdentificationData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
