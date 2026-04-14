// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:msg/DuckieSensor.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/duckie_sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
duckietown_msgs__msg__DuckieSensor__init(duckietown_msgs__msg__DuckieSensor * msg)
{
  if (!msg) {
    return false;
  }
  // value
  // fvalue
  // is_analog
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    duckietown_msgs__msg__DuckieSensor__fini(msg);
    return false;
  }
  return true;
}

void
duckietown_msgs__msg__DuckieSensor__fini(duckietown_msgs__msg__DuckieSensor * msg)
{
  if (!msg) {
    return;
  }
  // value
  // fvalue
  // is_analog
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
duckietown_msgs__msg__DuckieSensor__are_equal(const duckietown_msgs__msg__DuckieSensor * lhs, const duckietown_msgs__msg__DuckieSensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // fvalue
  if (lhs->fvalue != rhs->fvalue) {
    return false;
  }
  // is_analog
  if (lhs->is_analog != rhs->is_analog) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
duckietown_msgs__msg__DuckieSensor__copy(
  const duckietown_msgs__msg__DuckieSensor * input,
  duckietown_msgs__msg__DuckieSensor * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  output->value = input->value;
  // fvalue
  output->fvalue = input->fvalue;
  // is_analog
  output->is_analog = input->is_analog;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

duckietown_msgs__msg__DuckieSensor *
duckietown_msgs__msg__DuckieSensor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__DuckieSensor * msg = (duckietown_msgs__msg__DuckieSensor *)allocator.allocate(sizeof(duckietown_msgs__msg__DuckieSensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__msg__DuckieSensor));
  bool success = duckietown_msgs__msg__DuckieSensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__msg__DuckieSensor__destroy(duckietown_msgs__msg__DuckieSensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__msg__DuckieSensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__msg__DuckieSensor__Sequence__init(duckietown_msgs__msg__DuckieSensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__DuckieSensor * data = NULL;

  if (size) {
    data = (duckietown_msgs__msg__DuckieSensor *)allocator.zero_allocate(size, sizeof(duckietown_msgs__msg__DuckieSensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__msg__DuckieSensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__msg__DuckieSensor__fini(&data[i - 1]);
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
duckietown_msgs__msg__DuckieSensor__Sequence__fini(duckietown_msgs__msg__DuckieSensor__Sequence * array)
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
      duckietown_msgs__msg__DuckieSensor__fini(&array->data[i]);
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

duckietown_msgs__msg__DuckieSensor__Sequence *
duckietown_msgs__msg__DuckieSensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__DuckieSensor__Sequence * array = (duckietown_msgs__msg__DuckieSensor__Sequence *)allocator.allocate(sizeof(duckietown_msgs__msg__DuckieSensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__msg__DuckieSensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__msg__DuckieSensor__Sequence__destroy(duckietown_msgs__msg__DuckieSensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__msg__DuckieSensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__msg__DuckieSensor__Sequence__are_equal(const duckietown_msgs__msg__DuckieSensor__Sequence * lhs, const duckietown_msgs__msg__DuckieSensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__msg__DuckieSensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__DuckieSensor__Sequence__copy(
  const duckietown_msgs__msg__DuckieSensor__Sequence * input,
  duckietown_msgs__msg__DuckieSensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__msg__DuckieSensor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__msg__DuckieSensor * data =
      (duckietown_msgs__msg__DuckieSensor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__msg__DuckieSensor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__msg__DuckieSensor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__msg__DuckieSensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
