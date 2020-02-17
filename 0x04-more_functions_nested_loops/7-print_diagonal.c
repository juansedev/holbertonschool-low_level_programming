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
<<<<<<< HEAD
<<<<<<< HEAD
					putchar('\\');
			} 
				_putchar('\n');
=======
=======
>>>>>>> 392d491848f636c4e835156c05c1cfd685354ece
					_putchar(32);
				if (i == j)
					_putchar('\\');
			}
			_putchar('\n');
>>>>>>> 392d491848f636c4e835156c05c1cfd685354ece
		}
	}
	else
		_putchar('\n');
}
