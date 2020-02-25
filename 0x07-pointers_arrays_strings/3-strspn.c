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

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if(*(s + i) == *(accept + j))
			{
				stop = 0;
				break;
			}else 
				stop = 1;
		}
		if (stop == 1)
			break;
	}
	return (i);
}
