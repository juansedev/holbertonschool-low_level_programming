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

	for (n = 97; n <= 122; ++n)
	{
		if (n == 101 || n == 113)
		{
			++n;
		}
		else
			putchar(n);
	}
	putchar('\n');
	return (0);
}

