// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from adi_imu:msg/ImuIdentificationData.idl
// generated code does not contain a copyright notice

#ifndef ADI_IMU__MSG__DETAIL__IMU_IDENTIFICATION_DATA__FUNCTIONS_H_
#define ADI_IMU__MSG__DETAIL__IMU_IDENTIFICATION_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "adi_imu/msg/rosidl_generator_c__visibility_control.h"

#include "adi_imu/msg/detail/imu_identification_data__struct.h"

/// Initialize msg/ImuIdentificationData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * adi_imu__msg__ImuIdentificationData
 * )) before or use
 * adi_imu__msg__ImuIdentificationData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_adi_imu
bool
adi_imu__msg__ImuIdentificationData__init(adi_imu__msg__ImuIdentificationData * msg);

/// Finalize msg/ImuIdentificationData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_adi_imu
void
adi_imu__msg__ImuIdentificationData__fini(adi_imu__msg__ImuIdentificationData * msg);

/// Create msg/ImuIdentificationData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * adi_imu__msg__ImuIdentificationData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_adi_imu
adi_imu__msg__ImuIdentificationData *
adi_imu__msg__ImuIdentificationData__create();

/// Destroy msg/ImuIdentificationData message.
/**
 * It calls
 * adi_imu__msg__ImuIdentificationData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_adi_imu
void
adi_imu__msg__ImuIdentificationData__destroy(adi_imu__msg__ImuIdentificationData * msg);

/// Check for msg/ImuIdentificationData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_adi_imu
bool
adi_imu__msg__ImuIdentificationData__are_equal(const adi_imu__msg__ImuIdentificationData * lhs, const adi_imu__msg__ImuIdentificationData * rhs);

/// Copy a msg/ImuIdentificationData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_adi_imu
bool
adi_imu__msg__ImuIdentificationData__copy(
  const adi_imu__msg__ImuIdentificationData * input,
  adi_imu__msg__ImuIdentificationData * output);

/// Initialize array of msg/ImuIdentificationData messages.
/**
 * It allocates the memory for the number of elements and calls
 * adi_imu__msg__ImuIdentificationData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_adi_imu
bool
adi_imu__msg__ImuIdentificationData__Sequence__init(adi_imu__msg__ImuIdentificationData__Sequence * array, size_t size);

/// Finalize array of msg/ImuIdentificationData messages.
/**
 * It calls
 * adi_imu__msg__ImuIdentificationData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_adi_imu
void
adi_imu__msg__ImuIdentificationData__Sequence__fini(adi_imu__msg__ImuIdentificationData__Sequence * array);

/// Create array of msg/ImuIdentificationData messages.
/**
 * It allocates the memory for the array and calls
 * adi_imu__msg__ImuIdentificationData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_adi_imu
adi_imu__msg__ImuIdentificationData__Sequence *
adi_imu__msg__ImuIdentificationData__Sequence__create(size_t size);

/// Destroy array of msg/ImuIdentificationData messages.
/**
 * It calls
 * adi_imu__msg__ImuIdentificationData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_adi_imu
void
adi_imu__msg__ImuIdentificationData__Sequence__destroy(adi_imu__msg__ImuIdentificationData__Sequence * array);

/// Check for msg/ImuIdentificationData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_adi_imu
bool
adi_imu__msg__ImuIdentificationData__Sequence__are_equal(const adi_imu__msg__ImuIdentificationData__Sequence * lhs, const adi_imu__msg__ImuIdentificationData__Sequence * rhs);

/// Copy an array of msg/ImuIdentificationData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_adi_imu
bool
adi_imu__msg__ImuIdentificationData__Sequence__copy(
  const adi_imu__msg__ImuIdentificationData__Sequence * input,
  adi_imu__msg__ImuIdentificationData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ADI_IMU__MSG__DETAIL__IMU_IDENTIFICATION_DATA__FUNCTIONS_H_
