#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @a: char to code
 * Return: a
 */

char *leet(char *a)
{
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0, j = 0;


	while (a[i])
	{
		for (j = 0; letters[j]; j++)
		{
			if (a[i] == letters[j])
				a[i] = numbers[j];
		}
		i++;
	}

	return (a);
}
