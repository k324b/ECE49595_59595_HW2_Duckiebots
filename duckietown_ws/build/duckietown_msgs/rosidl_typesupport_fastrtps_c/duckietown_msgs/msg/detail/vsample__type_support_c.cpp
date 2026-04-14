// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from duckietown_msgs:msg/Vsample.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/vsample__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "duckietown_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "duckietown_msgs/msg/detail/vsample__struct.h"
#include "duckietown_msgs/msg/detail/vsample__functions.h"
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


// forward declare type support functions


using _Vsample__ros_msg_type = duckietown_msgs__msg__Vsample;

static bool _Vsample__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Vsample__ros_msg_type * ros_message = static_cast<const _Vsample__ros_msg_type *>(untyped_ros_message);
  // Field name: dl
  {
    cdr << ros_message->dl;
  }

  // Field name: dr
  {
    cdr << ros_message->dr;
  }

  // Field name: dt
  {
    cdr << ros_message->dt;
  }

  // Field name: theta_angle_pose_delta
  {
    cdr << ros_message->theta_angle_pose_delta;
  }

  // Field name: x_axis_pose_delta
  {
    cdr << ros_message->x_axis_pose_delta;
  }

  // Field name: y_axis_pose_delta
  {
    cdr << ros_message->y_axis_pose_delta;
  }

  return true;
}

static bool _Vsample__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Vsample__ros_msg_type * ros_message = static_cast<_Vsample__ros_msg_type *>(untyped_ros_message);
  // Field name: dl
  {
    cdr >> ros_message->dl;
  }

  // Field name: dr
  {
    cdr >> ros_message->dr;
  }

  // Field name: dt
  {
    cdr >> ros_message->dt;
  }

  // Field name: theta_angle_pose_delta
  {
    cdr >> ros_message->theta_angle_pose_delta;
  }

  // Field name: x_axis_pose_delta
  {
    cdr >> ros_message->x_axis_pose_delta;
  }

  // Field name: y_axis_pose_delta
  {
    cdr >> ros_message->y_axis_pose_delta;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duckietown_msgs
size_t get_serialized_size_duckietown_msgs__msg__Vsample(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Vsample__ros_msg_type * ros_message = static_cast<const _Vsample__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name dl
  {
    size_t item_size = sizeof(ros_message->dl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dr
  {
    size_t item_size = sizeof(ros_message->dr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dt
  {
    size_t item_size = sizeof(ros_message->dt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_angle_pose_delta
  {
    size_t item_size = sizeof(ros_message->theta_angle_pose_delta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_axis_pose_delta
  {
    size_t item_size = sizeof(ros_message->x_axis_pose_delta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_axis_pose_delta
  {
    size_t item_size = sizeof(ros_message->y_axis_pose_delta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Vsample__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_duckietown_msgs__msg__Vsample(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duckietown_msgs
size_t max_serialized_size_duckietown_msgs__msg__Vsample(
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

  // member: dl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: theta_angle_pose_delta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x_axis_pose_delta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_axis_pose_delta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = duckietown_msgs__msg__Vsample;
    is_plain =
      (
      offsetof(DataType, y_axis_pose_delta) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Vsample__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_duckietown_msgs__msg__Vsample(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Vsample = {
  "duckietown_msgs::msg",
  "Vsample",
  _Vsample__cdr_serialize,
  _Vsample__cdr_deserialize,
  _Vsample__get_serialized_size,
  _Vsample__max_serialized_size
};

static rosidl_message_type_support_t _Vsample__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Vsample,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, duckietown_msgs, msg, Vsample)() {
  return &_Vsample__type_support;
}

#if defined(__cplusplus)
}
#endif
