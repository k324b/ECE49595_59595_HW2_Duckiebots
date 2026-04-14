// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:msg/KinematicsWeights.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/kinematics_weights__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `weights`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
duckietown_msgs__msg__KinematicsWeights__init(duckietown_msgs__msg__KinematicsWeights * msg)
{
  if (!msg) {
    return false;
  }
  // weights
  if (!rosidl_runtime_c__double__Sequence__init(&msg->weights, 0)) {
    duckietown_msgs__msg__KinematicsWeights__fini(msg);
    return false;
  }
  return true;
}

void
duckietown_msgs__msg__KinematicsWeights__fini(duckietown_msgs__msg__KinematicsWeights * msg)
{
  if (!msg) {
    return;
  }
  // weights
  rosidl_runtime_c__double__Sequence__fini(&msg->weights);
}

bool
duckietown_msgs__msg__KinematicsWeights__are_equal(const duckietown_msgs__msg__KinematicsWeights * lhs, const duckietown_msgs__msg__KinematicsWeights * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // weights
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->weights), &(rhs->weights)))
  {
    return false;
  }
  return true;
}

bool
duckietown_msgs__msg__KinematicsWeights__copy(
  const duckietown_msgs__msg__KinematicsWeights * input,
  duckietown_msgs__msg__KinematicsWeights * output)
{
  if (!input || !output) {
    return false;
  }
  // weights
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->weights), &(output->weights)))
  {
    return false;
  }
  return true;
}

duckietown_msgs__msg__KinematicsWeights *
duckietown_msgs__msg__KinematicsWeights__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__KinematicsWeights * msg = (duckietown_msgs__msg__KinematicsWeights *)allocator.allocate(sizeof(duckietown_msgs__msg__KinematicsWeights), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__msg__KinematicsWeights));
  bool success = duckietown_msgs__msg__KinematicsWeights__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__msg__KinematicsWeights__destroy(duckietown_msgs__msg__KinematicsWeights * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__msg__KinematicsWeights__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__msg__KinematicsWeights__Sequence__init(duckietown_msgs__msg__KinematicsWeights__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__KinematicsWeights * data = NULL;

  if (size) {
    data = (duckietown_msgs__msg__KinematicsWeights *)allocator.zero_allocate(size, sizeof(duckietown_msgs__msg__KinematicsWeights), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__msg__KinematicsWeights__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__msg__KinematicsWeights__fini(&data[i - 1]);
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
duckietown_msgs__msg__KinematicsWeights__Sequence__fini(duckietown_msgs__msg__KinematicsWeights__Sequence * array)
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
      duckietown_msgs__msg__KinematicsWeights__fini(&array->data[i]);
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

duckietown_msgs__msg__KinematicsWeights__Sequence *
duckietown_msgs__msg__KinematicsWeights__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__KinematicsWeights__Sequence * array = (duckietown_msgs__msg__KinematicsWeights__Sequence *)allocator.allocate(sizeof(duckietown_msgs__msg__KinematicsWeights__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__msg__KinematicsWeights__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__msg__KinematicsWeights__Sequence__destroy(duckietown_msgs__msg__KinematicsWeights__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__msg__KinematicsWeights__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__msg__KinematicsWeights__Sequence__are_equal(const duckietown_msgs__msg__KinematicsWeights__Sequence * lhs, const duckietown_msgs__msg__KinematicsWeights__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__msg__KinematicsWeights__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__KinematicsWeights__Sequence__copy(
  const duckietown_msgs__msg__KinematicsWeights__Sequence * input,
  duckietown_msgs__msg__KinematicsWeights__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__msg__KinematicsWeights);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__msg__KinematicsWeights * data =
      (duckietown_msgs__msg__KinematicsWeights *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__msg__KinematicsWeights__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__msg__KinematicsWeights__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__msg__KinematicsWeights__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
