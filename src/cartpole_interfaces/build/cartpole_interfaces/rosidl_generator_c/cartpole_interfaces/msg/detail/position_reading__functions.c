// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartpole_interfaces:msg/PositionReading.idl
// generated code does not contain a copyright notice
#include "cartpole_interfaces/msg/detail/position_reading__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
cartpole_interfaces__msg__PositionReading__init(cartpole_interfaces__msg__PositionReading * msg)
{
  if (!msg) {
    return false;
  }
  // x_cart_m
  return true;
}

void
cartpole_interfaces__msg__PositionReading__fini(cartpole_interfaces__msg__PositionReading * msg)
{
  if (!msg) {
    return;
  }
  // x_cart_m
}

bool
cartpole_interfaces__msg__PositionReading__are_equal(const cartpole_interfaces__msg__PositionReading * lhs, const cartpole_interfaces__msg__PositionReading * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_cart_m
  if (lhs->x_cart_m != rhs->x_cart_m) {
    return false;
  }
  return true;
}

bool
cartpole_interfaces__msg__PositionReading__copy(
  const cartpole_interfaces__msg__PositionReading * input,
  cartpole_interfaces__msg__PositionReading * output)
{
  if (!input || !output) {
    return false;
  }
  // x_cart_m
  output->x_cart_m = input->x_cart_m;
  return true;
}

cartpole_interfaces__msg__PositionReading *
cartpole_interfaces__msg__PositionReading__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartpole_interfaces__msg__PositionReading * msg = (cartpole_interfaces__msg__PositionReading *)allocator.allocate(sizeof(cartpole_interfaces__msg__PositionReading), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartpole_interfaces__msg__PositionReading));
  bool success = cartpole_interfaces__msg__PositionReading__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartpole_interfaces__msg__PositionReading__destroy(cartpole_interfaces__msg__PositionReading * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartpole_interfaces__msg__PositionReading__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartpole_interfaces__msg__PositionReading__Sequence__init(cartpole_interfaces__msg__PositionReading__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartpole_interfaces__msg__PositionReading * data = NULL;

  if (size) {
    data = (cartpole_interfaces__msg__PositionReading *)allocator.zero_allocate(size, sizeof(cartpole_interfaces__msg__PositionReading), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartpole_interfaces__msg__PositionReading__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartpole_interfaces__msg__PositionReading__fini(&data[i - 1]);
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
cartpole_interfaces__msg__PositionReading__Sequence__fini(cartpole_interfaces__msg__PositionReading__Sequence * array)
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
      cartpole_interfaces__msg__PositionReading__fini(&array->data[i]);
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

cartpole_interfaces__msg__PositionReading__Sequence *
cartpole_interfaces__msg__PositionReading__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartpole_interfaces__msg__PositionReading__Sequence * array = (cartpole_interfaces__msg__PositionReading__Sequence *)allocator.allocate(sizeof(cartpole_interfaces__msg__PositionReading__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartpole_interfaces__msg__PositionReading__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartpole_interfaces__msg__PositionReading__Sequence__destroy(cartpole_interfaces__msg__PositionReading__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartpole_interfaces__msg__PositionReading__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartpole_interfaces__msg__PositionReading__Sequence__are_equal(const cartpole_interfaces__msg__PositionReading__Sequence * lhs, const cartpole_interfaces__msg__PositionReading__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartpole_interfaces__msg__PositionReading__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartpole_interfaces__msg__PositionReading__Sequence__copy(
  const cartpole_interfaces__msg__PositionReading__Sequence * input,
  cartpole_interfaces__msg__PositionReading__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartpole_interfaces__msg__PositionReading);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cartpole_interfaces__msg__PositionReading * data =
      (cartpole_interfaces__msg__PositionReading *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartpole_interfaces__msg__PositionReading__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cartpole_interfaces__msg__PositionReading__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cartpole_interfaces__msg__PositionReading__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
