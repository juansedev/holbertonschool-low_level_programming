#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: pointer to String
 * Return: Nothing
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * rev_string - reverse the string
 * @s: pointer to char
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0, swap = 0, i = 0, fn = 0;

	len = _strlen(s);
	if (len > 0)
	{
		for (i = 0; i < ((len) / 2); i++)
		{
			swap = *(s + i);
			fn = (len - 1) - i;
			*(s + i) = *(s + fn);
			*(s + fn) = swap;
		}
	}
}
