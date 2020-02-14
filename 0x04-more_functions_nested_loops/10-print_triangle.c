#include "holberton.h"
/**
 * print_triangle - prints a triangule of n size
 * @size: define the size of the matrix
 *
 * Return: Void
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if ((i + j) >= (size - 1))
					_putchar('#');
				else
					_putchar(32);
			}
			_putchar('\n');
		}
	} else
		if (size == 1)
			_putchar('#');
		else
			_putchar('\n');
}
