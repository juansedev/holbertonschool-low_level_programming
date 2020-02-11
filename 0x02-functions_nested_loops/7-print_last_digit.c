#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - Print the last digif of a number
 * @n: The number to be cheked
 * Return: Datatype Int, return the last digit of a inout number
 */
int print_last_digit(int n)
{
	int last = 0;
	int neg = -1;
	printf("%d\n",n);
	if (n > 0)
	{
		last = n % 10;
	} else if (n < 0)
	{
		if (n == -2147483648)
			n = n + 1;
		n = (n * neg);
		printf("%d\n",n);
		last = n % 10;
	} else
		last = 0;
	_putchar(last + '0');
	_putchar('\n');
	return (last);
}
