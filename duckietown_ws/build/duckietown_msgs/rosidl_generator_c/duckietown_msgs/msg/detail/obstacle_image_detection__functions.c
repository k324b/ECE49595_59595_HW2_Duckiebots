// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:msg/ObstacleImageDetection.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/obstacle_image_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bounding_box`
#include "duckietown_msgs/msg/detail/rect__functions.h"
// Member `type`
#include "duckietown_msgs/msg/detail/obstacle_type__functions.h"

bool
duckietown_msgs__msg__ObstacleImageDetection__init(duckietown_msgs__msg__ObstacleImageDetection * msg)
{
  if (!msg) {
    return false;
  }
  // bounding_box
  if (!duckietown_msgs__msg__Rect__init(&msg->bounding_box)) {
    duckietown_msgs__msg__ObstacleImageDetection__fini(msg);
    return false;
  }
  // type
  if (!duckietown_msgs__msg__ObstacleType__init(&msg->type)) {
    duckietown_msgs__msg__ObstacleImageDetection__fini(msg);
    return false;
  }
  return true;
}

void
duckietown_msgs__msg__ObstacleImageDetection__fini(duckietown_msgs__msg__ObstacleImageDetection * msg)
{
  if (!msg) {
    return;
  }
  // bounding_box
  duckietown_msgs__msg__Rect__fini(&msg->bounding_box);
  // type
  duckietown_msgs__msg__ObstacleType__fini(&msg->type);
}

bool
duckietown_msgs__msg__ObstacleImageDetection__are_equal(const duckietown_msgs__msg__ObstacleImageDetection * lhs, const duckietown_msgs__msg__ObstacleImageDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bounding_box
  if (!duckietown_msgs__msg__Rect__are_equal(
      &(lhs->bounding_box), &(rhs->bounding_box)))
  {
    return false;
  }
  // type
  if (!duckietown_msgs__msg__ObstacleType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  return true;
}

bool
duckietown_msgs__msg__ObstacleImageDetection__copy(
  const duckietown_msgs__msg__ObstacleImageDetection * input,
  duckietown_msgs__msg__ObstacleImageDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // bounding_box
  if (!duckietown_msgs__msg__Rect__copy(
      &(input->bounding_box), &(output->bounding_box)))
  {
    return false;
  }
  // type
  if (!duckietown_msgs__msg__ObstacleType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  return true;
}

duckietown_msgs__msg__ObstacleImageDetection *
duckietown_msgs__msg__ObstacleImageDetection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__ObstacleImageDetection * msg = (duckietown_msgs__msg__ObstacleImageDetection *)allocator.allocate(sizeof(duckietown_msgs__msg__ObstacleImageDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__msg__ObstacleImageDetection));
  bool success = duckietown_msgs__msg__ObstacleImageDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__msg__ObstacleImageDetection__destroy(duckietown_msgs__msg__ObstacleImageDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__msg__ObstacleImageDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__msg__ObstacleImageDetection__Sequence__init(duckietown_msgs__msg__ObstacleImageDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__ObstacleImageDetection * data = NULL;

  if (size) {
    data = (duckietown_msgs__msg__ObstacleImageDetection *)allocator.zero_allocate(size, sizeof(duckietown_msgs__msg__ObstacleImageDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__msg__ObstacleImageDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__msg__ObstacleImageDetection__fini(&data[i - 1]);
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
duckietown_msgs__msg__ObstacleImageDetection__Sequence__fini(duckietown_msgs__msg__ObstacleImageDetection__Sequence * array)
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
      duckietown_msgs__msg__ObstacleImageDetection__fini(&array->data[i]);
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

duckietown_msgs__msg__ObstacleImageDetection__Sequence *
duckietown_msgs__msg__ObstacleImageDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__ObstacleImageDetection__Sequence * array = (duckietown_msgs__msg__ObstacleImageDetection__Sequence *)allocator.allocate(sizeof(duckietown_msgs__msg__ObstacleImageDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__msg__ObstacleImageDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__msg__ObstacleImageDetection__Sequence__destroy(duckietown_msgs__msg__ObstacleImageDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__msg__ObstacleImageDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__msg__ObstacleImageDetection__Sequence__are_equal(const duckietown_msgs__msg__ObstacleImageDetection__Sequence * lhs, const duckietown_msgs__msg__ObstacleImageDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__msg__ObstacleImageDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__ObstacleImageDetection__Sequence__copy(
  const duckietown_msgs__msg__ObstacleImageDetection__Sequence * input,
  duckietown_msgs__msg__ObstacleImageDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__msg__ObstacleImageDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__msg__ObstacleImageDetection * data =
      (duckietown_msgs__msg__ObstacleImageDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__msg__ObstacleImageDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__msg__ObstacleImageDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__msg__ObstacleImageDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
