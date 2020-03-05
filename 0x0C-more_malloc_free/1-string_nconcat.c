#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string.
 * @s: pointer to String
 * Return: Nothing
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string to destiny to concat
 * @s2: string to source to concat
 * @n: amount of characters to copy from s1 to s2
 *
 * Return: pointer to address of new concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int lenght = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= _strlen(s2))
		n = _strlen(s2);
	lenght = _strlen(s1) + n;

	p = malloc(lenght * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < lenght; i++)
	{
		if (i < _strlen(s1))
			*(p + i) = *(s1 + i);
		else
			*(p + i) = *(s2 + i - (_strlen(s1)));
	}
	return (p);
}
