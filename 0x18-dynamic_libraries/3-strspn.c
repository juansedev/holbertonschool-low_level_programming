#include "holberton.h"

/**
 * _strspn - function
 * @s: first string
 * @accept: second string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, stop;

	for (i = 0; *(s + i + 1) ; i++)
	{
		stop = 1;
		for (j = 0; *(accept + j + 1); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				stop = 0;
				break;
			}
		}
		if (stop == 1)
			break;
	}
	return (i);
}
