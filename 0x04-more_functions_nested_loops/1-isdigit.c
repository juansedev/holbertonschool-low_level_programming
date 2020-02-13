#include "holberton.h"
/**
 * _isdigit - Checked if a character is a digit character
 * @c: Value in ascii to be cheke
 * Return: (1) if c is a digit (0) otherwise
 */

int _isdigit(int c)
{
	int digit, i;

	i = 48;
	while (i <= 57)
	{
		if (c == i)
		{
			digit = 1;
			break;
		}
		digit = 0;
		i++;
	}
	return (digit);
}
