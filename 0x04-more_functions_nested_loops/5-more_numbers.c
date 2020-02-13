#include "holberton.h"
/**
 * more_numbers - print the numbers
 *
 * Return: Void
 */

void more_numbers(void)
{
	int i = 0, j, tens, units;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			tens = j / 10;
			units = j % 10;
			if (tens > 0)
				_putchar(tens + '0');
			_putchar(units + '0');
			if (j == 14)
				_putchar('\n');
		}
		i++;
	}
}
