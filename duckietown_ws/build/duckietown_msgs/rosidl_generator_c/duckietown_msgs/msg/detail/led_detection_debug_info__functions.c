// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:msg/LEDDetectionDebugInfo.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/led_detection_debug_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `variance_map`
#include "sensor_msgs/msg/detail/compressed_image__functions.h"
// Member `candidates`
#include "duckietown_msgs/msg/detail/vector2_d__functions.h"
// Member `led_all_unfiltered`
#include "duckietown_msgs/msg/detail/led_detection_array__functions.h"

bool
duckietown_msgs__msg__LEDDetectionDebugInfo__init(duckietown_msgs__msg__LEDDetectionDebugInfo * msg)
{
  if (!msg) {
    return false;
  }
  // state
  // capture_progress
  // cell_size
  // crop_rect_norm
  // variance_map
  if (!sensor_msgs__msg__CompressedImage__init(&msg->variance_map)) {
    duckietown_msgs__msg__LEDDetectionDebugInfo__fini(msg);
    return false;
  }
  // candidates
  if (!duckietown_msgs__msg__Vector2D__Sequence__init(&msg->candidates, 0)) {
    duckietown_msgs__msg__LEDDetectionDebugInfo__fini(msg);
    return false;
  }
  // led_all_unfiltered
  if (!duckietown_msgs__msg__LEDDetectionArray__init(&msg->led_all_unfiltered)) {
    duckietown_msgs__msg__LEDDetectionDebugInfo__fini(msg);
    return false;
  }
  return true;
}

void
duckietown_msgs__msg__LEDDetectionDebugInfo__fini(duckietown_msgs__msg__LEDDetectionDebugInfo * msg)
{
  if (!msg) {
    return;
  }
  // state
  // capture_progress
  // cell_size
  // crop_rect_norm
  // variance_map
  sensor_msgs__msg__CompressedImage__fini(&msg->variance_map);
  // candidates
  duckietown_msgs__msg__Vector2D__Sequence__fini(&msg->candidates);
  // led_all_unfiltered
  duckietown_msgs__msg__LEDDetectionArray__fini(&msg->led_all_unfiltered);
}

bool
duckietown_msgs__msg__LEDDetectionDebugInfo__are_equal(const duckietown_msgs__msg__LEDDetectionDebugInfo * lhs, const duckietown_msgs__msg__LEDDetectionDebugInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // capture_progress
  if (lhs->capture_progress != rhs->capture_progress) {
    return false;
  }
  // cell_size
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->cell_size[i] != rhs->cell_size[i]) {
      return false;
    }
  }
  // crop_rect_norm
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->crop_rect_norm[i] != rhs->crop_rect_norm[i]) {
      return false;
    }
  }
  // variance_map
  if (!sensor_msgs__msg__CompressedImage__are_equal(
      &(lhs->variance_map), &(rhs->variance_map)))
  {
    return false;
  }
  // candidates
  if (!duckietown_msgs__msg__Vector2D__Sequence__are_equal(
      &(lhs->candidates), &(rhs->candidates)))
  {
    return false;
  }
  // led_all_unfiltered
  if (!duckietown_msgs__msg__LEDDetectionArray__are_equal(
      &(lhs->led_all_unfiltered), &(rhs->led_all_unfiltered)))
  {
    return false;
  }
  return true;
}

bool
duckietown_msgs__msg__LEDDetectionDebugInfo__copy(
  const duckietown_msgs__msg__LEDDetectionDebugInfo * input,
  duckietown_msgs__msg__LEDDetectionDebugInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  // capture_progress
  output->capture_progress = input->capture_progress;
  // cell_size
  for (size_t i = 0; i < 2; ++i) {
    output->cell_size[i] = input->cell_size[i];
  }
  // crop_rect_norm
  for (size_t i = 0; i < 4; ++i) {
    output->crop_rect_norm[i] = input->crop_rect_norm[i];
  }
  // variance_map
  if (!sensor_msgs__msg__CompressedImage__copy(
      &(input->variance_map), &(output->variance_map)))
  {
    return false;
  }
  // candidates
  if (!duckietown_msgs__msg__Vector2D__Sequence__copy(
      &(input->candidates), &(output->candidates)))
  {
    return false;
  }
  // led_all_unfiltered
  if (!duckietown_msgs__msg__LEDDetectionArray__copy(
      &(input->led_all_unfiltered), &(output->led_all_unfiltered)))
  {
    return false;
  }
  return true;
}

duckietown_msgs__msg__LEDDetectionDebugInfo *
duckietown_msgs__msg__LEDDetectionDebugInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__LEDDetectionDebugInfo * msg = (duckietown_msgs__msg__LEDDetectionDebugInfo *)allocator.allocate(sizeof(duckietown_msgs__msg__LEDDetectionDebugInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__msg__LEDDetectionDebugInfo));
  bool success = duckietown_msgs__msg__LEDDetectionDebugInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__msg__LEDDetectionDebugInfo__destroy(duckietown_msgs__msg__LEDDetectionDebugInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__msg__LEDDetectionDebugInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence__init(duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__LEDDetectionDebugInfo * data = NULL;

  if (size) {
    data = (duckietown_msgs__msg__LEDDetectionDebugInfo *)allocator.zero_allocate(size, sizeof(duckietown_msgs__msg__LEDDetectionDebugInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__msg__LEDDetectionDebugInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__msg__LEDDetectionDebugInfo__fini(&data[i - 1]);
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
duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence__fini(duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence * array)
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
      duckietown_msgs__msg__LEDDetectionDebugInfo__fini(&array->data[i]);
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

duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence *
duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence * array = (duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence *)allocator.allocate(sizeof(duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence__destroy(duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence__are_equal(const duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence * lhs, const duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__msg__LEDDetectionDebugInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence__copy(
  const duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence * input,
  duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__msg__LEDDetectionDebugInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__msg__LEDDetectionDebugInfo * data =
      (duckietown_msgs__msg__LEDDetectionDebugInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__msg__LEDDetectionDebugInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__msg__LEDDetectionDebugInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__msg__LEDDetectionDebugInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
