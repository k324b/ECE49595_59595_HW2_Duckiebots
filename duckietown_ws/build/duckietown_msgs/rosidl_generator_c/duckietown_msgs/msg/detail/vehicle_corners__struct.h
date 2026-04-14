// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/VehicleCorners.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__VEHICLE_CORNERS__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__VEHICLE_CORNERS__STRUCT_H_

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
// Member 'corners'
#include "geometry_msgs/msg/detail/point32__struct.h"
// Member 'detection'
#include "std_msgs/msg/detail/bool__struct.h"

/// Struct defined in msg/VehicleCorners in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__VehicleCorners
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point32__Sequence corners;
  std_msgs__msg__Bool detection;
  int32_t h;
  int32_t w;
} duckietown_msgs__msg__VehicleCorners;

// Struct for a sequence of duckietown_msgs__msg__VehicleCorners.
typedef struct duckietown_msgs__msg__VehicleCorners__Sequence
{
  duckietown_msgs__msg__VehicleCorners * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__VehicleCorners__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__VEHICLE_CORNERS__STRUCT_H_
