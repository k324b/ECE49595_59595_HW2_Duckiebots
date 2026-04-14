// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/CoordinationSignalETHZ17.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__COORDINATION_SIGNAL_ETHZ17__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__COORDINATION_SIGNAL_ETHZ17__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFF'.
/**
  * these must match with LED_protocol.yaml
 */
static const char * const duckietown_msgs__msg__CoordinationSignalETHZ17__OFF = "light_off";

/// Constant 'ON'.
/**
  * string ON = light_on
 */
static const char * const duckietown_msgs__msg__CoordinationSignalETHZ17__ON = "traffic_light_go";

/// Constant 'SIGNAL_A'.
static const char * const duckietown_msgs__msg__CoordinationSignalETHZ17__SIGNAL_A = "CAR_SIGNAL_A";

/// Constant 'SIGNAL_B'.
static const char * const duckietown_msgs__msg__CoordinationSignalETHZ17__SIGNAL_B = "CAR_SIGNAL_B";

/// Constant 'SIGNAL_C'.
static const char * const duckietown_msgs__msg__CoordinationSignalETHZ17__SIGNAL_C = "CAR_SIGNAL_C";

/// Constant 'SIGNAL_GREEN'.
static const char * const duckietown_msgs__msg__CoordinationSignalETHZ17__SIGNAL_GREEN = "CAR_SIGNAL_GREEN";

/// Constant 'TL_GO_ALL'.
static const char * const duckietown_msgs__msg__CoordinationSignalETHZ17__TL_GO_ALL = "tl_go_all";

/// Constant 'TL_STOP_ALL'.
static const char * const duckietown_msgs__msg__CoordinationSignalETHZ17__TL_STOP_ALL = "tl_stop_all";

/// Constant 'TL_GO_N'.
static const char * const duckietown_msgs__msg__CoordinationSignalETHZ17__TL_GO_N = "tl_go_N";

/// Constant 'TL_GO_S'.
static const char * const duckietown_msgs__msg__CoordinationSignalETHZ17__TL_GO_S = "tl_go_S";

/// Constant 'TL_GO_W'.
static const char * const duckietown_msgs__msg__CoordinationSignalETHZ17__TL_GO_W = "tl_go_W";

/// Constant 'TL_GO_E'.
static const char * const duckietown_msgs__msg__CoordinationSignalETHZ17__TL_GO_E = "tl_go_E";

/// Constant 'TL_YIELD'.
static const char * const duckietown_msgs__msg__CoordinationSignalETHZ17__TL_YIELD = "tl_yield";

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'signal'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CoordinationSignalETHZ17 in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__CoordinationSignalETHZ17
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String signal;
} duckietown_msgs__msg__CoordinationSignalETHZ17;

// Struct for a sequence of duckietown_msgs__msg__CoordinationSignalETHZ17.
typedef struct duckietown_msgs__msg__CoordinationSignalETHZ17__Sequence
{
  duckietown_msgs__msg__CoordinationSignalETHZ17 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__CoordinationSignalETHZ17__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__COORDINATION_SIGNAL_ETHZ17__STRUCT_H_
