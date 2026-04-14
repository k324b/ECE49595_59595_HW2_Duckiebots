// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/Segment.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__SEGMENT__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__SEGMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'WHITE'.
enum
{
  duckietown_msgs__msg__Segment__WHITE = 0
};

/// Constant 'YELLOW'.
enum
{
  duckietown_msgs__msg__Segment__YELLOW = 1
};

/// Constant 'RED'.
enum
{
  duckietown_msgs__msg__Segment__RED = 2
};

// Include directives for member types
// Member 'pixels_normalized'
// Member 'normal'
#include "duckietown_msgs/msg/detail/vector2_d__struct.h"
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Segment in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__Segment
{
  uint8_t color;
  duckietown_msgs__msg__Vector2D pixels_normalized[2];
  duckietown_msgs__msg__Vector2D normal;
  geometry_msgs__msg__Point points[2];
} duckietown_msgs__msg__Segment;

// Struct for a sequence of duckietown_msgs__msg__Segment.
typedef struct duckietown_msgs__msg__Segment__Sequence
{
  duckietown_msgs__msg__Segment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__Segment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__SEGMENT__STRUCT_H_
