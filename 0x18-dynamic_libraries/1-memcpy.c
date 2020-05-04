#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest: memory area to overwrite
 * @src: string to overwrite on dest
 * @n: numbers of bytes from memory area
 * Return: char dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cont = 0;

	while (cont < n)
	{
		dest[cont] = src[cont];
		cont++;
	}
	return (dest);
}
