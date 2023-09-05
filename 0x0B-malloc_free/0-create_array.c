#include "main.h"
#include <stddef.h>
#include<stdlib.h>
/**
* create_array - return an array with given char
* @size: the size of the array
* @c: the charchater
* Return: Array
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
{
return (NULL);
}
array = (char *)malloc(sizeof(char) * size);
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
