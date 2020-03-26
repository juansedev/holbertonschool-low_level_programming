#include "holberton.h"
/**
 * _pow - function to do a pow
 * @base: base of potency
 * @power: exponent
 *
 * Return: value of potency
 */
unsigned int _pow(int base, unsigned int power)
{
	unsigned int result = 1, i;

	for (i = 0; i < power; i++)
	{
		result = result * base;
	}

	return (result);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: Value in decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int lenght = 0, decimal = 0;
	int i;

	if (b == '\0')
		return (0);

	while (b[lenght])
	{
		if (b[lenght] != '1' && b[lenght] != '0')
		{
			return (0);
		}
		lenght++;
	}

	i = lenght - 1;
	lenght = 0;
	for ( ; i >= 0; --i)
	{
		if (b[i] == '1')
		{
			decimal = decimal + _pow(2, lenght);
		}
		lenght++;
	}
	return (decimal);
}
