#include "holberton.h"

/**
 * _strchr - Write a function that locates a character in a string
 * @s: string to perform search
 * @c: char to search
 * Return: char s
 */

char *_strchr(char *s, char c)
{
	int size_l = 0, i = 0;
	char *p;

	while (s[i])
		i++;

	if (i > 0)
	{
		for (size_l = 0; size_l <= i;)
		{
			if (c == s[size_l])
			{
				p = s + size_l;
				break;
			}
			p = 0;
			size_l++;
		}
	} else
		p = 0;
	return (p);
}
