// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:srv/SetValue.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__SRV__DETAIL__SET_VALUE__STRUCT_H_
#define DUCKIETOWN_MSGS__SRV__DETAIL__SET_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetValue in the package duckietown_msgs.
typedef struct duckietown_msgs__srv__SetValue_Request
{
  float value;
} duckietown_msgs__srv__SetValue_Request;

// Struct for a sequence of duckietown_msgs__srv__SetValue_Request.
typedef struct duckietown_msgs__srv__SetValue_Request__Sequence
{
  duckietown_msgs__srv__SetValue_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__srv__SetValue_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetValue in the package duckietown_msgs.
typedef struct duckietown_msgs__srv__SetValue_Response
{
  uint8_t structure_needs_at_least_one_member;
} duckietown_msgs__srv__SetValue_Response;

// Struct for a sequence of duckietown_msgs__srv__SetValue_Response.
typedef struct duckietown_msgs__srv__SetValue_Response__Sequence
{
  duckietown_msgs__srv__SetValue_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__srv__SetValue_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__SRV__DETAIL__SET_VALUE__STRUCT_H_
