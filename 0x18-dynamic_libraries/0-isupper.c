#include "holberton.h"
/**
 * _isupper - Checked if a character is a upper character
 * @c: Value in ascii to be cheke
 * Return: (1) if c is upper (0) otherwise
 */

int _isupper(int c)
{
	int upper, i;

	i = 65;
	while (i <= 90)
	{
		if (c == i)
		{
			upper = 1;
			break;
		}
		upper = 0;
		i++;
	}
	return (upper);
}
