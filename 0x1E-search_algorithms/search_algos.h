#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stddef.h>
#include <stdio.h>
#include <math.h>

/* prototypes of all your functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int _binary_search(int *array, size_t left, size_t right, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
