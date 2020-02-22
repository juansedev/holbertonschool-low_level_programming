#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string.
 * @a: char to capitalizes
 * Return: char*
 */

char *cap_string(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] == ',' || a[i] == ';' || a[i] == '.' ||
			a[i] == '!' || a[i] == '?' || a[i] == '"' ||
			a[i] == '(' || a[i] == ')' || a[i] == '{' ||
			a[i] == '}' || a[i] == 32)
		{
			if (a[i + 1] >= 97  && a[i + 1] <= 122)
				*(a + i + 1) = *(a + i + 1) - 32;
			else
				a[i + 1] = a[i + 1];
		}

		i++;
	}

	return (a);
}
