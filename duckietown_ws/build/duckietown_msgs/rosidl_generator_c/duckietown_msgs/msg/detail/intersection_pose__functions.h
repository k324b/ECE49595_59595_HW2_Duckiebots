// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from duckietown_msgs:msg/IntersectionPose.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__INTERSECTION_POSE__FUNCTIONS_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__INTERSECTION_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "duckietown_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "duckietown_msgs/msg/detail/intersection_pose__struct.h"

/// Initialize msg/IntersectionPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * duckietown_msgs__msg__IntersectionPose
 * )) before or use
 * duckietown_msgs__msg__IntersectionPose__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__IntersectionPose__init(duckietown_msgs__msg__IntersectionPose * msg);

/// Finalize msg/IntersectionPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__IntersectionPose__fini(duckietown_msgs__msg__IntersectionPose * msg);

/// Create msg/IntersectionPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * duckietown_msgs__msg__IntersectionPose__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
duckietown_msgs__msg__IntersectionPose *
duckietown_msgs__msg__IntersectionPose__create();

/// Destroy msg/IntersectionPose message.
/**
 * It calls
 * duckietown_msgs__msg__IntersectionPose__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__IntersectionPose__destroy(duckietown_msgs__msg__IntersectionPose * msg);

/// Check for msg/IntersectionPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__IntersectionPose__are_equal(const duckietown_msgs__msg__IntersectionPose * lhs, const duckietown_msgs__msg__IntersectionPose * rhs);

/// Copy a msg/IntersectionPose message.
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
duckietown_msgs__msg__IntersectionPose__copy(
  const duckietown_msgs__msg__IntersectionPose * input,
  duckietown_msgs__msg__IntersectionPose * output);

/// Initialize array of msg/IntersectionPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * duckietown_msgs__msg__IntersectionPose__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__IntersectionPose__Sequence__init(duckietown_msgs__msg__IntersectionPose__Sequence * array, size_t size);

/// Finalize array of msg/IntersectionPose messages.
/**
 * It calls
 * duckietown_msgs__msg__IntersectionPose__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__IntersectionPose__Sequence__fini(duckietown_msgs__msg__IntersectionPose__Sequence * array);

/// Create array of msg/IntersectionPose messages.
/**
 * It allocates the memory for the array and calls
 * duckietown_msgs__msg__IntersectionPose__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
duckietown_msgs__msg__IntersectionPose__Sequence *
duckietown_msgs__msg__IntersectionPose__Sequence__create(size_t size);

/// Destroy array of msg/IntersectionPose messages.
/**
 * It calls
 * duckietown_msgs__msg__IntersectionPose__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__IntersectionPose__Sequence__destroy(duckietown_msgs__msg__IntersectionPose__Sequence * array);

/// Check for msg/IntersectionPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__IntersectionPose__Sequence__are_equal(const duckietown_msgs__msg__IntersectionPose__Sequence * lhs, const duckietown_msgs__msg__IntersectionPose__Sequence * rhs);

/// Copy an array of msg/IntersectionPose messages.
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
duckietown_msgs__msg__IntersectionPose__Sequence__copy(
  const duckietown_msgs__msg__IntersectionPose__Sequence * input,
  duckietown_msgs__msg__IntersectionPose__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__INTERSECTION_POSE__FUNCTIONS_H_
