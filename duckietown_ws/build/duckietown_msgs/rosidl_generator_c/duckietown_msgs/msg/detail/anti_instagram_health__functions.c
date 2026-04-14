// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:msg/AntiInstagramHealth.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/anti_instagram_health__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
duckietown_msgs__msg__AntiInstagramHealth__init(duckietown_msgs__msg__AntiInstagramHealth * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    duckietown_msgs__msg__AntiInstagramHealth__fini(msg);
    return false;
  }
  // j1
  // j2
  // j3
  return true;
}

void
duckietown_msgs__msg__AntiInstagramHealth__fini(duckietown_msgs__msg__AntiInstagramHealth * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // j1
  // j2
  // j3
}

bool
duckietown_msgs__msg__AntiInstagramHealth__are_equal(const duckietown_msgs__msg__AntiInstagramHealth * lhs, const duckietown_msgs__msg__AntiInstagramHealth * rhs)
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
  // j1
  if (lhs->j1 != rhs->j1) {
    return false;
  }
  // j2
  if (lhs->j2 != rhs->j2) {
    return false;
  }
  // j3
  if (lhs->j3 != rhs->j3) {
    return false;
  }
  return true;
}

bool
duckietown_msgs__msg__AntiInstagramHealth__copy(
  const duckietown_msgs__msg__AntiInstagramHealth * input,
  duckietown_msgs__msg__AntiInstagramHealth * output)
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
  // j1
  output->j1 = input->j1;
  // j2
  output->j2 = input->j2;
  // j3
  output->j3 = input->j3;
  return true;
}

duckietown_msgs__msg__AntiInstagramHealth *
duckietown_msgs__msg__AntiInstagramHealth__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__AntiInstagramHealth * msg = (duckietown_msgs__msg__AntiInstagramHealth *)allocator.allocate(sizeof(duckietown_msgs__msg__AntiInstagramHealth), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__msg__AntiInstagramHealth));
  bool success = duckietown_msgs__msg__AntiInstagramHealth__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__msg__AntiInstagramHealth__destroy(duckietown_msgs__msg__AntiInstagramHealth * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__msg__AntiInstagramHealth__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__msg__AntiInstagramHealth__Sequence__init(duckietown_msgs__msg__AntiInstagramHealth__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__AntiInstagramHealth * data = NULL;

  if (size) {
    data = (duckietown_msgs__msg__AntiInstagramHealth *)allocator.zero_allocate(size, sizeof(duckietown_msgs__msg__AntiInstagramHealth), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__msg__AntiInstagramHealth__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__msg__AntiInstagramHealth__fini(&data[i - 1]);
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
duckietown_msgs__msg__AntiInstagramHealth__Sequence__fini(duckietown_msgs__msg__AntiInstagramHealth__Sequence * array)
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
      duckietown_msgs__msg__AntiInstagramHealth__fini(&array->data[i]);
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

duckietown_msgs__msg__AntiInstagramHealth__Sequence *
duckietown_msgs__msg__AntiInstagramHealth__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__AntiInstagramHealth__Sequence * array = (duckietown_msgs__msg__AntiInstagramHealth__Sequence *)allocator.allocate(sizeof(duckietown_msgs__msg__AntiInstagramHealth__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__msg__AntiInstagramHealth__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__msg__AntiInstagramHealth__Sequence__destroy(duckietown_msgs__msg__AntiInstagramHealth__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__msg__AntiInstagramHealth__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__msg__AntiInstagramHealth__Sequence__are_equal(const duckietown_msgs__msg__AntiInstagramHealth__Sequence * lhs, const duckietown_msgs__msg__AntiInstagramHealth__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__msg__AntiInstagramHealth__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__AntiInstagramHealth__Sequence__copy(
  const duckietown_msgs__msg__AntiInstagramHealth__Sequence * input,
  duckietown_msgs__msg__AntiInstagramHealth__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__msg__AntiInstagramHealth);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__msg__AntiInstagramHealth * data =
      (duckietown_msgs__msg__AntiInstagramHealth *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__msg__AntiInstagramHealth__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__msg__AntiInstagramHealth__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__msg__AntiInstagramHealth__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
