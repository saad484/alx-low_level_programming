#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: A pointer to the previously allocated memory.
 * @old_size: The old size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the reallocated memory block.
 * If new_size == old_size, do nothing and return ptr.
 * If ptr is NULL, equivalent to malloc(new_size).
 * If new_size is equal to zero, equivalent to free(ptr), and return NULL.
 * If malloc fails, return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
void *new_ptr;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
if (new_size < old_size)
old_size = new_size;
for (i = 0; i < old_size; i++)
((char *)new_ptr)[i] = ((char *)ptr)[i];
free(ptr);
return (new_ptr);
}
