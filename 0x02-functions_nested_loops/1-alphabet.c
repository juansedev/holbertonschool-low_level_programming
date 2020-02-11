#include "holberton.h"
/**
 * print_alphabet -  this function print the alphabet
 * Descri: Entry
 * Return - void
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i <= 122; ++i)
	{
		_putchar(i);
	}
	_putchar('\n');
}
