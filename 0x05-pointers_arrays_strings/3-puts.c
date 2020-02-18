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
 * _puts - prints to string
 * @str: Strin to print
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0, strln = 0;

	strln = _strlen(str);
	for ( ; i <= strln; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
