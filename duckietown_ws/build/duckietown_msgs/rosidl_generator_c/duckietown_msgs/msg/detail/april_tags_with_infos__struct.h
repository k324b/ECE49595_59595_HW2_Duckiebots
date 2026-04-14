// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/AprilTagsWithInfos.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__APRIL_TAGS_WITH_INFOS__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__APRIL_TAGS_WITH_INFOS__STRUCT_H_

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
// Member 'detections'
#include "duckietown_msgs/msg/detail/april_tag_detection__struct.h"
// Member 'infos'
#include "duckietown_msgs/msg/detail/tag_info__struct.h"

/// Struct defined in msg/AprilTagsWithInfos in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__AprilTagsWithInfos
{
  std_msgs__msg__Header header;
  duckietown_msgs__msg__AprilTagDetection__Sequence detections;
  duckietown_msgs__msg__TagInfo__Sequence infos;
} duckietown_msgs__msg__AprilTagsWithInfos;

// Struct for a sequence of duckietown_msgs__msg__AprilTagsWithInfos.
typedef struct duckietown_msgs__msg__AprilTagsWithInfos__Sequence
{
  duckietown_msgs__msg__AprilTagsWithInfos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__AprilTagsWithInfos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__APRIL_TAGS_WITH_INFOS__STRUCT_H_
