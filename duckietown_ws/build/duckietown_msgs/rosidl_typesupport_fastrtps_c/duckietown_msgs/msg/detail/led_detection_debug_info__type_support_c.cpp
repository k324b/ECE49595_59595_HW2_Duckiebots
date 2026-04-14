// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from duckietown_msgs:msg/LEDDetectionDebugInfo.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/led_detection_debug_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "duckietown_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "duckietown_msgs/msg/detail/led_detection_debug_info__struct.h"
#include "duckietown_msgs/msg/detail/led_detection_debug_info__functions.h"
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

#include "duckietown_msgs/msg/detail/led_detection_array__functions.h"  // led_all_unfiltered
#include "duckietown_msgs/msg/detail/vector2_d__functions.h"  // candidates
#include "sensor_msgs/msg/detail/compressed_image__functions.h"  // variance_map

// forward declare type support functions
size_t get_serialized_size_duckietown_msgs__msg__LEDDetectionArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_duckietown_msgs__msg__LEDDetectionArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, duckietown_msgs, msg, LEDDetectionArray)();
size_t get_serialized_size_duckietown_msgs__msg__Vector2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_duckietown_msgs__msg__Vector2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, duckietown_msgs, msg, Vector2D)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duckietown_msgs
size_t get_serialized_size_sensor_msgs__msg__CompressedImage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duckietown_msgs
size_t max_serialized_size_sensor_msgs__msg__CompressedImage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_duckietown_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, CompressedImage)();


using _LEDDetectionDebugInfo__ros_msg_type = duckietown_msgs__msg__LEDDetectionDebugInfo;

static bool _LEDDetectionDebugInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LEDDetectionDebugInfo__ros_msg_type * ros_message = static_cast<const _LEDDetectionDebugInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: state
  {
    cdr << ros_message->state;
  }

  // Field name: capture_progress
  {
    cdr << ros_message->capture_progress;
  }

  // Field name: cell_size
  {
    size_t size = 2;
    auto array_ptr = ros_message->cell_size;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: crop_rect_norm
  {
    size_t size = 4;
    auto array_ptr = ros_message->crop_rect_norm;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: variance_map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, CompressedImage
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->variance_map, cdr))
    {
      return false;
    }
  }

  // Field name: candidates
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, duckietown_msgs, msg, Vector2D
      )()->data);
    size_t size = ros_message->candidates.size;
    auto array_ptr = ros_message->candidates.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: led_all_unfiltered
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, duckietown_msgs, msg, LEDDetectionArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->led_all_unfiltered, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _LEDDetectionDebugInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LEDDetectionDebugInfo__ros_msg_type * ros_message = static_cast<_LEDDetectionDebugInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: state
  {
    cdr >> ros_message->state;
  }

  // Field name: capture_progress
  {
    cdr >> ros_message->capture_progress;
  }

  // Field name: cell_size
  {
    size_t size = 2;
    auto array_ptr = ros_message->cell_size;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: crop_rect_norm
  {
    size_t size = 4;
    auto array_ptr = ros_message->crop_rect_norm;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: variance_map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, CompressedImage
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->variance_map))
    {
      return false;
    }
  }

  // Field name: candidates
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, duckietown_msgs, msg, Vector2D
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->candidates.data) {
      duckietown_msgs__msg__Vector2D__Sequence__fini(&ros_message->candidates);
    }
    if (!duckietown_msgs__msg__Vector2D__Sequence__init(&ros_message->candidates, size)) {
      fprintf(stderr, "failed to create array for field 'candidates'");
      return false;
    }
    auto array_ptr = ros_message->candidates.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: led_all_unfiltered
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, duckietown_msgs, msg, LEDDetectionArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->led_all_unfiltered))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duckietown_msgs
size_t get_serialized_size_duckietown_msgs__msg__LEDDetectionDebugInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LEDDetectionDebugInfo__ros_msg_type * ros_message = static_cast<const _LEDDetectionDebugInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name capture_progress
  {
    size_t item_size = sizeof(ros_message->capture_progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cell_size
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->cell_size;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crop_rect_norm
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->crop_rect_norm;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name variance_map

  current_alignment += get_serialized_size_sensor_msgs__msg__CompressedImage(
    &(ros_message->variance_map), current_alignment);
  // field.name candidates
  {
    size_t array_size = ros_message->candidates.size;
    auto array_ptr = ros_message->candidates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_duckietown_msgs__msg__Vector2D(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name led_all_unfiltered

  current_alignment += get_serialized_size_duckietown_msgs__msg__LEDDetectionArray(
    &(ros_message->led_all_unfiltered), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _LEDDetectionDebugInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_duckietown_msgs__msg__LEDDetectionDebugInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duckietown_msgs
size_t max_serialized_size_duckietown_msgs__msg__LEDDetectionDebugInfo(
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

  // member: state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: capture_progress
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cell_size
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: crop_rect_norm
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: variance_map
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__CompressedImage(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: candidates
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_duckietown_msgs__msg__Vector2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: led_all_unfiltered
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_duckietown_msgs__msg__LEDDetectionArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = duckietown_msgs__msg__LEDDetectionDebugInfo;
    is_plain =
      (
      offsetof(DataType, led_all_unfiltered) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LEDDetectionDebugInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_duckietown_msgs__msg__LEDDetectionDebugInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LEDDetectionDebugInfo = {
  "duckietown_msgs::msg",
  "LEDDetectionDebugInfo",
  _LEDDetectionDebugInfo__cdr_serialize,
  _LEDDetectionDebugInfo__cdr_deserialize,
  _LEDDetectionDebugInfo__get_serialized_size,
  _LEDDetectionDebugInfo__max_serialized_size
};

static rosidl_message_type_support_t _LEDDetectionDebugInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LEDDetectionDebugInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, duckietown_msgs, msg, LEDDetectionDebugInfo)() {
  return &_LEDDetectionDebugInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
