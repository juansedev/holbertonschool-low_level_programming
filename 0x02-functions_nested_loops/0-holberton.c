#include "holberton.h"

/**
 * main - Entry point
 * Desc: Entry
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i = 0;
	char out[9] = {72, 111, 108, 98, 101, 114, 116, 111, 110};

	for (i = 0; i <= 8; ++i)
	{
		_putchar(out[i]);
	}
	_putchar('\n');
	return (0);
}
