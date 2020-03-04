#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 * @s: pointer to String
 * Return: Nothing
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * str_concat - function that concatenates two strings.
 * @s1: char to concatenate
 * @s2: char to concatenate
 *
 * Return: pointer to char
 */

char *str_concat(char *s1, char *s2)
{
	char *str, lenght = 0, lenght1 = 0, lenght2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lenght1 = _strlen(s1);
	lenght2 = _strlen(s2);
	lenght = lenght1 + _strlen(s2) + 1;
	str = malloc(lenght * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < lenght1; i++)
		*(str + i) = *(s1 + i);

	for (i = 0; i <= lenght2; i++)
		*(str + i + lenght1) = *(s2 + i);

	return (str);
}
