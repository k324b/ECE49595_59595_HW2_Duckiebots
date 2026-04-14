// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:srv/SetFSMState.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__SRV__DETAIL__SET_FSM_STATE__STRUCT_H_
#define DUCKIETOWN_MSGS__SRV__DETAIL__SET_FSM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetFSMState in the package duckietown_msgs.
typedef struct duckietown_msgs__srv__SetFSMState_Request
{
  rosidl_runtime_c__String state;
} duckietown_msgs__srv__SetFSMState_Request;

// Struct for a sequence of duckietown_msgs__srv__SetFSMState_Request.
typedef struct duckietown_msgs__srv__SetFSMState_Request__Sequence
{
  duckietown_msgs__srv__SetFSMState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__srv__SetFSMState_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetFSMState in the package duckietown_msgs.
typedef struct duckietown_msgs__srv__SetFSMState_Response
{
  uint8_t structure_needs_at_least_one_member;
} duckietown_msgs__srv__SetFSMState_Response;

// Struct for a sequence of duckietown_msgs__srv__SetFSMState_Response.
typedef struct duckietown_msgs__srv__SetFSMState_Response__Sequence
{
  duckietown_msgs__srv__SetFSMState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__srv__SetFSMState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__SRV__DETAIL__SET_FSM_STATE__STRUCT_H_
