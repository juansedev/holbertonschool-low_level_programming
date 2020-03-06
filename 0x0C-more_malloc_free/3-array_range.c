#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: min value to store on memory
 * @max: max value to store one memory
 *
 * Return: pointer to int
 */
int *array_range(int min, int max)
{
	int *s, n, i;

	if (min > max)
		return (NULL);
	n = (max - min) + 1;
	s = malloc(n * (sizeof(int)));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}
