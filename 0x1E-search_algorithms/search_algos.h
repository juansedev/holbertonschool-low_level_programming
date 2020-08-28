#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recursive_search(int value, int start, int end, int *array);

#endif /*_SEARCH_ALGOS_H_*/
