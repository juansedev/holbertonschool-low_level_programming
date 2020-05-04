#include "holberton.h"
/**
 * _strncpy - function that copies a string
 * @dest: string  to destiny
 * @src: string to source
 * @n: numbers to characters to copy
 * Return: *char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
