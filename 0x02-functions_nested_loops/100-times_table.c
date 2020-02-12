#include "holberton.h"
/**
 * print_times_table - perform the multiplication of the first 9 digits
 * @n: Number indicate columns and rows
 * Description: entry
 * Return: Void
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n > 0 && n <= 15)
	{
		for (i = 0 ; i <= n; ++i)
		{
			for (j = 0 ; j <= n; ++j)
			{
				print_no_zero(i * j, j, n);
			}
			_putchar('\n');
		}
	}
}

/**
 * print_no_zero - No print tens  when is equal to '0'
 * @n: Number to ( i * j )
 * @col_act: Actual numbers columns
 * @limit: max value to columns
 * Return: Void
 */

void print_no_zero(int n, int col_act, int limit)
{
	int units, tens, hundreds;

	hundreds = n / 100;
	tens =  (n % 100) / 10;
	units = n % 10;

	if (n > 99)
	{
		if (col_act > 0)
			_putchar(32);
		_putchar(hundreds + '0');
		_putchar(tens + '0');
		_putchar(units + '0');
	}
	if ((n > 9) && (n <= 99))
	{
		if (col_act > 0)
		{
			_putchar(32);
			_putchar(32);
		}
		_putchar(tens + '0');
		_putchar(units + '0');
	}
	if (n <= 9)
	{
		if (col_act > 0)
		{
			_putchar(32);
			_putchar(32);
			_putchar(32);
		}
		_putchar(units + '0');
	}
	if (col_act < limit)
	{
		_putchar(44);
	}
}
