#include "holberton.h"
/**
 * print_times_table - perform the multiplication of the first 9 digits
 * @n: Number indicate columns and rows
 * Description: entry
 * Return: Void
 */

void print_times_table(int n)
{
	int i, j, u, t, h;

	h = n / 100;
	t = (n % 100) / 10;
	u = n % 10;

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
 * @col_a: Actual numbers columns @hun: hundred  @ten: tens  @unit: unit  @n:
 * @limit: max value to columns
 * Return: Void
 */
void print_no_zero(int hun, int ten, int unit, int n, int col_a, int limit)
{
	if (n > 99)
	{
		if (col_a > 0)
			_putchar(32);
		_putchar(hun + '0');
		_putchar(ten + '0');
		_putchar(unit + '0');
	}
	if ((n > 9) && (n <= 99))
	{
		if (col_a > 0)
		{
			_putchar(32);
			_putchar(32);
		}
		_putchar(ten + '0');
		_putchar(unit + '0');
	}
	if (n <= 9)
	{
		if (col_a > 0)
		{
			_putchar(32);
			_putchar(32);
			_putchar(32);
		}
		_putchar(unit + '0');
	}
	if (col_a < limit)
		_putchar(44);
}
