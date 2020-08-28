#include "search_algos.h"
/**
 * binary_search - search for a value in a array with o(logn)
 * @array: array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (recursive_search(0, size - 1, value, array));
}


/**
 * recursive_search - search by half
 * @start: starting point
 * @end: end point
 * @value: searched_value
 * @array: array array
 * Return: Nothing
 */
int recursive_search(int start, int end, int value, int *array)
{
	int middle = start + (end - start) / 2;

	_print(start, end, array);
	if (start == end && value != array[middle])
		return (-1);
	else if (value > array[middle])
	{
		middle = recursive_search(middle + 1, end, value, array);
	}
	else if (value < array[middle])
	{
		middle = recursive_search(start, middle - 1, value, array);
	}
	return (middle);
}


/**
 * _print - prints every try to find the value
 * @start: starting point
 * @end: end point
 * @array: array array
 * Return: Nothing
 */
void _print(int start, int end, int *array)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i != end)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
