// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from duckietown_msgs:msg/TurnIDandType.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__TURN_I_DAND_TYPE__FUNCTIONS_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__TURN_I_DAND_TYPE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "duckietown_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "duckietown_msgs/msg/detail/turn_i_dand_type__struct.h"

/// Initialize msg/TurnIDandType message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * duckietown_msgs__msg__TurnIDandType
 * )) before or use
 * duckietown_msgs__msg__TurnIDandType__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__TurnIDandType__init(duckietown_msgs__msg__TurnIDandType * msg);

/// Finalize msg/TurnIDandType message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__TurnIDandType__fini(duckietown_msgs__msg__TurnIDandType * msg);

/// Create msg/TurnIDandType message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * duckietown_msgs__msg__TurnIDandType__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
duckietown_msgs__msg__TurnIDandType *
duckietown_msgs__msg__TurnIDandType__create();

/// Destroy msg/TurnIDandType message.
/**
 * It calls
 * duckietown_msgs__msg__TurnIDandType__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__TurnIDandType__destroy(duckietown_msgs__msg__TurnIDandType * msg);

/// Check for msg/TurnIDandType message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__TurnIDandType__are_equal(const duckietown_msgs__msg__TurnIDandType * lhs, const duckietown_msgs__msg__TurnIDandType * rhs);

/// Copy a msg/TurnIDandType message.
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
duckietown_msgs__msg__TurnIDandType__copy(
  const duckietown_msgs__msg__TurnIDandType * input,
  duckietown_msgs__msg__TurnIDandType * output);

/// Initialize array of msg/TurnIDandType messages.
/**
 * It allocates the memory for the number of elements and calls
 * duckietown_msgs__msg__TurnIDandType__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__TurnIDandType__Sequence__init(duckietown_msgs__msg__TurnIDandType__Sequence * array, size_t size);

/// Finalize array of msg/TurnIDandType messages.
/**
 * It calls
 * duckietown_msgs__msg__TurnIDandType__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__TurnIDandType__Sequence__fini(duckietown_msgs__msg__TurnIDandType__Sequence * array);

/// Create array of msg/TurnIDandType messages.
/**
 * It allocates the memory for the array and calls
 * duckietown_msgs__msg__TurnIDandType__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
duckietown_msgs__msg__TurnIDandType__Sequence *
duckietown_msgs__msg__TurnIDandType__Sequence__create(size_t size);

/// Destroy array of msg/TurnIDandType messages.
/**
 * It calls
 * duckietown_msgs__msg__TurnIDandType__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__TurnIDandType__Sequence__destroy(duckietown_msgs__msg__TurnIDandType__Sequence * array);

/// Check for msg/TurnIDandType message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__TurnIDandType__Sequence__are_equal(const duckietown_msgs__msg__TurnIDandType__Sequence * lhs, const duckietown_msgs__msg__TurnIDandType__Sequence * rhs);

/// Copy an array of msg/TurnIDandType messages.
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
duckietown_msgs__msg__TurnIDandType__Sequence__copy(
  const duckietown_msgs__msg__TurnIDandType__Sequence * input,
  duckietown_msgs__msg__TurnIDandType__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__TURN_I_DAND_TYPE__FUNCTIONS_H_
