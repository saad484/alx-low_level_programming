#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
char *char_ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
char_ptr = (char *)ptr;
for (i = 0; i < (nmemb * size); i++)
char_ptr[i] = 0;
return (ptr);
}
