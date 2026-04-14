// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/CoordinationClearance.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__COORDINATION_CLEARANCE__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__COORDINATION_CLEARANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NA'.
enum
{
  duckietown_msgs__msg__CoordinationClearance__NA = -1
};

/// Constant 'WAIT'.
enum
{
  duckietown_msgs__msg__CoordinationClearance__WAIT = 0
};

/// Constant 'GO'.
enum
{
  duckietown_msgs__msg__CoordinationClearance__GO = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/CoordinationClearance in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__CoordinationClearance
{
  std_msgs__msg__Header header;
  int8_t status;
} duckietown_msgs__msg__CoordinationClearance;

// Struct for a sequence of duckietown_msgs__msg__CoordinationClearance.
typedef struct duckietown_msgs__msg__CoordinationClearance__Sequence
{
  duckietown_msgs__msg__CoordinationClearance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__CoordinationClearance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__COORDINATION_CLEARANCE__STRUCT_H_
