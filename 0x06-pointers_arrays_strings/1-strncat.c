#include "holberton.h"
/**
 * _strncat - concatenates two strings since n.
 * @dest: string to destiny
 * @src: string to source
 * @a: value max to copy
 * @n: value to n
 * Return: Return a concatenate string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, lenghtd = 0, lenghts = 0;

	while (*(dest + lenghtd) != '\0')
		lenghtd++;
	while (*(src + lenghts) != '\0')
		lenghts++;
	if (n > lenghts)
	{
		n = lenghts;
		for (i = 0; *(src + i) != '\0'; i++)
		{
			*(dest + lenghtd) = *(src + i);
			lenghtd++;
		}
		*(dest + lenghtd) = *(src + i);
	}
	return (dest);
}
