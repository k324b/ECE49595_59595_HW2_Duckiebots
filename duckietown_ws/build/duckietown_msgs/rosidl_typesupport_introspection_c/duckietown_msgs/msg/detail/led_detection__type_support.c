// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duckietown_msgs:msg/LEDDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duckietown_msgs/msg/detail/led_detection__rosidl_typesupport_introspection_c.h"
#include "duckietown_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duckietown_msgs/msg/detail/led_detection__functions.h"
#include "duckietown_msgs/msg/detail/led_detection__struct.h"


// Include directives for member types
// Member `timestamp1`
// Member `timestamp2`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp1`
// Member `timestamp2`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `pixels_normalized`
#include "duckietown_msgs/msg/vector2_d.h"
// Member `pixels_normalized`
#include "duckietown_msgs/msg/detail/vector2_d__rosidl_typesupport_introspection_c.h"
// Member `color`
#include "rosidl_runtime_c/string_functions.h"
// Member `signal_ts`
// Member `signal`
// Member `fft_fs`
// Member `fft`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__LEDDetection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duckietown_msgs__msg__LEDDetection__init(message_memory);
}

void duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__LEDDetection_fini_function(void * message_memory)
{
  duckietown_msgs__msg__LEDDetection__fini(message_memory);
}

size_t duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__size_function__LEDDetection__signal_ts(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_const_function__LEDDetection__signal_ts(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_function__LEDDetection__signal_ts(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__fetch_function__LEDDetection__signal_ts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_const_function__LEDDetection__signal_ts(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__assign_function__LEDDetection__signal_ts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_function__LEDDetection__signal_ts(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__resize_function__LEDDetection__signal_ts(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__size_function__LEDDetection__signal(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_const_function__LEDDetection__signal(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_function__LEDDetection__signal(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__fetch_function__LEDDetection__signal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_const_function__LEDDetection__signal(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__assign_function__LEDDetection__signal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_function__LEDDetection__signal(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__resize_function__LEDDetection__signal(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__size_function__LEDDetection__fft_fs(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_const_function__LEDDetection__fft_fs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_function__LEDDetection__fft_fs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__fetch_function__LEDDetection__fft_fs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_const_function__LEDDetection__fft_fs(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__assign_function__LEDDetection__fft_fs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_function__LEDDetection__fft_fs(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__resize_function__LEDDetection__fft_fs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__size_function__LEDDetection__fft(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_const_function__LEDDetection__fft(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_function__LEDDetection__fft(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__fetch_function__LEDDetection__fft(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_const_function__LEDDetection__fft(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__assign_function__LEDDetection__fft(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_function__LEDDetection__fft(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__resize_function__LEDDetection__fft(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__LEDDetection_message_member_array[10] = {
  {
    "timestamp1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetection, timestamp1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetection, timestamp2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pixels_normalized",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetection, pixels_normalized),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frequency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetection, frequency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetection, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetection, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signal_ts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetection, signal_ts),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__size_function__LEDDetection__signal_ts,  // size() function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_const_function__LEDDetection__signal_ts,  // get_const(index) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_function__LEDDetection__signal_ts,  // get(index) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__fetch_function__LEDDetection__signal_ts,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__assign_function__LEDDetection__signal_ts,  // assign(index, value) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__resize_function__LEDDetection__signal_ts  // resize(index) function pointer
  },
  {
    "signal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetection, signal),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__size_function__LEDDetection__signal,  // size() function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_const_function__LEDDetection__signal,  // get_const(index) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_function__LEDDetection__signal,  // get(index) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__fetch_function__LEDDetection__signal,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__assign_function__LEDDetection__signal,  // assign(index, value) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__resize_function__LEDDetection__signal  // resize(index) function pointer
  },
  {
    "fft_fs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetection, fft_fs),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__size_function__LEDDetection__fft_fs,  // size() function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_const_function__LEDDetection__fft_fs,  // get_const(index) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_function__LEDDetection__fft_fs,  // get(index) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__fetch_function__LEDDetection__fft_fs,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__assign_function__LEDDetection__fft_fs,  // assign(index, value) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__resize_function__LEDDetection__fft_fs  // resize(index) function pointer
  },
  {
    "fft",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__LEDDetection, fft),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__size_function__LEDDetection__fft,  // size() function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_const_function__LEDDetection__fft,  // get_const(index) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__get_function__LEDDetection__fft,  // get(index) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__fetch_function__LEDDetection__fft,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__assign_function__LEDDetection__fft,  // assign(index, value) function pointer
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__resize_function__LEDDetection__fft  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__LEDDetection_message_members = {
  "duckietown_msgs__msg",  // message namespace
  "LEDDetection",  // message name
  10,  // number of fields
  sizeof(duckietown_msgs__msg__LEDDetection),
  duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__LEDDetection_message_member_array,  // message members
  duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__LEDDetection_init_function,  // function to initialize message memory (memory has to be allocated)
  duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__LEDDetection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__LEDDetection_message_type_support_handle = {
  0,
  &duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__LEDDetection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duckietown_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, LEDDetection)() {
  duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__LEDDetection_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__LEDDetection_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__LEDDetection_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, Vector2D)();
  if (!duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__LEDDetection_message_type_support_handle.typesupport_identifier) {
    duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__LEDDetection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duckietown_msgs__msg__LEDDetection__rosidl_typesupport_introspection_c__LEDDetection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
