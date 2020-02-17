#include "holberton.h"

/**
 * print_diagonal - print diagonal signal
 * @n: value to create matriz
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i > j)
					putchar('\\');
			} 
				_putchar('\n');
		}
	}
	else
		_putchar('\n');
}