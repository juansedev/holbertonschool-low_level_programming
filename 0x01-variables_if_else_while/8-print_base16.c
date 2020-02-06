#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the function main prints all alphabet
 *
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; ++n)
	{
		putchar(n);
	}
	for (n = 97; n <= 102; ++n)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

