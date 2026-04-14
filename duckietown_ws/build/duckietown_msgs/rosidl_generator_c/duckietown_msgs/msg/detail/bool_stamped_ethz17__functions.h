// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from duckietown_msgs:msg/BoolStampedETHZ17.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__BOOL_STAMPED_ETHZ17__FUNCTIONS_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__BOOL_STAMPED_ETHZ17__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "duckietown_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "duckietown_msgs/msg/detail/bool_stamped_ethz17__struct.h"

/// Initialize msg/BoolStampedETHZ17 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * duckietown_msgs__msg__BoolStampedETHZ17
 * )) before or use
 * duckietown_msgs__msg__BoolStampedETHZ17__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__BoolStampedETHZ17__init(duckietown_msgs__msg__BoolStampedETHZ17 * msg);

/// Finalize msg/BoolStampedETHZ17 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__BoolStampedETHZ17__fini(duckietown_msgs__msg__BoolStampedETHZ17 * msg);

/// Create msg/BoolStampedETHZ17 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * duckietown_msgs__msg__BoolStampedETHZ17__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
duckietown_msgs__msg__BoolStampedETHZ17 *
duckietown_msgs__msg__BoolStampedETHZ17__create();

/// Destroy msg/BoolStampedETHZ17 message.
/**
 * It calls
 * duckietown_msgs__msg__BoolStampedETHZ17__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__BoolStampedETHZ17__destroy(duckietown_msgs__msg__BoolStampedETHZ17 * msg);

/// Check for msg/BoolStampedETHZ17 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__BoolStampedETHZ17__are_equal(const duckietown_msgs__msg__BoolStampedETHZ17 * lhs, const duckietown_msgs__msg__BoolStampedETHZ17 * rhs);

/// Copy a msg/BoolStampedETHZ17 message.
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
duckietown_msgs__msg__BoolStampedETHZ17__copy(
  const duckietown_msgs__msg__BoolStampedETHZ17 * input,
  duckietown_msgs__msg__BoolStampedETHZ17 * output);

/// Initialize array of msg/BoolStampedETHZ17 messages.
/**
 * It allocates the memory for the number of elements and calls
 * duckietown_msgs__msg__BoolStampedETHZ17__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__BoolStampedETHZ17__Sequence__init(duckietown_msgs__msg__BoolStampedETHZ17__Sequence * array, size_t size);

/// Finalize array of msg/BoolStampedETHZ17 messages.
/**
 * It calls
 * duckietown_msgs__msg__BoolStampedETHZ17__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__BoolStampedETHZ17__Sequence__fini(duckietown_msgs__msg__BoolStampedETHZ17__Sequence * array);

/// Create array of msg/BoolStampedETHZ17 messages.
/**
 * It allocates the memory for the array and calls
 * duckietown_msgs__msg__BoolStampedETHZ17__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
duckietown_msgs__msg__BoolStampedETHZ17__Sequence *
duckietown_msgs__msg__BoolStampedETHZ17__Sequence__create(size_t size);

/// Destroy array of msg/BoolStampedETHZ17 messages.
/**
 * It calls
 * duckietown_msgs__msg__BoolStampedETHZ17__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__BoolStampedETHZ17__Sequence__destroy(duckietown_msgs__msg__BoolStampedETHZ17__Sequence * array);

/// Check for msg/BoolStampedETHZ17 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__BoolStampedETHZ17__Sequence__are_equal(const duckietown_msgs__msg__BoolStampedETHZ17__Sequence * lhs, const duckietown_msgs__msg__BoolStampedETHZ17__Sequence * rhs);

/// Copy an array of msg/BoolStampedETHZ17 messages.
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
duckietown_msgs__msg__BoolStampedETHZ17__Sequence__copy(
  const duckietown_msgs__msg__BoolStampedETHZ17__Sequence * input,
  duckietown_msgs__msg__BoolStampedETHZ17__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__BOOL_STAMPED_ETHZ17__FUNCTIONS_H_
