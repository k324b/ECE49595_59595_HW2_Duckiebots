// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/KinematicsWeights.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__KINEMATICS_WEIGHTS__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__KINEMATICS_WEIGHTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'weights'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/KinematicsWeights in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__KinematicsWeights
{
  rosidl_runtime_c__double__Sequence weights;
} duckietown_msgs__msg__KinematicsWeights;

// Struct for a sequence of duckietown_msgs__msg__KinematicsWeights.
typedef struct duckietown_msgs__msg__KinematicsWeights__Sequence
{
  duckietown_msgs__msg__KinematicsWeights * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__KinematicsWeights__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__KINEMATICS_WEIGHTS__STRUCT_H_
