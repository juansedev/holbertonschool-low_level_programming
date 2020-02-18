#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 * @s: pointer to String
 * Return: Nothing
 */
int _strleni(int *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_array - prints n elements of an array of integers separated by comma,
 * followed by a space
 * @a: pointer to int
 * @n: Numbers of elements to be printed
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int len = 0, i = 0;

	len = _strleni(a);
	if (len >= n)
	{
		for ( ; i < n; i++)
		{
			printf("%d",*(a + i));
			if (i < (n - 1))
				printf(", ");
		}
	}
	printf("\n");
}
