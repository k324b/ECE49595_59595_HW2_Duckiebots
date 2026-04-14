// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:srv/SetVariable.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__SRV__DETAIL__SET_VARIABLE__STRUCT_H_
#define DUCKIETOWN_MSGS__SRV__DETAIL__SET_VARIABLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name_json'
// Member 'value_json'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in srv/SetVariable in the package duckietown_msgs.
typedef struct duckietown_msgs__srv__SetVariable_Request
{
  std_msgs__msg__String name_json;
  std_msgs__msg__String value_json;
} duckietown_msgs__srv__SetVariable_Request;

// Struct for a sequence of duckietown_msgs__srv__SetVariable_Request.
typedef struct duckietown_msgs__srv__SetVariable_Request__Sequence
{
  duckietown_msgs__srv__SetVariable_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__srv__SetVariable_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'success_json'
// already included above
// #include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in srv/SetVariable in the package duckietown_msgs.
typedef struct duckietown_msgs__srv__SetVariable_Response
{
  std_msgs__msg__String success_json;
} duckietown_msgs__srv__SetVariable_Response;

// Struct for a sequence of duckietown_msgs__srv__SetVariable_Response.
typedef struct duckietown_msgs__srv__SetVariable_Response__Sequence
{
  duckietown_msgs__srv__SetVariable_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__srv__SetVariable_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__SRV__DETAIL__SET_VARIABLE__STRUCT_H_
