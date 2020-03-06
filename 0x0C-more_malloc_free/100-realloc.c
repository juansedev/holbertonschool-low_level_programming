#include "holberton.h"
#include <stdlib.h>
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
/**
 * _realloc -  function that reallocates a memory block using malloc and free
 * @ptr:pointer to the memory previously allocated with a call to
 * malloc: malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to address reallocate
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (p);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		_memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}
