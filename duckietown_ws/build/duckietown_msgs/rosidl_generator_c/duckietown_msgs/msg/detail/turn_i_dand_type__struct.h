// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/TurnIDandType.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__TURN_I_DAND_TYPE__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__TURN_I_DAND_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TurnIDandType in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__TurnIDandType
{
  int16_t tag_id;
  int16_t turn_type;
} duckietown_msgs__msg__TurnIDandType;

// Struct for a sequence of duckietown_msgs__msg__TurnIDandType.
typedef struct duckietown_msgs__msg__TurnIDandType__Sequence
{
  duckietown_msgs__msg__TurnIDandType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__TurnIDandType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__TURN_I_DAND_TYPE__STRUCT_H_
