// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/Vector2D.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__VECTOR2_D__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__VECTOR2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Vector2D in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__Vector2D
{
  float x;
  float y;
} duckietown_msgs__msg__Vector2D;

// Struct for a sequence of duckietown_msgs__msg__Vector2D.
typedef struct duckietown_msgs__msg__Vector2D__Sequence
{
  duckietown_msgs__msg__Vector2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__Vector2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__VECTOR2_D__STRUCT_H_
