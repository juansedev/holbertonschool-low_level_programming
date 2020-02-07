#include <stdlib.h>
#include <stdio.h>

/**
 * main - the function main use printf to print numbers
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

