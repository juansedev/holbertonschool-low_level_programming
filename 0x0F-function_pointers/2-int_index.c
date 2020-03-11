#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: pointed to array of int
 * @size: lenght of input array
 * @cmp: point to function that compares the numbers
 *
 * Return: position of integer on array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, found_it = 0;

	if (array || cmp)
	{
		while (i < size)
		{
			if (!(found_it > 0))
			{
				found_it = cmp(array[i]);
			} else
				break;
			i++;
		}
		if (found_it == 0 || size <= 0)
			return (-1);
		if (found_it > 0)
		{
			i -= 1;
			return (i);
		}
	}
	return (-1);
}
