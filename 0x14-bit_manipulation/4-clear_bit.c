#include "holberton.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: Value decimal to print in binary
 * @index:  is the index, starting from 0 of the bit you want to get
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int index_slide;

	if (index >= sizeof(unsigned int) * sizeof(long))
	{
		return (-1);
	}

	index_slide = ~(1 << index);
	*n = *n & index_slide;
	return (1);
}
