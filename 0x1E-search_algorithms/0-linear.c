#include "search.h"
#include <stdio.h>

/**
* linear_search - function search value form array
* using lineare search algorithm
*  @array: array to search form
*  @value: value to search for
*  @size: size of the array
*  Return: the fisrt index of the match value in the array
*/

int linear_search(int *array, size_t size, int value)
{
	size_t  i;
	int tmp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			tmp = array[i];

			printf("Value checked array[%lu] = [%d]\n", i, tmp);

			if (tmp == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
