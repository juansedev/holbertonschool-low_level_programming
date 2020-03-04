#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup -function returns a pointer to a new string which is a
 * duplicate of the string str
 * @str: char to store
 *
 * Return: pointer to char
 */

char *_strdup(char *str)
{
	unsigned int i, lenght = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i); i++)
		lenght++;
	lenght++;
	p = malloc(lenght * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < lenght; i++)
	{
		*(p + i) = *(str + i);
	}
	*(p + i) = '\0';
	return (p);
}
