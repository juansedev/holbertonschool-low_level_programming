#include "holberton.h"

/**
 * print_last_digit - Print the last digif of a number
 * @n: The number to be cheked
 * Return: Datatype Int, return the last digit of a inout number
 */
int print_last_digit(int n)
{
	int last = 0;

	if (n > 0)
	{
		last = n % 10;
	} else if (n < 0)
	{
		n = n * -1;
		last = n % 10;
	} else
		last = 0;
	_putchar(last + '0');

	return (last);
}
