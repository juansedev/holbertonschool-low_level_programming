#include "holberton.h"
/**
 * _strcmp - function that compares a string
 * @s1: char to compare
 * @s2: char to compare
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	for ( ; *(s1 + i) != '\n' ; i++)
	{
		if (&s1 == &s2  || i > 509)
		{
			diff = 0;
			break;
		}
		diff = s1[i] - s2[i];
		if (diff != 0)
			break;
	}
	return (diff);
}
