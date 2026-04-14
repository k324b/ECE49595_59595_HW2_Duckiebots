// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:msg/IntersectionPose.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/intersection_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
duckietown_msgs__msg__IntersectionPose__init(duckietown_msgs__msg__IntersectionPose * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    duckietown_msgs__msg__IntersectionPose__fini(msg);
    return false;
  }
  // x
  // y
  // theta
  // type
  // likelihood
  return true;
}

void
duckietown_msgs__msg__IntersectionPose__fini(duckietown_msgs__msg__IntersectionPose * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // x
  // y
  // theta
  // type
  // likelihood
}

bool
duckietown_msgs__msg__IntersectionPose__are_equal(const duckietown_msgs__msg__IntersectionPose * lhs, const duckietown_msgs__msg__IntersectionPose * rhs)
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
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // likelihood
  if (lhs->likelihood != rhs->likelihood) {
    return false;
  }
  return true;
}

bool
duckietown_msgs__msg__IntersectionPose__copy(
  const duckietown_msgs__msg__IntersectionPose * input,
  duckietown_msgs__msg__IntersectionPose * output)
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
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  // type
  output->type = input->type;
  // likelihood
  output->likelihood = input->likelihood;
  return true;
}

duckietown_msgs__msg__IntersectionPose *
duckietown_msgs__msg__IntersectionPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__IntersectionPose * msg = (duckietown_msgs__msg__IntersectionPose *)allocator.allocate(sizeof(duckietown_msgs__msg__IntersectionPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__msg__IntersectionPose));
  bool success = duckietown_msgs__msg__IntersectionPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__msg__IntersectionPose__destroy(duckietown_msgs__msg__IntersectionPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__msg__IntersectionPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__msg__IntersectionPose__Sequence__init(duckietown_msgs__msg__IntersectionPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__IntersectionPose * data = NULL;

  if (size) {
    data = (duckietown_msgs__msg__IntersectionPose *)allocator.zero_allocate(size, sizeof(duckietown_msgs__msg__IntersectionPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__msg__IntersectionPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__msg__IntersectionPose__fini(&data[i - 1]);
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
duckietown_msgs__msg__IntersectionPose__Sequence__fini(duckietown_msgs__msg__IntersectionPose__Sequence * array)
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
      duckietown_msgs__msg__IntersectionPose__fini(&array->data[i]);
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

duckietown_msgs__msg__IntersectionPose__Sequence *
duckietown_msgs__msg__IntersectionPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__IntersectionPose__Sequence * array = (duckietown_msgs__msg__IntersectionPose__Sequence *)allocator.allocate(sizeof(duckietown_msgs__msg__IntersectionPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__msg__IntersectionPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__msg__IntersectionPose__Sequence__destroy(duckietown_msgs__msg__IntersectionPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__msg__IntersectionPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__msg__IntersectionPose__Sequence__are_equal(const duckietown_msgs__msg__IntersectionPose__Sequence * lhs, const duckietown_msgs__msg__IntersectionPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__msg__IntersectionPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__IntersectionPose__Sequence__copy(
  const duckietown_msgs__msg__IntersectionPose__Sequence * input,
  duckietown_msgs__msg__IntersectionPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__msg__IntersectionPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__msg__IntersectionPose * data =
      (duckietown_msgs__msg__IntersectionPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__msg__IntersectionPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__msg__IntersectionPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__msg__IntersectionPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
