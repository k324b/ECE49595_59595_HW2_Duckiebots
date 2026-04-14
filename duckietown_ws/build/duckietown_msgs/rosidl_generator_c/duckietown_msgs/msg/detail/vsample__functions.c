// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:msg/Vsample.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/vsample__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
duckietown_msgs__msg__Vsample__init(duckietown_msgs__msg__Vsample * msg)
{
  if (!msg) {
    return false;
  }
  // dl
  // dr
  // dt
  // theta_angle_pose_delta
  // x_axis_pose_delta
  // y_axis_pose_delta
  return true;
}

void
duckietown_msgs__msg__Vsample__fini(duckietown_msgs__msg__Vsample * msg)
{
  if (!msg) {
    return;
  }
  // dl
  // dr
  // dt
  // theta_angle_pose_delta
  // x_axis_pose_delta
  // y_axis_pose_delta
}

bool
duckietown_msgs__msg__Vsample__are_equal(const duckietown_msgs__msg__Vsample * lhs, const duckietown_msgs__msg__Vsample * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dl
  if (lhs->dl != rhs->dl) {
    return false;
  }
  // dr
  if (lhs->dr != rhs->dr) {
    return false;
  }
  // dt
  if (lhs->dt != rhs->dt) {
    return false;
  }
  // theta_angle_pose_delta
  if (lhs->theta_angle_pose_delta != rhs->theta_angle_pose_delta) {
    return false;
  }
  // x_axis_pose_delta
  if (lhs->x_axis_pose_delta != rhs->x_axis_pose_delta) {
    return false;
  }
  // y_axis_pose_delta
  if (lhs->y_axis_pose_delta != rhs->y_axis_pose_delta) {
    return false;
  }
  return true;
}

bool
duckietown_msgs__msg__Vsample__copy(
  const duckietown_msgs__msg__Vsample * input,
  duckietown_msgs__msg__Vsample * output)
{
  if (!input || !output) {
    return false;
  }
  // dl
  output->dl = input->dl;
  // dr
  output->dr = input->dr;
  // dt
  output->dt = input->dt;
  // theta_angle_pose_delta
  output->theta_angle_pose_delta = input->theta_angle_pose_delta;
  // x_axis_pose_delta
  output->x_axis_pose_delta = input->x_axis_pose_delta;
  // y_axis_pose_delta
  output->y_axis_pose_delta = input->y_axis_pose_delta;
  return true;
}

duckietown_msgs__msg__Vsample *
duckietown_msgs__msg__Vsample__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__Vsample * msg = (duckietown_msgs__msg__Vsample *)allocator.allocate(sizeof(duckietown_msgs__msg__Vsample), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__msg__Vsample));
  bool success = duckietown_msgs__msg__Vsample__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__msg__Vsample__destroy(duckietown_msgs__msg__Vsample * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__msg__Vsample__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__msg__Vsample__Sequence__init(duckietown_msgs__msg__Vsample__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__Vsample * data = NULL;

  if (size) {
    data = (duckietown_msgs__msg__Vsample *)allocator.zero_allocate(size, sizeof(duckietown_msgs__msg__Vsample), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__msg__Vsample__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__msg__Vsample__fini(&data[i - 1]);
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
duckietown_msgs__msg__Vsample__Sequence__fini(duckietown_msgs__msg__Vsample__Sequence * array)
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
      duckietown_msgs__msg__Vsample__fini(&array->data[i]);
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

duckietown_msgs__msg__Vsample__Sequence *
duckietown_msgs__msg__Vsample__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__Vsample__Sequence * array = (duckietown_msgs__msg__Vsample__Sequence *)allocator.allocate(sizeof(duckietown_msgs__msg__Vsample__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__msg__Vsample__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__msg__Vsample__Sequence__destroy(duckietown_msgs__msg__Vsample__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__msg__Vsample__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__msg__Vsample__Sequence__are_equal(const duckietown_msgs__msg__Vsample__Sequence * lhs, const duckietown_msgs__msg__Vsample__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__msg__Vsample__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__Vsample__Sequence__copy(
  const duckietown_msgs__msg__Vsample__Sequence * input,
  duckietown_msgs__msg__Vsample__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__msg__Vsample);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__msg__Vsample * data =
      (duckietown_msgs__msg__Vsample *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__msg__Vsample__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__msg__Vsample__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__msg__Vsample__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
