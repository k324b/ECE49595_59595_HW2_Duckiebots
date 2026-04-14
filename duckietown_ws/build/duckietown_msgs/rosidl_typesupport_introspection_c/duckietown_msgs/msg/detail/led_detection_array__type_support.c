// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duckietown_msgs:msg/LEDDetectionArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duckietown_msgs/msg/detail/led_detection_array__rosidl_typesupport_introspection_c.h"
#include "duckietown_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duckietown_msgs/msg/detail/led_detection_array__functions.h"
#include "duckietown_msgs/msg/detail/led_detection_array__struct.h"


// Include directives for member types
// Member `detections`
#include "duckietown_msgs/msg/led_detection.h"
// Member `detections`
#include "duckietown_msgs/msg/detail/led_detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__LEDDetectionArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duckietown_msgs__msg__LEDDetectionArray__init(message_memory);
}

void duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__LEDDetectionArray_fini_function(void * message_memory)
{
  duckietown_msgs__msg__LEDDetectionArray__fini(message_memory);
}

size_t duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__size_function__LEDDetectionArray__detections(
  const void * untyped_member)
{
  const duckietown_msgs__msg__LEDDetection__Sequence * member =
    (const duckietown_msgs__msg__LEDDetection__Sequence *)(untyped_member);
  return member->size;
}

const void * duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__get_const_function__LEDDetectionArray__detections(
  const void * untyped_member, size_t index)
{
  const duckietown_msgs__msg__LEDDetection__Sequence * member =
    (const duckietown_msgs__msg__LEDDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__get_function__LEDDetectionArray__detections(
  void * untyped_member, size_t index)
{
  duckietown_msgs__msg__LEDDetection__Sequence * member =
    (duckietown_msgs__msg__LEDDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__fetch_function__LEDDetectionArray__detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const duckietown_msgs__msg__LEDDetection * item =
    ((const duckietown_msgs__msg__LEDDetection *)
    duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__get_const_function__LEDDetectionArray__detections(untyped_member, index));
  duckietown_msgs__msg__LEDDetection * value =
    (duckietown_msgs__msg__LEDDetection *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__assign_function__LEDDetectionArray__detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  duckietown_msgs__msg__LEDDetection * item =
    ((duckietown_msgs__msg__LEDDetection *)
    duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__get_function__LEDDetectionArray__detections(untyped_member, index));
  const duckietown_msgs__msg__LEDDetection * value =
    (const duckietown_msgs__msg__LEDDetection *)(untyped_value);
  *item = *value;
}

bool duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__resize_function__LEDDetectionArray__detections(
  void * untyped_member, size_t size)
{
  duckietown_msgs__msg__LEDDetection__Sequence * member =
    (duckietown_msgs__msg__LEDDetection__Sequence *)(untyped_member);
  duckietown_msgs__msg__LEDDetection__Sequence__fini(member);
  return duckietown_msgs__msg__LEDDetection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__LEDDetectionArray_message_member_array[1] = {
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetectionArray, detections),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__size_function__LEDDetectionArray__detections,  // size() function pointer
    duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__get_const_function__LEDDetectionArray__detections,  // get_const(index) function pointer
    duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__get_function__LEDDetectionArray__detections,  // get(index) function pointer
    duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__fetch_function__LEDDetectionArray__detections,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__assign_function__LEDDetectionArray__detections,  // assign(index, value) function pointer
    duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__resize_function__LEDDetectionArray__detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__LEDDetectionArray_message_members = {
  "duckietown_msgs__msg",  // message namespace
  "LEDDetectionArray",  // message name
  1,  // number of fields
  sizeof(duckietown_msgs__msg__LEDDetectionArray),
  duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__LEDDetectionArray_message_member_array,  // message members
  duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__LEDDetectionArray_init_function,  // function to initialize message memory (memory has to be allocated)
  duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__LEDDetectionArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__LEDDetectionArray_message_type_support_handle = {
  0,
  &duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__LEDDetectionArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duckietown_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, LEDDetectionArray)() {
  duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__LEDDetectionArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, LEDDetection)();
  if (!duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__LEDDetectionArray_message_type_support_handle.typesupport_identifier) {
    duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__LEDDetectionArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duckietown_msgs__msg__LEDDetectionArray__rosidl_typesupport_introspection_c__LEDDetectionArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
