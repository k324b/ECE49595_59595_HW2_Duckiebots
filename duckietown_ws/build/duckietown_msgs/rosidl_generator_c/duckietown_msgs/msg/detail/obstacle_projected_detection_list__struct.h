// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/ObstacleProjectedDetectionList.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__OBSTACLE_PROJECTED_DETECTION_LIST__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__OBSTACLE_PROJECTED_DETECTION_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'list'
#include "duckietown_msgs/msg/detail/obstacle_projected_detection__struct.h"

/// Struct defined in msg/ObstacleProjectedDetectionList in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__ObstacleProjectedDetectionList
{
  std_msgs__msg__Header header;
  duckietown_msgs__msg__ObstacleProjectedDetection__Sequence list;
} duckietown_msgs__msg__ObstacleProjectedDetectionList;

// Struct for a sequence of duckietown_msgs__msg__ObstacleProjectedDetectionList.
typedef struct duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence
{
  duckietown_msgs__msg__ObstacleProjectedDetectionList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__ObstacleProjectedDetectionList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__OBSTACLE_PROJECTED_DETECTION_LIST__STRUCT_H_
