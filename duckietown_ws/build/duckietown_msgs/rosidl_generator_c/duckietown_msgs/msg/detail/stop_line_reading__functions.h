// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from duckietown_msgs:msg/StopLineReading.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__STOP_LINE_READING__FUNCTIONS_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__STOP_LINE_READING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "duckietown_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "duckietown_msgs/msg/detail/stop_line_reading__struct.h"

/// Initialize msg/StopLineReading message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * duckietown_msgs__msg__StopLineReading
 * )) before or use
 * duckietown_msgs__msg__StopLineReading__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__StopLineReading__init(duckietown_msgs__msg__StopLineReading * msg);

/// Finalize msg/StopLineReading message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__StopLineReading__fini(duckietown_msgs__msg__StopLineReading * msg);

/// Create msg/StopLineReading message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * duckietown_msgs__msg__StopLineReading__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
duckietown_msgs__msg__StopLineReading *
duckietown_msgs__msg__StopLineReading__create();

/// Destroy msg/StopLineReading message.
/**
 * It calls
 * duckietown_msgs__msg__StopLineReading__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__StopLineReading__destroy(duckietown_msgs__msg__StopLineReading * msg);

/// Check for msg/StopLineReading message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__StopLineReading__are_equal(const duckietown_msgs__msg__StopLineReading * lhs, const duckietown_msgs__msg__StopLineReading * rhs);

/// Copy a msg/StopLineReading message.
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
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__StopLineReading__copy(
  const duckietown_msgs__msg__StopLineReading * input,
  duckietown_msgs__msg__StopLineReading * output);

/// Initialize array of msg/StopLineReading messages.
/**
 * It allocates the memory for the number of elements and calls
 * duckietown_msgs__msg__StopLineReading__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__StopLineReading__Sequence__init(duckietown_msgs__msg__StopLineReading__Sequence * array, size_t size);

/// Finalize array of msg/StopLineReading messages.
/**
 * It calls
 * duckietown_msgs__msg__StopLineReading__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__StopLineReading__Sequence__fini(duckietown_msgs__msg__StopLineReading__Sequence * array);

/// Create array of msg/StopLineReading messages.
/**
 * It allocates the memory for the array and calls
 * duckietown_msgs__msg__StopLineReading__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
duckietown_msgs__msg__StopLineReading__Sequence *
duckietown_msgs__msg__StopLineReading__Sequence__create(size_t size);

/// Destroy array of msg/StopLineReading messages.
/**
 * It calls
 * duckietown_msgs__msg__StopLineReading__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__StopLineReading__Sequence__destroy(duckietown_msgs__msg__StopLineReading__Sequence * array);

/// Check for msg/StopLineReading message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__StopLineReading__Sequence__are_equal(const duckietown_msgs__msg__StopLineReading__Sequence * lhs, const duckietown_msgs__msg__StopLineReading__Sequence * rhs);

/// Copy an array of msg/StopLineReading messages.
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
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__StopLineReading__Sequence__copy(
  const duckietown_msgs__msg__StopLineReading__Sequence * input,
  duckietown_msgs__msg__StopLineReading__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__STOP_LINE_READING__FUNCTIONS_H_
