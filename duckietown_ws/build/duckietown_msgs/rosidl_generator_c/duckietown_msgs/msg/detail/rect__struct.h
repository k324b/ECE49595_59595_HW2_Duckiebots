// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/Rect.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__RECT__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__RECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Rect in the package duckietown_msgs.
/**
  * all in pixel coordinate
  * (x, y, w, h) defines a rectangle
 */
typedef struct duckietown_msgs__msg__Rect
{
  int32_t x;
  int32_t y;
  int32_t w;
  int32_t h;
} duckietown_msgs__msg__Rect;

// Struct for a sequence of duckietown_msgs__msg__Rect.
typedef struct duckietown_msgs__msg__Rect__Sequence
{
  duckietown_msgs__msg__Rect * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__Rect__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__RECT__STRUCT_H_
