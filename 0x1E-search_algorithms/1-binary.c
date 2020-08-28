#include "search_algos.h"
/**
 * recursive_search - Search recursive .
 * @value: Is the value to search for
 * @start: Begin the array
 * @end: End the array
 * @array: Pointer to the first element of the array to search in
 *
 * Return: The first index where value is located, If value is not present
 *         in array or if array is NULL, your function must return -1
 */
int recursive_search(int value, int start, int end, int *array)
{
	int middle = 0, i = 0;

	middle = ((end - start) / 2) + start;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i != end)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}

	if (start == end && value != array[middle])
		return (-1);
	else if (value > array[middle])
		middle = recursive_search(value, middle + 1, end, array);
	else if (value < array[middle])
		middle = recursive_search(value, start, middle - 1, array);

	return (middle);
}

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: The first index where value is located, If value is not present
 *         in array or if array is NULL, your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = array[size - 1];

	if (!array)
		return (-1);

	return (recursive_search(value, start, end, array));
}
