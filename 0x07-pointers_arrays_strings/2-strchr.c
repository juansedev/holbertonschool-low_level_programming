#include "holberton.h"

/**
 * _strchr - Write a function that locates a character in a string
 * @s: string to perform search
 * @c: char to search
 * Return: char s
 */

char *_strchr(char *s, char c)
{
	int size_l = 0;

	while (s[size_l])
	{
		if (c == s[size_l])
		{
			s = s + size_l;
			break;
		}
		size_l++;
	}
	return (s);
}
