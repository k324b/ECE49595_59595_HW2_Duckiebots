// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:srv/GetVariable.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__SRV__DETAIL__GET_VARIABLE__STRUCT_H_
#define DUCKIETOWN_MSGS__SRV__DETAIL__GET_VARIABLE__STRUCT_H_

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
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in srv/GetVariable in the package duckietown_msgs.
typedef struct duckietown_msgs__srv__GetVariable_Request
{
  std_msgs__msg__String name_json;
} duckietown_msgs__srv__GetVariable_Request;

// Struct for a sequence of duckietown_msgs__srv__GetVariable_Request.
typedef struct duckietown_msgs__srv__GetVariable_Request__Sequence
{
  duckietown_msgs__srv__GetVariable_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__srv__GetVariable_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'value_json'
// already included above
// #include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in srv/GetVariable in the package duckietown_msgs.
typedef struct duckietown_msgs__srv__GetVariable_Response
{
  std_msgs__msg__String value_json;
} duckietown_msgs__srv__GetVariable_Response;

// Struct for a sequence of duckietown_msgs__srv__GetVariable_Response.
typedef struct duckietown_msgs__srv__GetVariable_Response__Sequence
{
  duckietown_msgs__srv__GetVariable_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__srv__GetVariable_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__SRV__DETAIL__GET_VARIABLE__STRUCT_H_
