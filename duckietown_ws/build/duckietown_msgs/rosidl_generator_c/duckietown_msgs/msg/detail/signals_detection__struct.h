// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/SignalsDetection.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__SIGNALS_DETECTION__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__SIGNALS_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_CAR'.
/**
  * For the first backoff approach
  * string led_detected
  * string no_led_detected
  * Each of these can be:
 */
static const char * const duckietown_msgs__msg__SignalsDetection__NO_CAR = "no_car_detected";

/// Constant 'SIGNAL_A'.
static const char * const duckietown_msgs__msg__SignalsDetection__SIGNAL_A = "car_signal_A";

/// Constant 'SIGNAL_B'.
static const char * const duckietown_msgs__msg__SignalsDetection__SIGNAL_B = "car_signal_B";

/// Constant 'SIGNAL_C'.
static const char * const duckietown_msgs__msg__SignalsDetection__SIGNAL_C = "car_signal_C";

/// Constant 'SIGNAL_PRIORITY'.
static const char * const duckietown_msgs__msg__SignalsDetection__SIGNAL_PRIORITY = "car_signal_priority";

/// Constant 'SIGNAL_SACRIFICE_FOR_PRIORITY'.
static const char * const duckietown_msgs__msg__SignalsDetection__SIGNAL_SACRIFICE_FOR_PRIORITY = "car_signal_sacrifice_for_priority";

/// Constant 'NO_CARS'.
static const char * const duckietown_msgs__msg__SignalsDetection__NO_CARS = "no_cars_detected";

/// Constant 'CARS'.
static const char * const duckietown_msgs__msg__SignalsDetection__CARS = "cars_detected";

/// Constant 'NO_TRAFFIC_LIGHT'.
static const char * const duckietown_msgs__msg__SignalsDetection__NO_TRAFFIC_LIGHT = "no_traffic_light";

/// Constant 'STOP'.
static const char * const duckietown_msgs__msg__SignalsDetection__STOP = "tl_stop";

/// Constant 'GO'.
static const char * const duckietown_msgs__msg__SignalsDetection__GO = "tl_go";

/// Constant 'YIELD'.
static const char * const duckietown_msgs__msg__SignalsDetection__YIELD = "tl_yield";

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'front'
// Member 'right'
// Member 'left'
// Member 'traffic_light_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SignalsDetection in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__SignalsDetection
{
  std_msgs__msg__Header header;
  /// this is what we can see at the intersection:
  rosidl_runtime_c__String front;
  rosidl_runtime_c__String right;
  rosidl_runtime_c__String left;
  /// Plus we can see the traffic light
  /// for the moment we assume that no traffic light exists
  rosidl_runtime_c__String traffic_light_state;
} duckietown_msgs__msg__SignalsDetection;

// Struct for a sequence of duckietown_msgs__msg__SignalsDetection.
typedef struct duckietown_msgs__msg__SignalsDetection__Sequence
{
  duckietown_msgs__msg__SignalsDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__SignalsDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__SIGNALS_DETECTION__STRUCT_H_
