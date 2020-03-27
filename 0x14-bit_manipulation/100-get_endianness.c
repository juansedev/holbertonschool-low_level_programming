#include "holberton.h"
/**
 * get_endianness - get the endiannes of the arch
 * Description: get the endiannes of the arch
 * section header: the header of this function is holberton.h
 * Return: 1 in little indian - 0 in big indian.
 */

int get_endianness(void)
{
	unsigned int number = 1;
	char *cha = (char *)&number;

	if (*cha)
		return (1);
	return (0);
}
