// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duckietown_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duckietown_msgs/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"
#include "duckietown_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duckietown_msgs/msg/detail/trajectory__functions.h"
#include "duckietown_msgs/msg/detail/trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pos`
// Member `vel`
// Member `acc`
// Member `jerk`
#include "geometry_msgs/msg/vector3_stamped.h"
// Member `pos`
// Member `vel`
// Member `acc`
// Member `jerk`
#include "geometry_msgs/msg/detail/vector3_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duckietown_msgs__msg__Trajectory__init(message_memory);
}

void duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_fini_function(void * message_memory)
{
  duckietown_msgs__msg__Trajectory__fini(message_memory);
}

size_t duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__pos(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (const geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  return member->size;
}

const void * duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__pos(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (const geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__pos(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3Stamped * item =
    ((const geometry_msgs__msg__Vector3Stamped *)
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__pos(untyped_member, index));
  geometry_msgs__msg__Vector3Stamped * value =
    (geometry_msgs__msg__Vector3Stamped *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3Stamped * item =
    ((geometry_msgs__msg__Vector3Stamped *)
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__pos(untyped_member, index));
  const geometry_msgs__msg__Vector3Stamped * value =
    (const geometry_msgs__msg__Vector3Stamped *)(untyped_value);
  *item = *value;
}

bool duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__pos(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3Stamped__Sequence__fini(member);
  return geometry_msgs__msg__Vector3Stamped__Sequence__init(member, size);
}

size_t duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__vel(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (const geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  return member->size;
}

const void * duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__vel(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (const geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__vel(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3Stamped * item =
    ((const geometry_msgs__msg__Vector3Stamped *)
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__vel(untyped_member, index));
  geometry_msgs__msg__Vector3Stamped * value =
    (geometry_msgs__msg__Vector3Stamped *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3Stamped * item =
    ((geometry_msgs__msg__Vector3Stamped *)
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__vel(untyped_member, index));
  const geometry_msgs__msg__Vector3Stamped * value =
    (const geometry_msgs__msg__Vector3Stamped *)(untyped_value);
  *item = *value;
}

bool duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__vel(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3Stamped__Sequence__fini(member);
  return geometry_msgs__msg__Vector3Stamped__Sequence__init(member, size);
}

size_t duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__acc(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (const geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  return member->size;
}

const void * duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__acc(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (const geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__acc(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__acc(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3Stamped * item =
    ((const geometry_msgs__msg__Vector3Stamped *)
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__acc(untyped_member, index));
  geometry_msgs__msg__Vector3Stamped * value =
    (geometry_msgs__msg__Vector3Stamped *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__acc(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3Stamped * item =
    ((geometry_msgs__msg__Vector3Stamped *)
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__acc(untyped_member, index));
  const geometry_msgs__msg__Vector3Stamped * value =
    (const geometry_msgs__msg__Vector3Stamped *)(untyped_value);
  *item = *value;
}

bool duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__acc(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3Stamped__Sequence__fini(member);
  return geometry_msgs__msg__Vector3Stamped__Sequence__init(member, size);
}

size_t duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__jerk(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (const geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  return member->size;
}

const void * duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__jerk(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (const geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__jerk(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__jerk(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3Stamped * item =
    ((const geometry_msgs__msg__Vector3Stamped *)
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__jerk(untyped_member, index));
  geometry_msgs__msg__Vector3Stamped * value =
    (geometry_msgs__msg__Vector3Stamped *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__jerk(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3Stamped * item =
    ((geometry_msgs__msg__Vector3Stamped *)
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__jerk(untyped_member, index));
  const geometry_msgs__msg__Vector3Stamped * value =
    (const geometry_msgs__msg__Vector3Stamped *)(untyped_value);
  *item = *value;
}

bool duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__jerk(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3Stamped__Sequence * member =
    (geometry_msgs__msg__Vector3Stamped__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3Stamped__Sequence__fini(member);
  return geometry_msgs__msg__Vector3Stamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__Trajectory, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__Trajectory, pos),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__pos,  // size() function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__pos,  // get_const(index) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__pos,  // get(index) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__pos,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__pos,  // assign(index, value) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__pos  // resize(index) function pointer
  },
  {
    "vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__Trajectory, vel),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__vel,  // size() function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__vel,  // get_const(index) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__vel,  // get(index) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__vel,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__vel,  // assign(index, value) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__vel  // resize(index) function pointer
  },
  {
    "acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__Trajectory, acc),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__acc,  // size() function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__acc,  // get_const(index) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__acc,  // get(index) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__acc,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__acc,  // assign(index, value) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__acc  // resize(index) function pointer
  },
  {
    "jerk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__Trajectory, jerk),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__jerk,  // size() function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__jerk,  // get_const(index) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__jerk,  // get(index) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__jerk,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__jerk,  // assign(index, value) function pointer
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__jerk  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_members = {
  "duckietown_msgs__msg",  // message namespace
  "Trajectory",  // message name
  5,  // number of fields
  sizeof(duckietown_msgs__msg__Trajectory),
  duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array,  // message members
  duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle = {
  0,
  &duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duckietown_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, Trajectory)() {
  duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3Stamped)();
  duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3Stamped)();
  duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3Stamped)();
  duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3Stamped)();
  if (!duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle.typesupport_identifier) {
    duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duckietown_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
