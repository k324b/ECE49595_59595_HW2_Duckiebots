// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duckietown_msgs:msg/SegmentList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duckietown_msgs/msg/detail/segment_list__rosidl_typesupport_introspection_c.h"
#include "duckietown_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duckietown_msgs/msg/detail/segment_list__functions.h"
#include "duckietown_msgs/msg/detail/segment_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `segments`
#include "duckietown_msgs/msg/segment.h"
// Member `segments`
#include "duckietown_msgs/msg/detail/segment__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__SegmentList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duckietown_msgs__msg__SegmentList__init(message_memory);
}

void duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__SegmentList_fini_function(void * message_memory)
{
  duckietown_msgs__msg__SegmentList__fini(message_memory);
}

size_t duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__size_function__SegmentList__segments(
  const void * untyped_member)
{
  const duckietown_msgs__msg__Segment__Sequence * member =
    (const duckietown_msgs__msg__Segment__Sequence *)(untyped_member);
  return member->size;
}

const void * duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__get_const_function__SegmentList__segments(
  const void * untyped_member, size_t index)
{
  const duckietown_msgs__msg__Segment__Sequence * member =
    (const duckietown_msgs__msg__Segment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__get_function__SegmentList__segments(
  void * untyped_member, size_t index)
{
  duckietown_msgs__msg__Segment__Sequence * member =
    (duckietown_msgs__msg__Segment__Sequence *)(untyped_member);
  return &member->data[index];
}

void duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__fetch_function__SegmentList__segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const duckietown_msgs__msg__Segment * item =
    ((const duckietown_msgs__msg__Segment *)
    duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__get_const_function__SegmentList__segments(untyped_member, index));
  duckietown_msgs__msg__Segment * value =
    (duckietown_msgs__msg__Segment *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__assign_function__SegmentList__segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  duckietown_msgs__msg__Segment * item =
    ((duckietown_msgs__msg__Segment *)
    duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__get_function__SegmentList__segments(untyped_member, index));
  const duckietown_msgs__msg__Segment * value =
    (const duckietown_msgs__msg__Segment *)(untyped_value);
  *item = *value;
}

bool duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__resize_function__SegmentList__segments(
  void * untyped_member, size_t size)
{
  duckietown_msgs__msg__Segment__Sequence * member =
    (duckietown_msgs__msg__Segment__Sequence *)(untyped_member);
  duckietown_msgs__msg__Segment__Sequence__fini(member);
  return duckietown_msgs__msg__Segment__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__SegmentList_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__SegmentList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__SegmentList, segments),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__size_function__SegmentList__segments,  // size() function pointer
    duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__get_const_function__SegmentList__segments,  // get_const(index) function pointer
    duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__get_function__SegmentList__segments,  // get(index) function pointer
    duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__fetch_function__SegmentList__segments,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__assign_function__SegmentList__segments,  // assign(index, value) function pointer
    duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__resize_function__SegmentList__segments  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__SegmentList_message_members = {
  "duckietown_msgs__msg",  // message namespace
  "SegmentList",  // message name
  2,  // number of fields
  sizeof(duckietown_msgs__msg__SegmentList),
  duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__SegmentList_message_member_array,  // message members
  duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__SegmentList_init_function,  // function to initialize message memory (memory has to be allocated)
  duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__SegmentList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__SegmentList_message_type_support_handle = {
  0,
  &duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__SegmentList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duckietown_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, SegmentList)() {
  duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__SegmentList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__SegmentList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, Segment)();
  if (!duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__SegmentList_message_type_support_handle.typesupport_identifier) {
    duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__SegmentList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duckietown_msgs__msg__SegmentList__rosidl_typesupport_introspection_c__SegmentList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
