// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:srv/GetVariable.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/srv/detail/get_variable__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name_json`
#include "std_msgs/msg/detail/string__functions.h"

bool
duckietown_msgs__srv__GetVariable_Request__init(duckietown_msgs__srv__GetVariable_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name_json
  if (!std_msgs__msg__String__init(&msg->name_json)) {
    duckietown_msgs__srv__GetVariable_Request__fini(msg);
    return false;
  }
  return true;
}

void
duckietown_msgs__srv__GetVariable_Request__fini(duckietown_msgs__srv__GetVariable_Request * msg)
{
  if (!msg) {
    return;
  }
  // name_json
  std_msgs__msg__String__fini(&msg->name_json);
}

bool
duckietown_msgs__srv__GetVariable_Request__are_equal(const duckietown_msgs__srv__GetVariable_Request * lhs, const duckietown_msgs__srv__GetVariable_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name_json
  if (!std_msgs__msg__String__are_equal(
      &(lhs->name_json), &(rhs->name_json)))
  {
    return false;
  }
  return true;
}

bool
duckietown_msgs__srv__GetVariable_Request__copy(
  const duckietown_msgs__srv__GetVariable_Request * input,
  duckietown_msgs__srv__GetVariable_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name_json
  if (!std_msgs__msg__String__copy(
      &(input->name_json), &(output->name_json)))
  {
    return false;
  }
  return true;
}

duckietown_msgs__srv__GetVariable_Request *
duckietown_msgs__srv__GetVariable_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__srv__GetVariable_Request * msg = (duckietown_msgs__srv__GetVariable_Request *)allocator.allocate(sizeof(duckietown_msgs__srv__GetVariable_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__srv__GetVariable_Request));
  bool success = duckietown_msgs__srv__GetVariable_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__srv__GetVariable_Request__destroy(duckietown_msgs__srv__GetVariable_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__srv__GetVariable_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__srv__GetVariable_Request__Sequence__init(duckietown_msgs__srv__GetVariable_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__srv__GetVariable_Request * data = NULL;

  if (size) {
    data = (duckietown_msgs__srv__GetVariable_Request *)allocator.zero_allocate(size, sizeof(duckietown_msgs__srv__GetVariable_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__srv__GetVariable_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__srv__GetVariable_Request__fini(&data[i - 1]);
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
duckietown_msgs__srv__GetVariable_Request__Sequence__fini(duckietown_msgs__srv__GetVariable_Request__Sequence * array)
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
      duckietown_msgs__srv__GetVariable_Request__fini(&array->data[i]);
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

duckietown_msgs__srv__GetVariable_Request__Sequence *
duckietown_msgs__srv__GetVariable_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__srv__GetVariable_Request__Sequence * array = (duckietown_msgs__srv__GetVariable_Request__Sequence *)allocator.allocate(sizeof(duckietown_msgs__srv__GetVariable_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__srv__GetVariable_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__srv__GetVariable_Request__Sequence__destroy(duckietown_msgs__srv__GetVariable_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__srv__GetVariable_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__srv__GetVariable_Request__Sequence__are_equal(const duckietown_msgs__srv__GetVariable_Request__Sequence * lhs, const duckietown_msgs__srv__GetVariable_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__srv__GetVariable_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__srv__GetVariable_Request__Sequence__copy(
  const duckietown_msgs__srv__GetVariable_Request__Sequence * input,
  duckietown_msgs__srv__GetVariable_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__srv__GetVariable_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__srv__GetVariable_Request * data =
      (duckietown_msgs__srv__GetVariable_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__srv__GetVariable_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__srv__GetVariable_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__srv__GetVariable_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `value_json`
// already included above
// #include "std_msgs/msg/detail/string__functions.h"

bool
duckietown_msgs__srv__GetVariable_Response__init(duckietown_msgs__srv__GetVariable_Response * msg)
{
  if (!msg) {
    return false;
  }
  // value_json
  if (!std_msgs__msg__String__init(&msg->value_json)) {
    duckietown_msgs__srv__GetVariable_Response__fini(msg);
    return false;
  }
  return true;
}

void
duckietown_msgs__srv__GetVariable_Response__fini(duckietown_msgs__srv__GetVariable_Response * msg)
{
  if (!msg) {
    return;
  }
  // value_json
  std_msgs__msg__String__fini(&msg->value_json);
}

bool
duckietown_msgs__srv__GetVariable_Response__are_equal(const duckietown_msgs__srv__GetVariable_Response * lhs, const duckietown_msgs__srv__GetVariable_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value_json
  if (!std_msgs__msg__String__are_equal(
      &(lhs->value_json), &(rhs->value_json)))
  {
    return false;
  }
  return true;
}

bool
duckietown_msgs__srv__GetVariable_Response__copy(
  const duckietown_msgs__srv__GetVariable_Response * input,
  duckietown_msgs__srv__GetVariable_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // value_json
  if (!std_msgs__msg__String__copy(
      &(input->value_json), &(output->value_json)))
  {
    return false;
  }
  return true;
}

duckietown_msgs__srv__GetVariable_Response *
duckietown_msgs__srv__GetVariable_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__srv__GetVariable_Response * msg = (duckietown_msgs__srv__GetVariable_Response *)allocator.allocate(sizeof(duckietown_msgs__srv__GetVariable_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__srv__GetVariable_Response));
  bool success = duckietown_msgs__srv__GetVariable_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__srv__GetVariable_Response__destroy(duckietown_msgs__srv__GetVariable_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__srv__GetVariable_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__srv__GetVariable_Response__Sequence__init(duckietown_msgs__srv__GetVariable_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__srv__GetVariable_Response * data = NULL;

  if (size) {
    data = (duckietown_msgs__srv__GetVariable_Response *)allocator.zero_allocate(size, sizeof(duckietown_msgs__srv__GetVariable_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__srv__GetVariable_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__srv__GetVariable_Response__fini(&data[i - 1]);
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
duckietown_msgs__srv__GetVariable_Response__Sequence__fini(duckietown_msgs__srv__GetVariable_Response__Sequence * array)
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
      duckietown_msgs__srv__GetVariable_Response__fini(&array->data[i]);
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

duckietown_msgs__srv__GetVariable_Response__Sequence *
duckietown_msgs__srv__GetVariable_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__srv__GetVariable_Response__Sequence * array = (duckietown_msgs__srv__GetVariable_Response__Sequence *)allocator.allocate(sizeof(duckietown_msgs__srv__GetVariable_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__srv__GetVariable_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__srv__GetVariable_Response__Sequence__destroy(duckietown_msgs__srv__GetVariable_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__srv__GetVariable_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__srv__GetVariable_Response__Sequence__are_equal(const duckietown_msgs__srv__GetVariable_Response__Sequence * lhs, const duckietown_msgs__srv__GetVariable_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__srv__GetVariable_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__srv__GetVariable_Response__Sequence__copy(
  const duckietown_msgs__srv__GetVariable_Response__Sequence * input,
  duckietown_msgs__srv__GetVariable_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__srv__GetVariable_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__srv__GetVariable_Response * data =
      (duckietown_msgs__srv__GetVariable_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__srv__GetVariable_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__srv__GetVariable_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__srv__GetVariable_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
