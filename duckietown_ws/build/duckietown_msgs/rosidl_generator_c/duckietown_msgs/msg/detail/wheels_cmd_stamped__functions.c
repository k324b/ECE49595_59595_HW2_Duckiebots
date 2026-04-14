// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:msg/WheelsCmdStamped.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/wheels_cmd_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
duckietown_msgs__msg__WheelsCmdStamped__init(duckietown_msgs__msg__WheelsCmdStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    duckietown_msgs__msg__WheelsCmdStamped__fini(msg);
    return false;
  }
  // vel_left
  // vel_right
  return true;
}

void
duckietown_msgs__msg__WheelsCmdStamped__fini(duckietown_msgs__msg__WheelsCmdStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vel_left
  // vel_right
}

bool
duckietown_msgs__msg__WheelsCmdStamped__are_equal(const duckietown_msgs__msg__WheelsCmdStamped * lhs, const duckietown_msgs__msg__WheelsCmdStamped * rhs)
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
  // vel_left
  if (lhs->vel_left != rhs->vel_left) {
    return false;
  }
  // vel_right
  if (lhs->vel_right != rhs->vel_right) {
    return false;
  }
  return true;
}

bool
duckietown_msgs__msg__WheelsCmdStamped__copy(
  const duckietown_msgs__msg__WheelsCmdStamped * input,
  duckietown_msgs__msg__WheelsCmdStamped * output)
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
  // vel_left
  output->vel_left = input->vel_left;
  // vel_right
  output->vel_right = input->vel_right;
  return true;
}

duckietown_msgs__msg__WheelsCmdStamped *
duckietown_msgs__msg__WheelsCmdStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__WheelsCmdStamped * msg = (duckietown_msgs__msg__WheelsCmdStamped *)allocator.allocate(sizeof(duckietown_msgs__msg__WheelsCmdStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__msg__WheelsCmdStamped));
  bool success = duckietown_msgs__msg__WheelsCmdStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__msg__WheelsCmdStamped__destroy(duckietown_msgs__msg__WheelsCmdStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__msg__WheelsCmdStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__msg__WheelsCmdStamped__Sequence__init(duckietown_msgs__msg__WheelsCmdStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__WheelsCmdStamped * data = NULL;

  if (size) {
    data = (duckietown_msgs__msg__WheelsCmdStamped *)allocator.zero_allocate(size, sizeof(duckietown_msgs__msg__WheelsCmdStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__msg__WheelsCmdStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__msg__WheelsCmdStamped__fini(&data[i - 1]);
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
duckietown_msgs__msg__WheelsCmdStamped__Sequence__fini(duckietown_msgs__msg__WheelsCmdStamped__Sequence * array)
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
      duckietown_msgs__msg__WheelsCmdStamped__fini(&array->data[i]);
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

duckietown_msgs__msg__WheelsCmdStamped__Sequence *
duckietown_msgs__msg__WheelsCmdStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__WheelsCmdStamped__Sequence * array = (duckietown_msgs__msg__WheelsCmdStamped__Sequence *)allocator.allocate(sizeof(duckietown_msgs__msg__WheelsCmdStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__msg__WheelsCmdStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__msg__WheelsCmdStamped__Sequence__destroy(duckietown_msgs__msg__WheelsCmdStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__msg__WheelsCmdStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__msg__WheelsCmdStamped__Sequence__are_equal(const duckietown_msgs__msg__WheelsCmdStamped__Sequence * lhs, const duckietown_msgs__msg__WheelsCmdStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__msg__WheelsCmdStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__WheelsCmdStamped__Sequence__copy(
  const duckietown_msgs__msg__WheelsCmdStamped__Sequence * input,
  duckietown_msgs__msg__WheelsCmdStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__msg__WheelsCmdStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__msg__WheelsCmdStamped * data =
      (duckietown_msgs__msg__WheelsCmdStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__msg__WheelsCmdStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__msg__WheelsCmdStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__msg__WheelsCmdStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
