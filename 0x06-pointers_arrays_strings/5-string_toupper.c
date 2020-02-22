#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to upeercase
 * @a: char
 * Return: char
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
