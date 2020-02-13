#include "holberton.h"
/**
 * print_most_numbers - print the numbers
 *
 * Return: Void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		_putchar(i);
	}
	_putchar('\n');
}
