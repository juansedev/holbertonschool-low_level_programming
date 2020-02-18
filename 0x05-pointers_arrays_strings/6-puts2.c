#include "holberton.h"
/**
 * puts2 - print elve numbers
 * @str: pointer to string
 * Return: Nothing
 */

void puts2(char *str)
{
	int len = 0, i = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');

}
