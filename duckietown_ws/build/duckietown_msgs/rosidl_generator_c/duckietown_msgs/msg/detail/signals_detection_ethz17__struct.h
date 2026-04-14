// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/SignalsDetectionETHZ17.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__SIGNALS_DETECTION_ETHZ17__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__SIGNALS_DETECTION_ETHZ17__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SIGNAL_A'.
/**
  *  Each of these can be:
  * string NO_CAR='no_car_detected'
 */
static const char * const duckietown_msgs__msg__SignalsDetectionETHZ17__SIGNAL_A = "car_signal_A";

/// Constant 'SIGNAL_B'.
static const char * const duckietown_msgs__msg__SignalsDetectionETHZ17__SIGNAL_B = "car_signal_B";

/// Constant 'SIGNAL_C'.
static const char * const duckietown_msgs__msg__SignalsDetectionETHZ17__SIGNAL_C = "car_signal_C";

/// Constant 'NO_CARS'.
static const char * const duckietown_msgs__msg__SignalsDetectionETHZ17__NO_CARS = "no_cars_detected";

/// Constant 'CARS'.
static const char * const duckietown_msgs__msg__SignalsDetectionETHZ17__CARS = "cars_detected";

/// Constant 'GO'.
/**
  *  Plus we can see the traffic light
  *  for the moment we assume that no traffic light exists
  * string traffic_light_state
  * string NO_TRAFFIC_LIGHT='no_traffic_light'
  * string STOP='tl_stop'
 */
static const char * const duckietown_msgs__msg__SignalsDetectionETHZ17__GO = "tl_go";

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'led_detected'
// Member 'no_led_detected'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SignalsDetectionETHZ17 in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__SignalsDetectionETHZ17
{
  std_msgs__msg__Header header;
  ///  this is what we can see at the intersection:
  /// string front
  /// string right
  /// string left
  ///  For the first backoff approach
  rosidl_runtime_c__String led_detected;
  rosidl_runtime_c__String no_led_detected;
} duckietown_msgs__msg__SignalsDetectionETHZ17;

// Struct for a sequence of duckietown_msgs__msg__SignalsDetectionETHZ17.
typedef struct duckietown_msgs__msg__SignalsDetectionETHZ17__Sequence
{
  duckietown_msgs__msg__SignalsDetectionETHZ17 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__SignalsDetectionETHZ17__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__SIGNALS_DETECTION_ETHZ17__STRUCT_H_
