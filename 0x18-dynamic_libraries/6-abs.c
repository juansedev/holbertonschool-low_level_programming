#include "holberton.h"
/**
 * _abs - Generate absolute of a number
 * @n: The number to be cheked
 * Return: absolute value for input number
 */
int _abs(int n)
{
	int neg = (-1);

	if (n > 0)
		return (n);
	else if (n < 0)
	{
		n = n * neg;
		return (n);
	} else
		return (n);
}
