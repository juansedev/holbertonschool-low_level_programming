#include <stdlib.h>
#include <stdio.h>

/**
 * main - in this code you can view la combination de los first 900 numbers
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int c;
	int d = 49;
	int u = 50;

	for (c = 48; c <= 55; ++c)
	{
		for (d = c + 1; d <= 56; ++d)
		{
			for (u = 50; u <= 57; ++u)
			{
				if ( d != u)
				{
					putchar(c);
					putchar(d);
					putchar(u);
				}
				if (c != 55 || d != 56 || u != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

