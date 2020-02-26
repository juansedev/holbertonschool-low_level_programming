#include "holberton.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string to print recursively
 * Return: void
 */

void _puts_recursion(char *s)
{
	char *tmp;

	tmp = s;
	if (*tmp == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*tmp);
	_puts_recursion(tmp + 1);
}
