// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/SourceTargetNodes.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__SOURCE_TARGET_NODES__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__SOURCE_TARGET_NODES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'source_node'
// Member 'target_node'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SourceTargetNodes in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__SourceTargetNodes
{
  rosidl_runtime_c__String source_node;
  rosidl_runtime_c__String target_node;
} duckietown_msgs__msg__SourceTargetNodes;

// Struct for a sequence of duckietown_msgs__msg__SourceTargetNodes.
typedef struct duckietown_msgs__msg__SourceTargetNodes__Sequence
{
  duckietown_msgs__msg__SourceTargetNodes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__SourceTargetNodes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__SOURCE_TARGET_NODES__STRUCT_H_
