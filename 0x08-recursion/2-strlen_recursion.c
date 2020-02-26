#include "holberton.h"
/**
 * _strlen_recursion - function that print lenght a string
 * @s: string to print recursively
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s == '\0')
	{
		return (0);
	}
	lenght = 1 + _strlen_recursion((s + 1));
	return (lenght);
}
