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
 * print_rev - prints to string in reverse
 * @str: Strin to print
 * Return: Nothing
 */
void print_rev(char *str)
{
	int i = 0, strln = 0;

	strln = _strlen(str);
	for (i = (strln - 1); i >= 0; i--)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
