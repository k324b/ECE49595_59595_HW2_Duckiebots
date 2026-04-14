// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duckietown_msgs:msg/KinematicsWeights.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duckietown_msgs/msg/detail/kinematics_weights__rosidl_typesupport_introspection_c.h"
#include "duckietown_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duckietown_msgs/msg/detail/kinematics_weights__functions.h"
#include "duckietown_msgs/msg/detail/kinematics_weights__struct.h"


// Include directives for member types
// Member `weights`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__KinematicsWeights_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duckietown_msgs__msg__KinematicsWeights__init(message_memory);
}

void duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__KinematicsWeights_fini_function(void * message_memory)
{
  duckietown_msgs__msg__KinematicsWeights__fini(message_memory);
}

size_t duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__size_function__KinematicsWeights__weights(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__get_const_function__KinematicsWeights__weights(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__get_function__KinematicsWeights__weights(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__fetch_function__KinematicsWeights__weights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__get_const_function__KinematicsWeights__weights(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__assign_function__KinematicsWeights__weights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__get_function__KinematicsWeights__weights(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__resize_function__KinematicsWeights__weights(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__KinematicsWeights_message_member_array[1] = {
  {
    "weights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__KinematicsWeights, weights),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__size_function__KinematicsWeights__weights,  // size() function pointer
    duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__get_const_function__KinematicsWeights__weights,  // get_const(index) function pointer
    duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__get_function__KinematicsWeights__weights,  // get(index) function pointer
    duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__fetch_function__KinematicsWeights__weights,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__assign_function__KinematicsWeights__weights,  // assign(index, value) function pointer
    duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__resize_function__KinematicsWeights__weights  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__KinematicsWeights_message_members = {
  "duckietown_msgs__msg",  // message namespace
  "KinematicsWeights",  // message name
  1,  // number of fields
  sizeof(duckietown_msgs__msg__KinematicsWeights),
  duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__KinematicsWeights_message_member_array,  // message members
  duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__KinematicsWeights_init_function,  // function to initialize message memory (memory has to be allocated)
  duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__KinematicsWeights_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__KinematicsWeights_message_type_support_handle = {
  0,
  &duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__KinematicsWeights_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duckietown_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, KinematicsWeights)() {
  if (!duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__KinematicsWeights_message_type_support_handle.typesupport_identifier) {
    duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__KinematicsWeights_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duckietown_msgs__msg__KinematicsWeights__rosidl_typesupport_introspection_c__KinematicsWeights_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
