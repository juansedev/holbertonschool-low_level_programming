#include "holberton.h"
/**
 * times_table - perform the multiplication of the first 9 digits
 * Description: entry
 * Return: Void
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 9; ++i)
	{
		for (j = 0 ; j <= 9; ++j)
		{
			print_no_zero(i * j, j);
		}
		_putchar('\n');
	}
}

/**
 * print_no_zero - No print tens  when is equal to '0'
 * @n: Number to cheked
 * @i: Number to indicate to multi
 * Return: Void
 */

void print_no_zero(int n, int i)
{
	int units, tens;

	tens = n / 10;
	units = n % 10;

	if (tens == 0)
	{
		if (i > 0)
		{
			_putchar(32);
			_putchar(32);
		}
		_putchar(units + '0');
		if (i < 9)
			_putchar(44);
	} else
	{
		if (i > 0)
			_putchar(32);
		_putchar(tens + '0');
		_putchar(units + '0');
		if (i < 9)
			_putchar(44);
	}
}
