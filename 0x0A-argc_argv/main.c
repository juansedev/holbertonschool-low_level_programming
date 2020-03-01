#include <stdio.h>

/**
 * main - Program that prints its name
 * @argc: count
 * @argv: array
 *
 * Return: Always 0
 **/

int main()
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar(48);
	}
	putchar('\n');
	return (0);
}
