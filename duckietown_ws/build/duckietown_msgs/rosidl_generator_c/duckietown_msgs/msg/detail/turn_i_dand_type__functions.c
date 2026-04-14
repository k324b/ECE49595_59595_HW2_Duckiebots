// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:msg/TurnIDandType.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/turn_i_dand_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
duckietown_msgs__msg__TurnIDandType__init(duckietown_msgs__msg__TurnIDandType * msg)
{
  if (!msg) {
    return false;
  }
  // tag_id
  // turn_type
  return true;
}

void
duckietown_msgs__msg__TurnIDandType__fini(duckietown_msgs__msg__TurnIDandType * msg)
{
  if (!msg) {
    return;
  }
  // tag_id
  // turn_type
}

bool
duckietown_msgs__msg__TurnIDandType__are_equal(const duckietown_msgs__msg__TurnIDandType * lhs, const duckietown_msgs__msg__TurnIDandType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tag_id
  if (lhs->tag_id != rhs->tag_id) {
    return false;
  }
  // turn_type
  if (lhs->turn_type != rhs->turn_type) {
    return false;
  }
  return true;
}

bool
duckietown_msgs__msg__TurnIDandType__copy(
  const duckietown_msgs__msg__TurnIDandType * input,
  duckietown_msgs__msg__TurnIDandType * output)
{
  if (!input || !output) {
    return false;
  }
  // tag_id
  output->tag_id = input->tag_id;
  // turn_type
  output->turn_type = input->turn_type;
  return true;
}

duckietown_msgs__msg__TurnIDandType *
duckietown_msgs__msg__TurnIDandType__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__TurnIDandType * msg = (duckietown_msgs__msg__TurnIDandType *)allocator.allocate(sizeof(duckietown_msgs__msg__TurnIDandType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__msg__TurnIDandType));
  bool success = duckietown_msgs__msg__TurnIDandType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__msg__TurnIDandType__destroy(duckietown_msgs__msg__TurnIDandType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__msg__TurnIDandType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__msg__TurnIDandType__Sequence__init(duckietown_msgs__msg__TurnIDandType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__TurnIDandType * data = NULL;

  if (size) {
    data = (duckietown_msgs__msg__TurnIDandType *)allocator.zero_allocate(size, sizeof(duckietown_msgs__msg__TurnIDandType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__msg__TurnIDandType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__msg__TurnIDandType__fini(&data[i - 1]);
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
duckietown_msgs__msg__TurnIDandType__Sequence__fini(duckietown_msgs__msg__TurnIDandType__Sequence * array)
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
      duckietown_msgs__msg__TurnIDandType__fini(&array->data[i]);
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

duckietown_msgs__msg__TurnIDandType__Sequence *
duckietown_msgs__msg__TurnIDandType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__TurnIDandType__Sequence * array = (duckietown_msgs__msg__TurnIDandType__Sequence *)allocator.allocate(sizeof(duckietown_msgs__msg__TurnIDandType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__msg__TurnIDandType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__msg__TurnIDandType__Sequence__destroy(duckietown_msgs__msg__TurnIDandType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__msg__TurnIDandType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__msg__TurnIDandType__Sequence__are_equal(const duckietown_msgs__msg__TurnIDandType__Sequence * lhs, const duckietown_msgs__msg__TurnIDandType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__msg__TurnIDandType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__TurnIDandType__Sequence__copy(
  const duckietown_msgs__msg__TurnIDandType__Sequence * input,
  duckietown_msgs__msg__TurnIDandType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__msg__TurnIDandType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__msg__TurnIDandType * data =
      (duckietown_msgs__msg__TurnIDandType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__msg__TurnIDandType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__msg__TurnIDandType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__msg__TurnIDandType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
