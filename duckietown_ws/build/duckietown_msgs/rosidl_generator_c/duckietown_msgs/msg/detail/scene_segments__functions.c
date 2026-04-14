// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:msg/SceneSegments.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/scene_segments__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `segimage`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `rects`
#include "duckietown_msgs/msg/detail/rect__functions.h"

bool
duckietown_msgs__msg__SceneSegments__init(duckietown_msgs__msg__SceneSegments * msg)
{
  if (!msg) {
    return false;
  }
  // segimage
  if (!sensor_msgs__msg__Image__init(&msg->segimage)) {
    duckietown_msgs__msg__SceneSegments__fini(msg);
    return false;
  }
  // rects
  if (!duckietown_msgs__msg__Rect__Sequence__init(&msg->rects, 0)) {
    duckietown_msgs__msg__SceneSegments__fini(msg);
    return false;
  }
  return true;
}

void
duckietown_msgs__msg__SceneSegments__fini(duckietown_msgs__msg__SceneSegments * msg)
{
  if (!msg) {
    return;
  }
  // segimage
  sensor_msgs__msg__Image__fini(&msg->segimage);
  // rects
  duckietown_msgs__msg__Rect__Sequence__fini(&msg->rects);
}

bool
duckietown_msgs__msg__SceneSegments__are_equal(const duckietown_msgs__msg__SceneSegments * lhs, const duckietown_msgs__msg__SceneSegments * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // segimage
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->segimage), &(rhs->segimage)))
  {
    return false;
  }
  // rects
  if (!duckietown_msgs__msg__Rect__Sequence__are_equal(
      &(lhs->rects), &(rhs->rects)))
  {
    return false;
  }
  return true;
}

bool
duckietown_msgs__msg__SceneSegments__copy(
  const duckietown_msgs__msg__SceneSegments * input,
  duckietown_msgs__msg__SceneSegments * output)
{
  if (!input || !output) {
    return false;
  }
  // segimage
  if (!sensor_msgs__msg__Image__copy(
      &(input->segimage), &(output->segimage)))
  {
    return false;
  }
  // rects
  if (!duckietown_msgs__msg__Rect__Sequence__copy(
      &(input->rects), &(output->rects)))
  {
    return false;
  }
  return true;
}

duckietown_msgs__msg__SceneSegments *
duckietown_msgs__msg__SceneSegments__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__SceneSegments * msg = (duckietown_msgs__msg__SceneSegments *)allocator.allocate(sizeof(duckietown_msgs__msg__SceneSegments), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__msg__SceneSegments));
  bool success = duckietown_msgs__msg__SceneSegments__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__msg__SceneSegments__destroy(duckietown_msgs__msg__SceneSegments * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__msg__SceneSegments__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__msg__SceneSegments__Sequence__init(duckietown_msgs__msg__SceneSegments__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__SceneSegments * data = NULL;

  if (size) {
    data = (duckietown_msgs__msg__SceneSegments *)allocator.zero_allocate(size, sizeof(duckietown_msgs__msg__SceneSegments), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__msg__SceneSegments__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__msg__SceneSegments__fini(&data[i - 1]);
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
duckietown_msgs__msg__SceneSegments__Sequence__fini(duckietown_msgs__msg__SceneSegments__Sequence * array)
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
      duckietown_msgs__msg__SceneSegments__fini(&array->data[i]);
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

duckietown_msgs__msg__SceneSegments__Sequence *
duckietown_msgs__msg__SceneSegments__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__SceneSegments__Sequence * array = (duckietown_msgs__msg__SceneSegments__Sequence *)allocator.allocate(sizeof(duckietown_msgs__msg__SceneSegments__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__msg__SceneSegments__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__msg__SceneSegments__Sequence__destroy(duckietown_msgs__msg__SceneSegments__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__msg__SceneSegments__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__msg__SceneSegments__Sequence__are_equal(const duckietown_msgs__msg__SceneSegments__Sequence * lhs, const duckietown_msgs__msg__SceneSegments__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__msg__SceneSegments__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__SceneSegments__Sequence__copy(
  const duckietown_msgs__msg__SceneSegments__Sequence * input,
  duckietown_msgs__msg__SceneSegments__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__msg__SceneSegments);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__msg__SceneSegments * data =
      (duckietown_msgs__msg__SceneSegments *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__msg__SceneSegments__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__msg__SceneSegments__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__msg__SceneSegments__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
