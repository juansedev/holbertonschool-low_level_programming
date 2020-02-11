#include "holberton.h"
/**
 * print_alphabet 10 times invoke function print_alphabet
 *
 * Return - void
 */
void print_alphabet_x10(void)
{
	int cont = 0;
	int i = 0;

	for (i = 0; i <= 9; ++i)
	{
		for (cont = 97; cont <= 122; ++cont)
		{
			_putchar(cont);
		}
		cont = 97;
		_putchar('\n');
	}
}
