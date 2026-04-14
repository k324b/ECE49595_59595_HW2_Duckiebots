// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:msg/Segment.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/segment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pixels_normalized`
// Member `normal`
#include "duckietown_msgs/msg/detail/vector2_d__functions.h"
// Member `points`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
duckietown_msgs__msg__Segment__init(duckietown_msgs__msg__Segment * msg)
{
  if (!msg) {
    return false;
  }
  // color
  // pixels_normalized
  for (size_t i = 0; i < 2; ++i) {
    if (!duckietown_msgs__msg__Vector2D__init(&msg->pixels_normalized[i])) {
      duckietown_msgs__msg__Segment__fini(msg);
      return false;
    }
  }
  // normal
  if (!duckietown_msgs__msg__Vector2D__init(&msg->normal)) {
    duckietown_msgs__msg__Segment__fini(msg);
    return false;
  }
  // points
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Point__init(&msg->points[i])) {
      duckietown_msgs__msg__Segment__fini(msg);
      return false;
    }
  }
  return true;
}

void
duckietown_msgs__msg__Segment__fini(duckietown_msgs__msg__Segment * msg)
{
  if (!msg) {
    return;
  }
  // color
  // pixels_normalized
  for (size_t i = 0; i < 2; ++i) {
    duckietown_msgs__msg__Vector2D__fini(&msg->pixels_normalized[i]);
  }
  // normal
  duckietown_msgs__msg__Vector2D__fini(&msg->normal);
  // points
  for (size_t i = 0; i < 2; ++i) {
    geometry_msgs__msg__Point__fini(&msg->points[i]);
  }
}

bool
duckietown_msgs__msg__Segment__are_equal(const duckietown_msgs__msg__Segment * lhs, const duckietown_msgs__msg__Segment * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // pixels_normalized
  for (size_t i = 0; i < 2; ++i) {
    if (!duckietown_msgs__msg__Vector2D__are_equal(
        &(lhs->pixels_normalized[i]), &(rhs->pixels_normalized[i])))
    {
      return false;
    }
  }
  // normal
  if (!duckietown_msgs__msg__Vector2D__are_equal(
      &(lhs->normal), &(rhs->normal)))
  {
    return false;
  }
  // points
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Point__are_equal(
        &(lhs->points[i]), &(rhs->points[i])))
    {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__Segment__copy(
  const duckietown_msgs__msg__Segment * input,
  duckietown_msgs__msg__Segment * output)
{
  if (!input || !output) {
    return false;
  }
  // color
  output->color = input->color;
  // pixels_normalized
  for (size_t i = 0; i < 2; ++i) {
    if (!duckietown_msgs__msg__Vector2D__copy(
        &(input->pixels_normalized[i]), &(output->pixels_normalized[i])))
    {
      return false;
    }
  }
  // normal
  if (!duckietown_msgs__msg__Vector2D__copy(
      &(input->normal), &(output->normal)))
  {
    return false;
  }
  // points
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Point__copy(
        &(input->points[i]), &(output->points[i])))
    {
      return false;
    }
  }
  return true;
}

duckietown_msgs__msg__Segment *
duckietown_msgs__msg__Segment__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__Segment * msg = (duckietown_msgs__msg__Segment *)allocator.allocate(sizeof(duckietown_msgs__msg__Segment), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__msg__Segment));
  bool success = duckietown_msgs__msg__Segment__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__msg__Segment__destroy(duckietown_msgs__msg__Segment * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__msg__Segment__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__msg__Segment__Sequence__init(duckietown_msgs__msg__Segment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__Segment * data = NULL;

  if (size) {
    data = (duckietown_msgs__msg__Segment *)allocator.zero_allocate(size, sizeof(duckietown_msgs__msg__Segment), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__msg__Segment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__msg__Segment__fini(&data[i - 1]);
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
duckietown_msgs__msg__Segment__Sequence__fini(duckietown_msgs__msg__Segment__Sequence * array)
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
      duckietown_msgs__msg__Segment__fini(&array->data[i]);
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

duckietown_msgs__msg__Segment__Sequence *
duckietown_msgs__msg__Segment__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__Segment__Sequence * array = (duckietown_msgs__msg__Segment__Sequence *)allocator.allocate(sizeof(duckietown_msgs__msg__Segment__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__msg__Segment__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__msg__Segment__Sequence__destroy(duckietown_msgs__msg__Segment__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__msg__Segment__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__msg__Segment__Sequence__are_equal(const duckietown_msgs__msg__Segment__Sequence * lhs, const duckietown_msgs__msg__Segment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__msg__Segment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__Segment__Sequence__copy(
  const duckietown_msgs__msg__Segment__Sequence * input,
  duckietown_msgs__msg__Segment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__msg__Segment);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__msg__Segment * data =
      (duckietown_msgs__msg__Segment *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__msg__Segment__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__msg__Segment__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__msg__Segment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
