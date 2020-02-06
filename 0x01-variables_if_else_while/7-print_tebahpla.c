#include <stdlib.h>
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

	for (n = 122; n >= 97; --n)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

