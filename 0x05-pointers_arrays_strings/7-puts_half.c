#include "holberton.h"
/**
 * puts_half - print elve numbers
 * @str: pointer to string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len = 0, i = 0, st;

	while (*(str + len) != '\0')
	{
		len++;
	}

	st = ((len - 1) / 2) + 1;

	for (i = st; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');

}
