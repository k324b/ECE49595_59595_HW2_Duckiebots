// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/MaintenanceState.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__MAINTENANCE_STATE__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__MAINTENANCE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'WAY_TO_MAINTENANCE'.
/**
  * pseudo constants
 */
static const char * const duckietown_msgs__msg__MaintenanceState__WAY_TO_MAINTENANCE = "WAY_TO_MAINTENANCE";

/// Constant 'WAY_TO_CHARGING'.
static const char * const duckietown_msgs__msg__MaintenanceState__WAY_TO_CHARGING = "WAY_TO_CHARGING";

/// Constant 'CHARGING'.
static const char * const duckietown_msgs__msg__MaintenanceState__CHARGING = "CHARGING";

/// Constant 'WAY_TO_CALIBRATING'.
static const char * const duckietown_msgs__msg__MaintenanceState__WAY_TO_CALIBRATING = "WAY_TO_CALIBRATING";

/// Constant 'CALIBRATING'.
static const char * const duckietown_msgs__msg__MaintenanceState__CALIBRATING = "CALIBRATING";

/// Constant 'WAY_TO_CITY'.
static const char * const duckietown_msgs__msg__MaintenanceState__WAY_TO_CITY = "WAY_TO_CITY";

/// Constant 'NONE'.
static const char * const duckietown_msgs__msg__MaintenanceState__NONE = "NONE";

// Include directives for member types
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MaintenanceState in the package duckietown_msgs.
/**
  * std_msgs/Header header
 */
typedef struct duckietown_msgs__msg__MaintenanceState
{
  rosidl_runtime_c__String state;
} duckietown_msgs__msg__MaintenanceState;

// Struct for a sequence of duckietown_msgs__msg__MaintenanceState.
typedef struct duckietown_msgs__msg__MaintenanceState__Sequence
{
  duckietown_msgs__msg__MaintenanceState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__MaintenanceState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__MAINTENANCE_STATE__STRUCT_H_
