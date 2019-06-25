/*
 * cpp_new.cpp
 *
 *  Created on: 2019年6月21日
 *      Author: nxf07890
 */

#include "FreeRTOS.h"

void *operator new(size_t count)
{
  return pvPortMalloc(count);
}

void *operator new[](size_t count)
{
  return pvPortMalloc(count);
}

void operator delete(void *ptr)
{
  vPortFree(ptr);
}

void operator delete(void *ptr, size_t)
{
  operator delete(ptr);
}

void operator delete[](void *ptr)
{
  vPortFree(ptr);
}

void operator delete[](void *ptr, size_t)
{
  operator delete[](ptr);
}
