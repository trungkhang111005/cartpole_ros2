// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartpole_interfaces:msg/ImuReading.idl
// generated code does not contain a copyright notice
#include "cartpole_interfaces/msg/detail/imu_reading__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
cartpole_interfaces__msg__ImuReading__init(cartpole_interfaces__msg__ImuReading * msg)
{
  if (!msg) {
    return false;
  }
  // angle_deg
  // angular_velocity
  return true;
}

void
cartpole_interfaces__msg__ImuReading__fini(cartpole_interfaces__msg__ImuReading * msg)
{
  if (!msg) {
    return;
  }
  // angle_deg
  // angular_velocity
}

bool
cartpole_interfaces__msg__ImuReading__are_equal(const cartpole_interfaces__msg__ImuReading * lhs, const cartpole_interfaces__msg__ImuReading * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle_deg
  if (lhs->angle_deg != rhs->angle_deg) {
    return false;
  }
  // angular_velocity
  if (lhs->angular_velocity != rhs->angular_velocity) {
    return false;
  }
  return true;
}

bool
cartpole_interfaces__msg__ImuReading__copy(
  const cartpole_interfaces__msg__ImuReading * input,
  cartpole_interfaces__msg__ImuReading * output)
{
  if (!input || !output) {
    return false;
  }
  // angle_deg
  output->angle_deg = input->angle_deg;
  // angular_velocity
  output->angular_velocity = input->angular_velocity;
  return true;
}

cartpole_interfaces__msg__ImuReading *
cartpole_interfaces__msg__ImuReading__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartpole_interfaces__msg__ImuReading * msg = (cartpole_interfaces__msg__ImuReading *)allocator.allocate(sizeof(cartpole_interfaces__msg__ImuReading), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartpole_interfaces__msg__ImuReading));
  bool success = cartpole_interfaces__msg__ImuReading__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartpole_interfaces__msg__ImuReading__destroy(cartpole_interfaces__msg__ImuReading * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartpole_interfaces__msg__ImuReading__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartpole_interfaces__msg__ImuReading__Sequence__init(cartpole_interfaces__msg__ImuReading__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartpole_interfaces__msg__ImuReading * data = NULL;

  if (size) {
    data = (cartpole_interfaces__msg__ImuReading *)allocator.zero_allocate(size, sizeof(cartpole_interfaces__msg__ImuReading), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartpole_interfaces__msg__ImuReading__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartpole_interfaces__msg__ImuReading__fini(&data[i - 1]);
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
cartpole_interfaces__msg__ImuReading__Sequence__fini(cartpole_interfaces__msg__ImuReading__Sequence * array)
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
      cartpole_interfaces__msg__ImuReading__fini(&array->data[i]);
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

cartpole_interfaces__msg__ImuReading__Sequence *
cartpole_interfaces__msg__ImuReading__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartpole_interfaces__msg__ImuReading__Sequence * array = (cartpole_interfaces__msg__ImuReading__Sequence *)allocator.allocate(sizeof(cartpole_interfaces__msg__ImuReading__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartpole_interfaces__msg__ImuReading__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartpole_interfaces__msg__ImuReading__Sequence__destroy(cartpole_interfaces__msg__ImuReading__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartpole_interfaces__msg__ImuReading__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartpole_interfaces__msg__ImuReading__Sequence__are_equal(const cartpole_interfaces__msg__ImuReading__Sequence * lhs, const cartpole_interfaces__msg__ImuReading__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartpole_interfaces__msg__ImuReading__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartpole_interfaces__msg__ImuReading__Sequence__copy(
  const cartpole_interfaces__msg__ImuReading__Sequence * input,
  cartpole_interfaces__msg__ImuReading__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartpole_interfaces__msg__ImuReading);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cartpole_interfaces__msg__ImuReading * data =
      (cartpole_interfaces__msg__ImuReading *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartpole_interfaces__msg__ImuReading__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cartpole_interfaces__msg__ImuReading__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cartpole_interfaces__msg__ImuReading__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
