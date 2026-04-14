// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:msg/StopLineReading.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/stop_line_reading__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `stop_line_point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
duckietown_msgs__msg__StopLineReading__init(duckietown_msgs__msg__StopLineReading * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    duckietown_msgs__msg__StopLineReading__fini(msg);
    return false;
  }
  // stop_line_detected
  // at_stop_line
  // stop_line_point
  if (!geometry_msgs__msg__Point__init(&msg->stop_line_point)) {
    duckietown_msgs__msg__StopLineReading__fini(msg);
    return false;
  }
  return true;
}

void
duckietown_msgs__msg__StopLineReading__fini(duckietown_msgs__msg__StopLineReading * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // stop_line_detected
  // at_stop_line
  // stop_line_point
  geometry_msgs__msg__Point__fini(&msg->stop_line_point);
}

bool
duckietown_msgs__msg__StopLineReading__are_equal(const duckietown_msgs__msg__StopLineReading * lhs, const duckietown_msgs__msg__StopLineReading * rhs)
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
  // stop_line_detected
  if (lhs->stop_line_detected != rhs->stop_line_detected) {
    return false;
  }
  // at_stop_line
  if (lhs->at_stop_line != rhs->at_stop_line) {
    return false;
  }
  // stop_line_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->stop_line_point), &(rhs->stop_line_point)))
  {
    return false;
  }
  return true;
}

bool
duckietown_msgs__msg__StopLineReading__copy(
  const duckietown_msgs__msg__StopLineReading * input,
  duckietown_msgs__msg__StopLineReading * output)
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
  // stop_line_detected
  output->stop_line_detected = input->stop_line_detected;
  // at_stop_line
  output->at_stop_line = input->at_stop_line;
  // stop_line_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->stop_line_point), &(output->stop_line_point)))
  {
    return false;
  }
  return true;
}

duckietown_msgs__msg__StopLineReading *
duckietown_msgs__msg__StopLineReading__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__StopLineReading * msg = (duckietown_msgs__msg__StopLineReading *)allocator.allocate(sizeof(duckietown_msgs__msg__StopLineReading), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__msg__StopLineReading));
  bool success = duckietown_msgs__msg__StopLineReading__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__msg__StopLineReading__destroy(duckietown_msgs__msg__StopLineReading * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__msg__StopLineReading__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__msg__StopLineReading__Sequence__init(duckietown_msgs__msg__StopLineReading__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__StopLineReading * data = NULL;

  if (size) {
    data = (duckietown_msgs__msg__StopLineReading *)allocator.zero_allocate(size, sizeof(duckietown_msgs__msg__StopLineReading), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__msg__StopLineReading__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__msg__StopLineReading__fini(&data[i - 1]);
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
duckietown_msgs__msg__StopLineReading__Sequence__fini(duckietown_msgs__msg__StopLineReading__Sequence * array)
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
      duckietown_msgs__msg__StopLineReading__fini(&array->data[i]);
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

duckietown_msgs__msg__StopLineReading__Sequence *
duckietown_msgs__msg__StopLineReading__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__StopLineReading__Sequence * array = (duckietown_msgs__msg__StopLineReading__Sequence *)allocator.allocate(sizeof(duckietown_msgs__msg__StopLineReading__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__msg__StopLineReading__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__msg__StopLineReading__Sequence__destroy(duckietown_msgs__msg__StopLineReading__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__msg__StopLineReading__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__msg__StopLineReading__Sequence__are_equal(const duckietown_msgs__msg__StopLineReading__Sequence * lhs, const duckietown_msgs__msg__StopLineReading__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__msg__StopLineReading__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__StopLineReading__Sequence__copy(
  const duckietown_msgs__msg__StopLineReading__Sequence * input,
  duckietown_msgs__msg__StopLineReading__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__msg__StopLineReading);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__msg__StopLineReading * data =
      (duckietown_msgs__msg__StopLineReading *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__msg__StopLineReading__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__msg__StopLineReading__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__msg__StopLineReading__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
