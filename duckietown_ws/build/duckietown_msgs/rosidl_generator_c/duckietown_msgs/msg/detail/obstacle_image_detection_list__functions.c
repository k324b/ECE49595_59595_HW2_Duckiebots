// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:msg/ObstacleImageDetectionList.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/obstacle_image_detection_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `list`
#include "duckietown_msgs/msg/detail/obstacle_image_detection__functions.h"

bool
duckietown_msgs__msg__ObstacleImageDetectionList__init(duckietown_msgs__msg__ObstacleImageDetectionList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    duckietown_msgs__msg__ObstacleImageDetectionList__fini(msg);
    return false;
  }
  // list
  if (!duckietown_msgs__msg__ObstacleImageDetection__Sequence__init(&msg->list, 0)) {
    duckietown_msgs__msg__ObstacleImageDetectionList__fini(msg);
    return false;
  }
  // imwidth
  // imheight
  return true;
}

void
duckietown_msgs__msg__ObstacleImageDetectionList__fini(duckietown_msgs__msg__ObstacleImageDetectionList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // list
  duckietown_msgs__msg__ObstacleImageDetection__Sequence__fini(&msg->list);
  // imwidth
  // imheight
}

bool
duckietown_msgs__msg__ObstacleImageDetectionList__are_equal(const duckietown_msgs__msg__ObstacleImageDetectionList * lhs, const duckietown_msgs__msg__ObstacleImageDetectionList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // list
  if (!duckietown_msgs__msg__ObstacleImageDetection__Sequence__are_equal(
      &(lhs->list), &(rhs->list)))
  {
    return false;
  }
  // imwidth
  if (lhs->imwidth != rhs->imwidth) {
    return false;
  }
  // imheight
  if (lhs->imheight != rhs->imheight) {
    return false;
  }
  return true;
}

bool
duckietown_msgs__msg__ObstacleImageDetectionList__copy(
  const duckietown_msgs__msg__ObstacleImageDetectionList * input,
  duckietown_msgs__msg__ObstacleImageDetectionList * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // list
  if (!duckietown_msgs__msg__ObstacleImageDetection__Sequence__copy(
      &(input->list), &(output->list)))
  {
    return false;
  }
  // imwidth
  output->imwidth = input->imwidth;
  // imheight
  output->imheight = input->imheight;
  return true;
}

duckietown_msgs__msg__ObstacleImageDetectionList *
duckietown_msgs__msg__ObstacleImageDetectionList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__ObstacleImageDetectionList * msg = (duckietown_msgs__msg__ObstacleImageDetectionList *)allocator.allocate(sizeof(duckietown_msgs__msg__ObstacleImageDetectionList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__msg__ObstacleImageDetectionList));
  bool success = duckietown_msgs__msg__ObstacleImageDetectionList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__msg__ObstacleImageDetectionList__destroy(duckietown_msgs__msg__ObstacleImageDetectionList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__msg__ObstacleImageDetectionList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__msg__ObstacleImageDetectionList__Sequence__init(duckietown_msgs__msg__ObstacleImageDetectionList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__ObstacleImageDetectionList * data = NULL;

  if (size) {
    data = (duckietown_msgs__msg__ObstacleImageDetectionList *)allocator.zero_allocate(size, sizeof(duckietown_msgs__msg__ObstacleImageDetectionList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__msg__ObstacleImageDetectionList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__msg__ObstacleImageDetectionList__fini(&data[i - 1]);
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
duckietown_msgs__msg__ObstacleImageDetectionList__Sequence__fini(duckietown_msgs__msg__ObstacleImageDetectionList__Sequence * array)
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
      duckietown_msgs__msg__ObstacleImageDetectionList__fini(&array->data[i]);
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

duckietown_msgs__msg__ObstacleImageDetectionList__Sequence *
duckietown_msgs__msg__ObstacleImageDetectionList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__ObstacleImageDetectionList__Sequence * array = (duckietown_msgs__msg__ObstacleImageDetectionList__Sequence *)allocator.allocate(sizeof(duckietown_msgs__msg__ObstacleImageDetectionList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__msg__ObstacleImageDetectionList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__msg__ObstacleImageDetectionList__Sequence__destroy(duckietown_msgs__msg__ObstacleImageDetectionList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__msg__ObstacleImageDetectionList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__msg__ObstacleImageDetectionList__Sequence__are_equal(const duckietown_msgs__msg__ObstacleImageDetectionList__Sequence * lhs, const duckietown_msgs__msg__ObstacleImageDetectionList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__msg__ObstacleImageDetectionList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__ObstacleImageDetectionList__Sequence__copy(
  const duckietown_msgs__msg__ObstacleImageDetectionList__Sequence * input,
  duckietown_msgs__msg__ObstacleImageDetectionList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__msg__ObstacleImageDetectionList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__msg__ObstacleImageDetectionList * data =
      (duckietown_msgs__msg__ObstacleImageDetectionList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__msg__ObstacleImageDetectionList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__msg__ObstacleImageDetectionList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__msg__ObstacleImageDetectionList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
