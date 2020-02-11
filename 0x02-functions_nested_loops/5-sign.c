#include "holberton.h"
/**
 * print_sing - validate if a argument(@n) is negative, postive o zero
 *
 * Return - (1),(-1) or (0) according to the sign of the argument @n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar(45);
	}
	else
	{
		return (0);
		_putchar(48);
	}
}
