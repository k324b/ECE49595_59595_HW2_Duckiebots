// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/AntiInstagramHealth.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__ANTI_INSTAGRAM_HEALTH__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__ANTI_INSTAGRAM_HEALTH__STRUCT_H_

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

/// Struct defined in msg/AntiInstagramHealth in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__AntiInstagramHealth
{
  std_msgs__msg__Header header;
  float j1;
  float j2;
  float j3;
} duckietown_msgs__msg__AntiInstagramHealth;

// Struct for a sequence of duckietown_msgs__msg__AntiInstagramHealth.
typedef struct duckietown_msgs__msg__AntiInstagramHealth__Sequence
{
  duckietown_msgs__msg__AntiInstagramHealth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__AntiInstagramHealth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__ANTI_INSTAGRAM_HEALTH__STRUCT_H_
