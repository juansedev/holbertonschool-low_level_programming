#include "holberton.h"

/**
 * _strcpy - function that copies the string pointed to
 * @dest: pointer to string entry data
 * @src: destiny data
 * Return: return value of dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (*(src + len) != '\0')
	{
		len++;
	}

	for (i = 0; i < (len - 1); i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = *(src + i);

	return (src);
}
