// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartpole_interfaces:msg/TorqueCommand.idl
// generated code does not contain a copyright notice
#include "cartpole_interfaces/msg/detail/torque_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
cartpole_interfaces__msg__TorqueCommand__init(cartpole_interfaces__msg__TorqueCommand * msg)
{
  if (!msg) {
    return false;
  }
  // torque_nm
  return true;
}

void
cartpole_interfaces__msg__TorqueCommand__fini(cartpole_interfaces__msg__TorqueCommand * msg)
{
  if (!msg) {
    return;
  }
  // torque_nm
}

bool
cartpole_interfaces__msg__TorqueCommand__are_equal(const cartpole_interfaces__msg__TorqueCommand * lhs, const cartpole_interfaces__msg__TorqueCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // torque_nm
  if (lhs->torque_nm != rhs->torque_nm) {
    return false;
  }
  return true;
}

bool
cartpole_interfaces__msg__TorqueCommand__copy(
  const cartpole_interfaces__msg__TorqueCommand * input,
  cartpole_interfaces__msg__TorqueCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // torque_nm
  output->torque_nm = input->torque_nm;
  return true;
}

cartpole_interfaces__msg__TorqueCommand *
cartpole_interfaces__msg__TorqueCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartpole_interfaces__msg__TorqueCommand * msg = (cartpole_interfaces__msg__TorqueCommand *)allocator.allocate(sizeof(cartpole_interfaces__msg__TorqueCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartpole_interfaces__msg__TorqueCommand));
  bool success = cartpole_interfaces__msg__TorqueCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartpole_interfaces__msg__TorqueCommand__destroy(cartpole_interfaces__msg__TorqueCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartpole_interfaces__msg__TorqueCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartpole_interfaces__msg__TorqueCommand__Sequence__init(cartpole_interfaces__msg__TorqueCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartpole_interfaces__msg__TorqueCommand * data = NULL;

  if (size) {
    data = (cartpole_interfaces__msg__TorqueCommand *)allocator.zero_allocate(size, sizeof(cartpole_interfaces__msg__TorqueCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartpole_interfaces__msg__TorqueCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartpole_interfaces__msg__TorqueCommand__fini(&data[i - 1]);
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
cartpole_interfaces__msg__TorqueCommand__Sequence__fini(cartpole_interfaces__msg__TorqueCommand__Sequence * array)
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
      cartpole_interfaces__msg__TorqueCommand__fini(&array->data[i]);
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

cartpole_interfaces__msg__TorqueCommand__Sequence *
cartpole_interfaces__msg__TorqueCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartpole_interfaces__msg__TorqueCommand__Sequence * array = (cartpole_interfaces__msg__TorqueCommand__Sequence *)allocator.allocate(sizeof(cartpole_interfaces__msg__TorqueCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartpole_interfaces__msg__TorqueCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartpole_interfaces__msg__TorqueCommand__Sequence__destroy(cartpole_interfaces__msg__TorqueCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartpole_interfaces__msg__TorqueCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartpole_interfaces__msg__TorqueCommand__Sequence__are_equal(const cartpole_interfaces__msg__TorqueCommand__Sequence * lhs, const cartpole_interfaces__msg__TorqueCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartpole_interfaces__msg__TorqueCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartpole_interfaces__msg__TorqueCommand__Sequence__copy(
  const cartpole_interfaces__msg__TorqueCommand__Sequence * input,
  cartpole_interfaces__msg__TorqueCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartpole_interfaces__msg__TorqueCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cartpole_interfaces__msg__TorqueCommand * data =
      (cartpole_interfaces__msg__TorqueCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartpole_interfaces__msg__TorqueCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cartpole_interfaces__msg__TorqueCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cartpole_interfaces__msg__TorqueCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
