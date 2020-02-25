#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - unction that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array of int
 * @size: size of matrix
 * Return: Nothinga
 */
void print_diagsums(int *a, int size)
{
	int i, j, dg_r = 0, dg_l = 0, locate;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			locate = (i * size) + j;
			if (i == j)
				dg_r = dg_r + a[locate];

			if ((i + j) == (size - 1))
				dg_l = dg_l + a[locate];
		}
	}
	printf("%d, %d\n", dg_r, dg_l);

}
