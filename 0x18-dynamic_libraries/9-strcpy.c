#include "holberton.h"
/**
 * _strcpy - function that copies the string pointed to
 * @dest: pointer to string entry data
 * @src: destiny data
 * Return: return value of dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (src != '\0')
	{
		for (i = 0;  *(src + i) != '\0'; i++)
		{
			*(dest + i) = *(src + i);
		}
	}

	*(dest + i) = '\0';
	return (dest);
}
