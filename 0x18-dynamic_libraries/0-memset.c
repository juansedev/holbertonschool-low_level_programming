#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: address begin to fill
 * @b: value to set on memory
 * @n: numbers of bytes to pointed by s
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cont = 0;

	while (cont < n)
	{
		*(s + cont) = b;
		cont++;
	}
	return (s);
}
