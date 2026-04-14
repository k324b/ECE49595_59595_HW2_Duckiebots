// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duckietown_msgs:msg/LEDDetectionDebugInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duckietown_msgs/msg/detail/led_detection_debug_info__rosidl_typesupport_introspection_c.h"
#include "duckietown_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duckietown_msgs/msg/detail/led_detection_debug_info__functions.h"
#include "duckietown_msgs/msg/detail/led_detection_debug_info__struct.h"


// Include directives for member types
// Member `variance_map`
#include "sensor_msgs/msg/compressed_image.h"
// Member `variance_map`
#include "sensor_msgs/msg/detail/compressed_image__rosidl_typesupport_introspection_c.h"
// Member `candidates`
#include "duckietown_msgs/msg/vector2_d.h"
// Member `candidates`
#include "duckietown_msgs/msg/detail/vector2_d__rosidl_typesupport_introspection_c.h"
// Member `led_all_unfiltered`
#include "duckietown_msgs/msg/led_detection_array.h"
// Member `led_all_unfiltered`
#include "duckietown_msgs/msg/detail/led_detection_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__LEDDetectionDebugInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duckietown_msgs__msg__LEDDetectionDebugInfo__init(message_memory);
}

void duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__LEDDetectionDebugInfo_fini_function(void * message_memory)
{
  duckietown_msgs__msg__LEDDetectionDebugInfo__fini(message_memory);
}

size_t duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__size_function__LEDDetectionDebugInfo__cell_size(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_const_function__LEDDetectionDebugInfo__cell_size(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_function__LEDDetectionDebugInfo__cell_size(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__fetch_function__LEDDetectionDebugInfo__cell_size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_const_function__LEDDetectionDebugInfo__cell_size(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__assign_function__LEDDetectionDebugInfo__cell_size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_function__LEDDetectionDebugInfo__cell_size(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__size_function__LEDDetectionDebugInfo__crop_rect_norm(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_const_function__LEDDetectionDebugInfo__crop_rect_norm(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_function__LEDDetectionDebugInfo__crop_rect_norm(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__fetch_function__LEDDetectionDebugInfo__crop_rect_norm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_const_function__LEDDetectionDebugInfo__crop_rect_norm(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__assign_function__LEDDetectionDebugInfo__crop_rect_norm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_function__LEDDetectionDebugInfo__crop_rect_norm(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__size_function__LEDDetectionDebugInfo__candidates(
  const void * untyped_member)
{
  const duckietown_msgs__msg__Vector2D__Sequence * member =
    (const duckietown_msgs__msg__Vector2D__Sequence *)(untyped_member);
  return member->size;
}

const void * duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_const_function__LEDDetectionDebugInfo__candidates(
  const void * untyped_member, size_t index)
{
  const duckietown_msgs__msg__Vector2D__Sequence * member =
    (const duckietown_msgs__msg__Vector2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_function__LEDDetectionDebugInfo__candidates(
  void * untyped_member, size_t index)
{
  duckietown_msgs__msg__Vector2D__Sequence * member =
    (duckietown_msgs__msg__Vector2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__fetch_function__LEDDetectionDebugInfo__candidates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const duckietown_msgs__msg__Vector2D * item =
    ((const duckietown_msgs__msg__Vector2D *)
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_const_function__LEDDetectionDebugInfo__candidates(untyped_member, index));
  duckietown_msgs__msg__Vector2D * value =
    (duckietown_msgs__msg__Vector2D *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__assign_function__LEDDetectionDebugInfo__candidates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  duckietown_msgs__msg__Vector2D * item =
    ((duckietown_msgs__msg__Vector2D *)
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_function__LEDDetectionDebugInfo__candidates(untyped_member, index));
  const duckietown_msgs__msg__Vector2D * value =
    (const duckietown_msgs__msg__Vector2D *)(untyped_value);
  *item = *value;
}

bool duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__resize_function__LEDDetectionDebugInfo__candidates(
  void * untyped_member, size_t size)
{
  duckietown_msgs__msg__Vector2D__Sequence * member =
    (duckietown_msgs__msg__Vector2D__Sequence *)(untyped_member);
  duckietown_msgs__msg__Vector2D__Sequence__fini(member);
  return duckietown_msgs__msg__Vector2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__LEDDetectionDebugInfo_message_member_array[7] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetectionDebugInfo, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "capture_progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetectionDebugInfo, capture_progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cell_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetectionDebugInfo, cell_size),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__size_function__LEDDetectionDebugInfo__cell_size,  // size() function pointer
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_const_function__LEDDetectionDebugInfo__cell_size,  // get_const(index) function pointer
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_function__LEDDetectionDebugInfo__cell_size,  // get(index) function pointer
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__fetch_function__LEDDetectionDebugInfo__cell_size,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__assign_function__LEDDetectionDebugInfo__cell_size,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crop_rect_norm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetectionDebugInfo, crop_rect_norm),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__size_function__LEDDetectionDebugInfo__crop_rect_norm,  // size() function pointer
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_const_function__LEDDetectionDebugInfo__crop_rect_norm,  // get_const(index) function pointer
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_function__LEDDetectionDebugInfo__crop_rect_norm,  // get(index) function pointer
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__fetch_function__LEDDetectionDebugInfo__crop_rect_norm,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__assign_function__LEDDetectionDebugInfo__crop_rect_norm,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "variance_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetectionDebugInfo, variance_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "candidates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetectionDebugInfo, candidates),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__size_function__LEDDetectionDebugInfo__candidates,  // size() function pointer
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_const_function__LEDDetectionDebugInfo__candidates,  // get_const(index) function pointer
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__get_function__LEDDetectionDebugInfo__candidates,  // get(index) function pointer
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__fetch_function__LEDDetectionDebugInfo__candidates,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__assign_function__LEDDetectionDebugInfo__candidates,  // assign(index, value) function pointer
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__resize_function__LEDDetectionDebugInfo__candidates  // resize(index) function pointer
  },
  {
    "led_all_unfiltered",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetectionDebugInfo, led_all_unfiltered),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__LEDDetectionDebugInfo_message_members = {
  "duckietown_msgs__msg",  // message namespace
  "LEDDetectionDebugInfo",  // message name
  7,  // number of fields
  sizeof(duckietown_msgs__msg__LEDDetectionDebugInfo),
  duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__LEDDetectionDebugInfo_message_member_array,  // message members
  duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__LEDDetectionDebugInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__LEDDetectionDebugInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__LEDDetectionDebugInfo_message_type_support_handle = {
  0,
  &duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__LEDDetectionDebugInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duckietown_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, LEDDetectionDebugInfo)() {
  duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__LEDDetectionDebugInfo_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CompressedImage)();
  duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__LEDDetectionDebugInfo_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, Vector2D)();
  duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__LEDDetectionDebugInfo_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, LEDDetectionArray)();
  if (!duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__LEDDetectionDebugInfo_message_type_support_handle.typesupport_identifier) {
    duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__LEDDetectionDebugInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duckietown_msgs__msg__LEDDetectionDebugInfo__rosidl_typesupport_introspection_c__LEDDetectionDebugInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
