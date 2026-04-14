// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/Pixel.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__PIXEL__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__PIXEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Pixel in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__Pixel
{
  int32_t u;
  int32_t v;
} duckietown_msgs__msg__Pixel;

// Struct for a sequence of duckietown_msgs__msg__Pixel.
typedef struct duckietown_msgs__msg__Pixel__Sequence
{
  duckietown_msgs__msg__Pixel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__Pixel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__PIXEL__STRUCT_H_
