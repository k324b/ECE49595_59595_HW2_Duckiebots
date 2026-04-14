// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/ObstacleImageDetectionList.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__OBSTACLE_IMAGE_DETECTION_LIST__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__OBSTACLE_IMAGE_DETECTION_LIST__STRUCT_H_

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
#include "duckietown_msgs/msg/detail/obstacle_image_detection__struct.h"

/// Struct defined in msg/ObstacleImageDetectionList in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__ObstacleImageDetectionList
{
  std_msgs__msg__Header header;
  duckietown_msgs__msg__ObstacleImageDetection__Sequence list;
  float imwidth;
  float imheight;
} duckietown_msgs__msg__ObstacleImageDetectionList;

// Struct for a sequence of duckietown_msgs__msg__ObstacleImageDetectionList.
typedef struct duckietown_msgs__msg__ObstacleImageDetectionList__Sequence
{
  duckietown_msgs__msg__ObstacleImageDetectionList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__ObstacleImageDetectionList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__OBSTACLE_IMAGE_DETECTION_LIST__STRUCT_H_
