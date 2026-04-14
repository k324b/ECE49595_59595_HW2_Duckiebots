// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/VehiclePose.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__VEHICLE_POSE__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__VEHICLE_POSE__STRUCT_H_

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
// Member 'rho'
// Member 'theta'
// Member 'psi'
#include "std_msgs/msg/detail/float32__struct.h"
// Member 'detection'
#include "std_msgs/msg/detail/bool__struct.h"

/// Struct defined in msg/VehiclePose in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__VehiclePose
{
  std_msgs__msg__Header header;
  std_msgs__msg__Float32 rho;
  std_msgs__msg__Float32 theta;
  std_msgs__msg__Float32 psi;
  std_msgs__msg__Bool detection;
} duckietown_msgs__msg__VehiclePose;

// Struct for a sequence of duckietown_msgs__msg__VehiclePose.
typedef struct duckietown_msgs__msg__VehiclePose__Sequence
{
  duckietown_msgs__msg__VehiclePose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__VehiclePose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__VEHICLE_POSE__STRUCT_H_
