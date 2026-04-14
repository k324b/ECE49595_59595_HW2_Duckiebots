// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:msg/LEDDetection.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/led_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp1`
// Member `timestamp2`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `pixels_normalized`
#include "duckietown_msgs/msg/detail/vector2_d__functions.h"
// Member `color`
#include "rosidl_runtime_c/string_functions.h"
// Member `signal_ts`
// Member `signal`
// Member `fft_fs`
// Member `fft`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
duckietown_msgs__msg__LEDDetection__init(duckietown_msgs__msg__LEDDetection * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp1
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp1)) {
    duckietown_msgs__msg__LEDDetection__fini(msg);
    return false;
  }
  // timestamp2
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp2)) {
    duckietown_msgs__msg__LEDDetection__fini(msg);
    return false;
  }
  // pixels_normalized
  if (!duckietown_msgs__msg__Vector2D__init(&msg->pixels_normalized)) {
    duckietown_msgs__msg__LEDDetection__fini(msg);
    return false;
  }
  // frequency
  // color
  if (!rosidl_runtime_c__String__init(&msg->color)) {
    duckietown_msgs__msg__LEDDetection__fini(msg);
    return false;
  }
  // confidence
  // signal_ts
  if (!rosidl_runtime_c__double__Sequence__init(&msg->signal_ts, 0)) {
    duckietown_msgs__msg__LEDDetection__fini(msg);
    return false;
  }
  // signal
  if (!rosidl_runtime_c__float__Sequence__init(&msg->signal, 0)) {
    duckietown_msgs__msg__LEDDetection__fini(msg);
    return false;
  }
  // fft_fs
  if (!rosidl_runtime_c__float__Sequence__init(&msg->fft_fs, 0)) {
    duckietown_msgs__msg__LEDDetection__fini(msg);
    return false;
  }
  // fft
  if (!rosidl_runtime_c__float__Sequence__init(&msg->fft, 0)) {
    duckietown_msgs__msg__LEDDetection__fini(msg);
    return false;
  }
  return true;
}

void
duckietown_msgs__msg__LEDDetection__fini(duckietown_msgs__msg__LEDDetection * msg)
{
  if (!msg) {
    return;
  }
  // timestamp1
  builtin_interfaces__msg__Time__fini(&msg->timestamp1);
  // timestamp2
  builtin_interfaces__msg__Time__fini(&msg->timestamp2);
  // pixels_normalized
  duckietown_msgs__msg__Vector2D__fini(&msg->pixels_normalized);
  // frequency
  // color
  rosidl_runtime_c__String__fini(&msg->color);
  // confidence
  // signal_ts
  rosidl_runtime_c__double__Sequence__fini(&msg->signal_ts);
  // signal
  rosidl_runtime_c__float__Sequence__fini(&msg->signal);
  // fft_fs
  rosidl_runtime_c__float__Sequence__fini(&msg->fft_fs);
  // fft
  rosidl_runtime_c__float__Sequence__fini(&msg->fft);
}

bool
duckietown_msgs__msg__LEDDetection__are_equal(const duckietown_msgs__msg__LEDDetection * lhs, const duckietown_msgs__msg__LEDDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp1
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp1), &(rhs->timestamp1)))
  {
    return false;
  }
  // timestamp2
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp2), &(rhs->timestamp2)))
  {
    return false;
  }
  // pixels_normalized
  if (!duckietown_msgs__msg__Vector2D__are_equal(
      &(lhs->pixels_normalized), &(rhs->pixels_normalized)))
  {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // signal_ts
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->signal_ts), &(rhs->signal_ts)))
  {
    return false;
  }
  // signal
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->signal), &(rhs->signal)))
  {
    return false;
  }
  // fft_fs
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->fft_fs), &(rhs->fft_fs)))
  {
    return false;
  }
  // fft
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->fft), &(rhs->fft)))
  {
    return false;
  }
  return true;
}

bool
duckietown_msgs__msg__LEDDetection__copy(
  const duckietown_msgs__msg__LEDDetection * input,
  duckietown_msgs__msg__LEDDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp1
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp1), &(output->timestamp1)))
  {
    return false;
  }
  // timestamp2
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp2), &(output->timestamp2)))
  {
    return false;
  }
  // pixels_normalized
  if (!duckietown_msgs__msg__Vector2D__copy(
      &(input->pixels_normalized), &(output->pixels_normalized)))
  {
    return false;
  }
  // frequency
  output->frequency = input->frequency;
  // color
  if (!rosidl_runtime_c__String__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // signal_ts
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->signal_ts), &(output->signal_ts)))
  {
    return false;
  }
  // signal
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->signal), &(output->signal)))
  {
    return false;
  }
  // fft_fs
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->fft_fs), &(output->fft_fs)))
  {
    return false;
  }
  // fft
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->fft), &(output->fft)))
  {
    return false;
  }
  return true;
}

duckietown_msgs__msg__LEDDetection *
duckietown_msgs__msg__LEDDetection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__LEDDetection * msg = (duckietown_msgs__msg__LEDDetection *)allocator.allocate(sizeof(duckietown_msgs__msg__LEDDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__msg__LEDDetection));
  bool success = duckietown_msgs__msg__LEDDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__msg__LEDDetection__destroy(duckietown_msgs__msg__LEDDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__msg__LEDDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__msg__LEDDetection__Sequence__init(duckietown_msgs__msg__LEDDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__LEDDetection * data = NULL;

  if (size) {
    data = (duckietown_msgs__msg__LEDDetection *)allocator.zero_allocate(size, sizeof(duckietown_msgs__msg__LEDDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__msg__LEDDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__msg__LEDDetection__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
duckietown_msgs__msg__LEDDetection__Sequence__fini(duckietown_msgs__msg__LEDDetection__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      duckietown_msgs__msg__LEDDetection__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

duckietown_msgs__msg__LEDDetection__Sequence *
duckietown_msgs__msg__LEDDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__LEDDetection__Sequence * array = (duckietown_msgs__msg__LEDDetection__Sequence *)allocator.allocate(sizeof(duckietown_msgs__msg__LEDDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__msg__LEDDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__msg__LEDDetection__Sequence__destroy(duckietown_msgs__msg__LEDDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__msg__LEDDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__msg__LEDDetection__Sequence__are_equal(const duckietown_msgs__msg__LEDDetection__Sequence * lhs, const duckietown_msgs__msg__LEDDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__msg__LEDDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__LEDDetection__Sequence__copy(
  const duckietown_msgs__msg__LEDDetection__Sequence * input,
  duckietown_msgs__msg__LEDDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__msg__LEDDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__msg__LEDDetection * data =
      (duckietown_msgs__msg__LEDDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__msg__LEDDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__msg__LEDDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__msg__LEDDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
