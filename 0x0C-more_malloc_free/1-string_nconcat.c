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
	unsigned int lenght = 0, len_1 = 0, len_2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_1 = _strlen(s1);
	len_2 = _strlen(s2);

	if (n >= len_2)
		n = len_2;
	lenght = len_1 + n;

	p = malloc((lenght + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len_1; i++)
	{
		*(p + i) = *(s1 + i);
	}
	for (j = 0; j < n; j++)
	{
		*(p + len_1 + j) = *(s2 + j);
	}
	*(p + len_1 + j) = '\0';
	return (p);
}
