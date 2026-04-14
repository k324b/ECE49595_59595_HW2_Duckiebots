// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/TagInfo.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__TAG_INFO__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__TAG_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'S_NAME'.
enum
{
  duckietown_msgs__msg__TagInfo__S_NAME = 0
};

/// Constant 'SIGN'.
enum
{
  duckietown_msgs__msg__TagInfo__SIGN = 1
};

/// Constant 'LIGHT'.
enum
{
  duckietown_msgs__msg__TagInfo__LIGHT = 2
};

/// Constant 'LOCALIZE'.
enum
{
  duckietown_msgs__msg__TagInfo__LOCALIZE = 3
};

/// Constant 'VEHICLE'.
enum
{
  duckietown_msgs__msg__TagInfo__VEHICLE = 4
};

/// Constant 'STOP'.
/**
  * (12 possible traffic sign types)
 */
enum
{
  duckietown_msgs__msg__TagInfo__STOP = 5
};

/// Constant 'YIELD'.
enum
{
  duckietown_msgs__msg__TagInfo__YIELD = 6
};

/// Constant 'NO_RIGHT_TURN'.
enum
{
  duckietown_msgs__msg__TagInfo__NO_RIGHT_TURN = 7
};

/// Constant 'NO_LEFT_TURN'.
enum
{
  duckietown_msgs__msg__TagInfo__NO_LEFT_TURN = 8
};

/// Constant 'ONEWAY_RIGHT'.
enum
{
  duckietown_msgs__msg__TagInfo__ONEWAY_RIGHT = 9
};

/// Constant 'ONEWAY_LEFT'.
enum
{
  duckietown_msgs__msg__TagInfo__ONEWAY_LEFT = 10
};

/// Constant 'FOUR_WAY'.
enum
{
  duckietown_msgs__msg__TagInfo__FOUR_WAY = 11
};

/// Constant 'RIGHT_T_INTERSECT'.
enum
{
  duckietown_msgs__msg__TagInfo__RIGHT_T_INTERSECT = 12
};

/// Constant 'LEFT_T_INTERSECT'.
enum
{
  duckietown_msgs__msg__TagInfo__LEFT_T_INTERSECT = 13
};

/// Constant 'T_INTERSECTION'.
enum
{
  duckietown_msgs__msg__TagInfo__T_INTERSECTION = 14
};

/// Constant 'DO_NOT_ENTER'.
enum
{
  duckietown_msgs__msg__TagInfo__DO_NOT_ENTER = 15
};

/// Constant 'PEDESTRIAN'.
enum
{
  duckietown_msgs__msg__TagInfo__PEDESTRIAN = 16
};

/// Constant 'T_LIGHT_AHEAD'.
enum
{
  duckietown_msgs__msg__TagInfo__T_LIGHT_AHEAD = 17
};

/// Constant 'DUCK_CROSSING'.
enum
{
  duckietown_msgs__msg__TagInfo__DUCK_CROSSING = 18
};

/// Constant 'PARKING'.
enum
{
  duckietown_msgs__msg__TagInfo__PARKING = 19
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'street_name'
// Member 'vehicle_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TagInfo in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__TagInfo
{
  std_msgs__msg__Header header;
  int32_t id;
  /// (StreetName, TrafficSign, Localization, Vehicle)
  uint8_t tag_type;
  rosidl_runtime_c__String street_name;
  uint8_t traffic_sign_type;
  rosidl_runtime_c__String vehicle_name;
  /// Just added a single number for location. Probably want to use Vector2D.msg, but I get errors when I try to add it.
  float location;
} duckietown_msgs__msg__TagInfo;

// Struct for a sequence of duckietown_msgs__msg__TagInfo.
typedef struct duckietown_msgs__msg__TagInfo__Sequence
{
  duckietown_msgs__msg__TagInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__TagInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__TAG_INFO__STRUCT_H_
