#include "holberton.h"

/**
 * reverse_array - Reverse the content of an array of integers
 * @a: array of integers
 * @n: size of array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, tmp = 0;

	n--;
	for ( ; i < n; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
