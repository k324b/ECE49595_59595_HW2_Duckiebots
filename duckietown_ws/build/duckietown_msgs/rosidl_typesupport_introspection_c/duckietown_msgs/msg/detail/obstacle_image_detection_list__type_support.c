// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duckietown_msgs:msg/ObstacleImageDetectionList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duckietown_msgs/msg/detail/obstacle_image_detection_list__rosidl_typesupport_introspection_c.h"
#include "duckietown_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duckietown_msgs/msg/detail/obstacle_image_detection_list__functions.h"
#include "duckietown_msgs/msg/detail/obstacle_image_detection_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `list`
#include "duckietown_msgs/msg/obstacle_image_detection.h"
// Member `list`
#include "duckietown_msgs/msg/detail/obstacle_image_detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__ObstacleImageDetectionList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duckietown_msgs__msg__ObstacleImageDetectionList__init(message_memory);
}

void duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__ObstacleImageDetectionList_fini_function(void * message_memory)
{
  duckietown_msgs__msg__ObstacleImageDetectionList__fini(message_memory);
}

size_t duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__size_function__ObstacleImageDetectionList__list(
  const void * untyped_member)
{
  const duckietown_msgs__msg__ObstacleImageDetection__Sequence * member =
    (const duckietown_msgs__msg__ObstacleImageDetection__Sequence *)(untyped_member);
  return member->size;
}

const void * duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__get_const_function__ObstacleImageDetectionList__list(
  const void * untyped_member, size_t index)
{
  const duckietown_msgs__msg__ObstacleImageDetection__Sequence * member =
    (const duckietown_msgs__msg__ObstacleImageDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__get_function__ObstacleImageDetectionList__list(
  void * untyped_member, size_t index)
{
  duckietown_msgs__msg__ObstacleImageDetection__Sequence * member =
    (duckietown_msgs__msg__ObstacleImageDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__fetch_function__ObstacleImageDetectionList__list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const duckietown_msgs__msg__ObstacleImageDetection * item =
    ((const duckietown_msgs__msg__ObstacleImageDetection *)
    duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__get_const_function__ObstacleImageDetectionList__list(untyped_member, index));
  duckietown_msgs__msg__ObstacleImageDetection * value =
    (duckietown_msgs__msg__ObstacleImageDetection *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__assign_function__ObstacleImageDetectionList__list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  duckietown_msgs__msg__ObstacleImageDetection * item =
    ((duckietown_msgs__msg__ObstacleImageDetection *)
    duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__get_function__ObstacleImageDetectionList__list(untyped_member, index));
  const duckietown_msgs__msg__ObstacleImageDetection * value =
    (const duckietown_msgs__msg__ObstacleImageDetection *)(untyped_value);
  *item = *value;
}

bool duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__resize_function__ObstacleImageDetectionList__list(
  void * untyped_member, size_t size)
{
  duckietown_msgs__msg__ObstacleImageDetection__Sequence * member =
    (duckietown_msgs__msg__ObstacleImageDetection__Sequence *)(untyped_member);
  duckietown_msgs__msg__ObstacleImageDetection__Sequence__fini(member);
  return duckietown_msgs__msg__ObstacleImageDetection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__ObstacleImageDetectionList_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__ObstacleImageDetectionList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__ObstacleImageDetectionList, list),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__size_function__ObstacleImageDetectionList__list,  // size() function pointer
    duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__get_const_function__ObstacleImageDetectionList__list,  // get_const(index) function pointer
    duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__get_function__ObstacleImageDetectionList__list,  // get(index) function pointer
    duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__fetch_function__ObstacleImageDetectionList__list,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__assign_function__ObstacleImageDetectionList__list,  // assign(index, value) function pointer
    duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__resize_function__ObstacleImageDetectionList__list  // resize(index) function pointer
  },
  {
    "imwidth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__ObstacleImageDetectionList, imwidth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imheight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__ObstacleImageDetectionList, imheight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__ObstacleImageDetectionList_message_members = {
  "duckietown_msgs__msg",  // message namespace
  "ObstacleImageDetectionList",  // message name
  4,  // number of fields
  sizeof(duckietown_msgs__msg__ObstacleImageDetectionList),
  duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__ObstacleImageDetectionList_message_member_array,  // message members
  duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__ObstacleImageDetectionList_init_function,  // function to initialize message memory (memory has to be allocated)
  duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__ObstacleImageDetectionList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__ObstacleImageDetectionList_message_type_support_handle = {
  0,
  &duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__ObstacleImageDetectionList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duckietown_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, ObstacleImageDetectionList)() {
  duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__ObstacleImageDetectionList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__ObstacleImageDetectionList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, ObstacleImageDetection)();
  if (!duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__ObstacleImageDetectionList_message_type_support_handle.typesupport_identifier) {
    duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__ObstacleImageDetectionList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duckietown_msgs__msg__ObstacleImageDetectionList__rosidl_typesupport_introspection_c__ObstacleImageDetectionList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
