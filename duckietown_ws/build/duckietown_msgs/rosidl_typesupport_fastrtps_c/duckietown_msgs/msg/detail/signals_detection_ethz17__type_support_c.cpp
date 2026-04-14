// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from duckietown_msgs:msg/SignalsDetectionETHZ17.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/signals_detection_ethz17__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "duckietown_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "duckietown_msgs/msg/detail/signals_detection_ethz17__struct.h"
#include "duckietown_msgs/msg/detail/signals_detection_ethz17__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // led_detected, no_led_detected
#include "rosidl_runtime_c/string_functions.h"  // led_detected, no_led_detected
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duckietown_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duckietown_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duckietown_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _SignalsDetectionETHZ17__ros_msg_type = duckietown_msgs__msg__SignalsDetectionETHZ17;

static bool _SignalsDetectionETHZ17__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SignalsDetectionETHZ17__ros_msg_type * ros_message = static_cast<const _SignalsDetectionETHZ17__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: led_detected
  {
    const rosidl_runtime_c__String * str = &ros_message->led_detected;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: no_led_detected
  {
    const rosidl_runtime_c__String * str = &ros_message->no_led_detected;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SignalsDetectionETHZ17__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SignalsDetectionETHZ17__ros_msg_type * ros_message = static_cast<_SignalsDetectionETHZ17__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: led_detected
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->led_detected.data) {
      rosidl_runtime_c__String__init(&ros_message->led_detected);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->led_detected,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'led_detected'\n");
      return false;
    }
  }

  // Field name: no_led_detected
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->no_led_detected.data) {
      rosidl_runtime_c__String__init(&ros_message->no_led_detected);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->no_led_detected,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'no_led_detected'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duckietown_msgs
size_t get_serialized_size_duckietown_msgs__msg__SignalsDetectionETHZ17(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SignalsDetectionETHZ17__ros_msg_type * ros_message = static_cast<const _SignalsDetectionETHZ17__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name led_detected
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->led_detected.size + 1);
  // field.name no_led_detected
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->no_led_detected.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SignalsDetectionETHZ17__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_duckietown_msgs__msg__SignalsDetectionETHZ17(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duckietown_msgs
size_t max_serialized_size_duckietown_msgs__msg__SignalsDetectionETHZ17(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: led_detected
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: no_led_detected
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = duckietown_msgs__msg__SignalsDetectionETHZ17;
    is_plain =
      (
      offsetof(DataType, no_led_detected) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SignalsDetectionETHZ17__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_duckietown_msgs__msg__SignalsDetectionETHZ17(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SignalsDetectionETHZ17 = {
  "duckietown_msgs::msg",
  "SignalsDetectionETHZ17",
  _SignalsDetectionETHZ17__cdr_serialize,
  _SignalsDetectionETHZ17__cdr_deserialize,
  _SignalsDetectionETHZ17__get_serialized_size,
  _SignalsDetectionETHZ17__max_serialized_size
};

static rosidl_message_type_support_t _SignalsDetectionETHZ17__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SignalsDetectionETHZ17,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, duckietown_msgs, msg, SignalsDetectionETHZ17)() {
  return &_SignalsDetectionETHZ17__type_support;
}

#if defined(__cplusplus)
}
#endif
