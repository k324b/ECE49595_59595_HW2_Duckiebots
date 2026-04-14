// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/SceneSegments.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__SCENE_SEGMENTS__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__SCENE_SEGMENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'segimage'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'rects'
#include "duckietown_msgs/msg/detail/rect__struct.h"

/// Struct defined in msg/SceneSegments in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__SceneSegments
{
  sensor_msgs__msg__Image segimage;
  duckietown_msgs__msg__Rect__Sequence rects;
} duckietown_msgs__msg__SceneSegments;

// Struct for a sequence of duckietown_msgs__msg__SceneSegments.
typedef struct duckietown_msgs__msg__SceneSegments__Sequence
{
  duckietown_msgs__msg__SceneSegments * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__SceneSegments__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__SCENE_SEGMENTS__STRUCT_H_
