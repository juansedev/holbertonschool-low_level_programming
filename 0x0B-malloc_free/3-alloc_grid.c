#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of matrix
 * @height: height of matrix
 *
 * Return: pointer to pointer to int
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(height * sizeof(int *));
	for (i = 0; i < width; i++)
		array[i] = (int *)malloc(width * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
