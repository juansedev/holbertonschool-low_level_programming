#include "holberton.h"
#include <stdlib.h>
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
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: amount to values to store on memory
 * @size: number of bytes of datatype
 *
 * Return: Void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, size * nmemb);
	return (p);
}
