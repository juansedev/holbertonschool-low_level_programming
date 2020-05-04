#include "holberton.h"
/**
 * _puts - prints to string
 * @str: Strin to print
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0, strln = 0;

	strln = _strlen(str);
	for ( ; i <= (strln - 1); i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
