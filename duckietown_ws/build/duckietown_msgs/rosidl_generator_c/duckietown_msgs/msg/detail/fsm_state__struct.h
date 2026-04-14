// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/FSMState.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__FSM_STATE__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__FSM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_FOLLOWING'.
/**
  * pseudo constants
 */
static const char * const duckietown_msgs__msg__FSMState__LANE_FOLLOWING = "LANE_FOLLOWING";

/// Constant 'INTERSECTION_COORDINATION'.
static const char * const duckietown_msgs__msg__FSMState__INTERSECTION_COORDINATION = "INTERSECTION_COORDINATION";

/// Constant 'INTERSECTION_CONTROL'.
static const char * const duckietown_msgs__msg__FSMState__INTERSECTION_CONTROL = "INTERSECTION_CONTROL";

/// Constant 'NORMAL_JOYSTICK_CONTROL'.
static const char * const duckietown_msgs__msg__FSMState__NORMAL_JOYSTICK_CONTROL = "NORMAL_JOYSTICK_CONTROL";

/// Constant 'SAFE_JOYSTICK_CONTROL'.
static const char * const duckietown_msgs__msg__FSMState__SAFE_JOYSTICK_CONTROL = "SAFE_JOYSTICK_CONTROL";

/// Constant 'PARKING'.
static const char * const duckietown_msgs__msg__FSMState__PARKING = "PARKING";

/// Constant 'ARRIVE_AT_STOP_LINE'.
static const char * const duckietown_msgs__msg__FSMState__ARRIVE_AT_STOP_LINE = "ARRIVE_AT_STOP_LINE";

/// Constant 'LANE_RECOVERY'.
static const char * const duckietown_msgs__msg__FSMState__LANE_RECOVERY = "LANE_RECOVERY";

/// Constant 'INTERSECTION_RECOVERY'.
static const char * const duckietown_msgs__msg__FSMState__INTERSECTION_RECOVERY = "INTERSECTION_RECOVERY";

/// Constant 'CALIBRATING'.
static const char * const duckietown_msgs__msg__FSMState__CALIBRATING = "CALIBRATING";

/// Constant 'CALIBRATING_CALC'.
static const char * const duckietown_msgs__msg__FSMState__CALIBRATING_CALC = "CALIBRATING_CALC";

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FSMState in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__FSMState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String state;
} duckietown_msgs__msg__FSMState;

// Struct for a sequence of duckietown_msgs__msg__FSMState.
typedef struct duckietown_msgs__msg__FSMState__Sequence
{
  duckietown_msgs__msg__FSMState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__FSMState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__FSM_STATE__STRUCT_H_
