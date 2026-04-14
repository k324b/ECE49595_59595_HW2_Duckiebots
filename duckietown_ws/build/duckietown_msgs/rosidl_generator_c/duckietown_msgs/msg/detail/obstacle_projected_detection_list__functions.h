// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from duckietown_msgs:msg/ObstacleProjectedDetectionList.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__OBSTACLE_PROJECTED_DETECTION_LIST__FUNCTIONS_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__OBSTACLE_PROJECTED_DETECTION_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "duckietown_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "duckietown_msgs/msg/detail/obstacle_projected_detection_list__struct.h"

/// Initialize msg/ObstacleProjectedDetectionList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * duckietown_msgs__msg__ObstacleProjectedDetectionList
 * )) before or use
 * duckietown_msgs__msg__ObstacleProjectedDetectionList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__ObstacleProjectedDetectionList__init(duckietown_msgs__msg__ObstacleProjectedDetectionList * msg);

/// Finalize msg/ObstacleProjectedDetectionList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__ObstacleProjectedDetectionList__fini(duckietown_msgs__msg__ObstacleProjectedDetectionList * msg);

/// Create msg/ObstacleProjectedDetectionList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * duckietown_msgs__msg__ObstacleProjectedDetectionList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
duckietown_msgs__msg__ObstacleProjectedDetectionList *
duckietown_msgs__msg__ObstacleProjectedDetectionList__create();

/// Destroy msg/ObstacleProjectedDetectionList message.
/**
 * It calls
 * duckietown_msgs__msg__ObstacleProjectedDetectionList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__ObstacleProjectedDetectionList__destroy(duckietown_msgs__msg__ObstacleProjectedDetectionList * msg);

/// Check for msg/ObstacleProjectedDetectionList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__ObstacleProjectedDetectionList__are_equal(const duckietown_msgs__msg__ObstacleProjectedDetectionList * lhs, const duckietown_msgs__msg__ObstacleProjectedDetectionList * rhs);

/// Copy a msg/ObstacleProjectedDetectionList message.
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
duckietown_msgs__msg__ObstacleProjectedDetectionList__copy(
  const duckietown_msgs__msg__ObstacleProjectedDetectionList * input,
  duckietown_msgs__msg__ObstacleProjectedDetectionList * output);

/// Initialize array of msg/ObstacleProjectedDetectionList messages.
/**
 * It allocates the memory for the number of elements and calls
 * duckietown_msgs__msg__ObstacleProjectedDetectionList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence__init(duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence * array, size_t size);

/// Finalize array of msg/ObstacleProjectedDetectionList messages.
/**
 * It calls
 * duckietown_msgs__msg__ObstacleProjectedDetectionList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence__fini(duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence * array);

/// Create array of msg/ObstacleProjectedDetectionList messages.
/**
 * It allocates the memory for the array and calls
 * duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence *
duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence__create(size_t size);

/// Destroy array of msg/ObstacleProjectedDetectionList messages.
/**
 * It calls
 * duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
void
duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence__destroy(duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence * array);

/// Check for msg/ObstacleProjectedDetectionList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duckietown_msgs
bool
duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence__are_equal(const duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence * lhs, const duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence * rhs);

/// Copy an array of msg/ObstacleProjectedDetectionList messages.
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
duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence__copy(
  const duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence * input,
  duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__OBSTACLE_PROJECTED_DETECTION_LIST__FUNCTIONS_H_
