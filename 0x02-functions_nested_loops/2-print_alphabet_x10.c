#include "holberton.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet inside the loop
 * Description:
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
