// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from duckietown_msgs:msg/ThetaDotSample.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__THETA_DOT_SAMPLE__FUNCTIONS_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__THETA_DOT_SAMPLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "duckietown_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "duckietown_msgs/msg/detail/theta_dot_sample__struct.h"

/// Initialize msg/ThetaDotSample message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * duckietown_msgs__msg__ThetaDotSample
 * )) before or use
 * duckietown_msgs__msg__ThetaDotSample__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__ThetaDotSample__init(duckietown_msgs__msg__ThetaDotSample * msg);

/// Finalize msg/ThetaDotSample message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__ThetaDotSample__fini(duckietown_msgs__msg__ThetaDotSample * msg);

/// Create msg/ThetaDotSample message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * duckietown_msgs__msg__ThetaDotSample__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
duckietown_msgs__msg__ThetaDotSample *
duckietown_msgs__msg__ThetaDotSample__create();

/// Destroy msg/ThetaDotSample message.
/**
 * It calls
 * duckietown_msgs__msg__ThetaDotSample__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__ThetaDotSample__destroy(duckietown_msgs__msg__ThetaDotSample * msg);

/// Check for msg/ThetaDotSample message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__ThetaDotSample__are_equal(const duckietown_msgs__msg__ThetaDotSample * lhs, const duckietown_msgs__msg__ThetaDotSample * rhs);

/// Copy a msg/ThetaDotSample message.
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
duckietown_msgs__msg__ThetaDotSample__copy(
  const duckietown_msgs__msg__ThetaDotSample * input,
  duckietown_msgs__msg__ThetaDotSample * output);

/// Initialize array of msg/ThetaDotSample messages.
/**
 * It allocates the memory for the number of elements and calls
 * duckietown_msgs__msg__ThetaDotSample__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__ThetaDotSample__Sequence__init(duckietown_msgs__msg__ThetaDotSample__Sequence * array, size_t size);

/// Finalize array of msg/ThetaDotSample messages.
/**
 * It calls
 * duckietown_msgs__msg__ThetaDotSample__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__ThetaDotSample__Sequence__fini(duckietown_msgs__msg__ThetaDotSample__Sequence * array);

/// Create array of msg/ThetaDotSample messages.
/**
 * It allocates the memory for the array and calls
 * duckietown_msgs__msg__ThetaDotSample__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
duckietown_msgs__msg__ThetaDotSample__Sequence *
duckietown_msgs__msg__ThetaDotSample__Sequence__create(size_t size);

/// Destroy array of msg/ThetaDotSample messages.
/**
 * It calls
 * duckietown_msgs__msg__ThetaDotSample__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__ThetaDotSample__Sequence__destroy(duckietown_msgs__msg__ThetaDotSample__Sequence * array);

/// Check for msg/ThetaDotSample message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__ThetaDotSample__Sequence__are_equal(const duckietown_msgs__msg__ThetaDotSample__Sequence * lhs, const duckietown_msgs__msg__ThetaDotSample__Sequence * rhs);

/// Copy an array of msg/ThetaDotSample messages.
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
duckietown_msgs__msg__ThetaDotSample__Sequence__copy(
  const duckietown_msgs__msg__ThetaDotSample__Sequence * input,
  duckietown_msgs__msg__ThetaDotSample__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__THETA_DOT_SAMPLE__FUNCTIONS_H_
