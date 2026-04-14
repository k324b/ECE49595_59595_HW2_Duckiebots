// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duckietown_msgs:msg/LanePose.idl
// generated code does not contain a copyright notice
#include "duckietown_msgs/msg/detail/lane_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
duckietown_msgs__msg__LanePose__init(duckietown_msgs__msg__LanePose * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    duckietown_msgs__msg__LanePose__fini(msg);
    return false;
  }
  // d
  // d_ref
  // sigma_d
  // phi
  // phi_ref
  // sigma_phi
  // curvature
  // curvature_ref
  // v_ref
  // status
  // in_lane
  return true;
}

void
duckietown_msgs__msg__LanePose__fini(duckietown_msgs__msg__LanePose * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // d
  // d_ref
  // sigma_d
  // phi
  // phi_ref
  // sigma_phi
  // curvature
  // curvature_ref
  // v_ref
  // status
  // in_lane
}

bool
duckietown_msgs__msg__LanePose__are_equal(const duckietown_msgs__msg__LanePose * lhs, const duckietown_msgs__msg__LanePose * rhs)
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
  // d
  if (lhs->d != rhs->d) {
    return false;
  }
  // d_ref
  if (lhs->d_ref != rhs->d_ref) {
    return false;
  }
  // sigma_d
  if (lhs->sigma_d != rhs->sigma_d) {
    return false;
  }
  // phi
  if (lhs->phi != rhs->phi) {
    return false;
  }
  // phi_ref
  if (lhs->phi_ref != rhs->phi_ref) {
    return false;
  }
  // sigma_phi
  if (lhs->sigma_phi != rhs->sigma_phi) {
    return false;
  }
  // curvature
  if (lhs->curvature != rhs->curvature) {
    return false;
  }
  // curvature_ref
  if (lhs->curvature_ref != rhs->curvature_ref) {
    return false;
  }
  // v_ref
  if (lhs->v_ref != rhs->v_ref) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // in_lane
  if (lhs->in_lane != rhs->in_lane) {
    return false;
  }
  return true;
}

bool
duckietown_msgs__msg__LanePose__copy(
  const duckietown_msgs__msg__LanePose * input,
  duckietown_msgs__msg__LanePose * output)
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
  // d
  output->d = input->d;
  // d_ref
  output->d_ref = input->d_ref;
  // sigma_d
  output->sigma_d = input->sigma_d;
  // phi
  output->phi = input->phi;
  // phi_ref
  output->phi_ref = input->phi_ref;
  // sigma_phi
  output->sigma_phi = input->sigma_phi;
  // curvature
  output->curvature = input->curvature;
  // curvature_ref
  output->curvature_ref = input->curvature_ref;
  // v_ref
  output->v_ref = input->v_ref;
  // status
  output->status = input->status;
  // in_lane
  output->in_lane = input->in_lane;
  return true;
}

duckietown_msgs__msg__LanePose *
duckietown_msgs__msg__LanePose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__LanePose * msg = (duckietown_msgs__msg__LanePose *)allocator.allocate(sizeof(duckietown_msgs__msg__LanePose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duckietown_msgs__msg__LanePose));
  bool success = duckietown_msgs__msg__LanePose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duckietown_msgs__msg__LanePose__destroy(duckietown_msgs__msg__LanePose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duckietown_msgs__msg__LanePose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duckietown_msgs__msg__LanePose__Sequence__init(duckietown_msgs__msg__LanePose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__LanePose * data = NULL;

  if (size) {
    data = (duckietown_msgs__msg__LanePose *)allocator.zero_allocate(size, sizeof(duckietown_msgs__msg__LanePose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duckietown_msgs__msg__LanePose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duckietown_msgs__msg__LanePose__fini(&data[i - 1]);
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
duckietown_msgs__msg__LanePose__Sequence__fini(duckietown_msgs__msg__LanePose__Sequence * array)
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
      duckietown_msgs__msg__LanePose__fini(&array->data[i]);
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

duckietown_msgs__msg__LanePose__Sequence *
duckietown_msgs__msg__LanePose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duckietown_msgs__msg__LanePose__Sequence * array = (duckietown_msgs__msg__LanePose__Sequence *)allocator.allocate(sizeof(duckietown_msgs__msg__LanePose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duckietown_msgs__msg__LanePose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duckietown_msgs__msg__LanePose__Sequence__destroy(duckietown_msgs__msg__LanePose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duckietown_msgs__msg__LanePose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duckietown_msgs__msg__LanePose__Sequence__are_equal(const duckietown_msgs__msg__LanePose__Sequence * lhs, const duckietown_msgs__msg__LanePose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duckietown_msgs__msg__LanePose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duckietown_msgs__msg__LanePose__Sequence__copy(
  const duckietown_msgs__msg__LanePose__Sequence * input,
  duckietown_msgs__msg__LanePose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duckietown_msgs__msg__LanePose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duckietown_msgs__msg__LanePose * data =
      (duckietown_msgs__msg__LanePose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duckietown_msgs__msg__LanePose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duckietown_msgs__msg__LanePose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duckietown_msgs__msg__LanePose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
