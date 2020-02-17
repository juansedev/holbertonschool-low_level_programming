#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: value one to swap
 * @b: value two to swap
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
