#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings since n.
 * @dest: string to destiny
 * @src: string to source
 * @n: value to n
 * Return: Return a concatenate string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, lenghtd = 0;

	while (*(dest + lenghtd) != '\0')
		lenghtd++;
	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + lenghtd) = *(src + i);
		lenghtd++;
	}
	return (dest);
}
