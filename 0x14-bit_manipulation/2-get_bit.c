#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: Value decimal to print in binary
 * @index:  is the index, starting from 0 of the bit you want to get
 *
 * Return: Value of the bit in the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int index_slide, validate;

	if (index >= sizeof(unsigned int) * sizeof(long))
	{
		return (-1);
	}

	/* Deslizamos hacia la derecha un bit set en 1 index veces */
	index_slide = 1 << index;
	/* Se realiza una and entre nuestra nueva variable y n */
	validate = n & index_slide;
	/* en el caso de que la comparación de estas dos variables */
	/* sea verdadera el valor del bit seleccionado es 1 de lo */
	/* contrario es 0 */
	if (index_slide == validate)
		return (1);
	return (0);
}
