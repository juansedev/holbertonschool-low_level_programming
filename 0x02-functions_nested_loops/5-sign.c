#include "holberton.h"
/**
 * print_sign - validate the sing of a number
 * Description: validate if a argument(@n) is negative, postive o zero
 * @n: The number to checked
 * Return: 1,-1 or 0 according to the sign of the argument @n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+' + 0);
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-' + 0);
		return (-1);
	}
	else
	{
		_putchar('0' + 0);
		return (0);
	}
}
