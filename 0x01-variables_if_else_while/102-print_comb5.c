#include <stdlib.h>
#include <stdio.h>

/**
 * main - in this code you can view la combination de los first 900 numbers
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int c = 48;
	int d = 48;
	int e = 48;
	int f = 48;

	for (c = 48; c <= 57; ++c)
	{
		for (d = 48; d <= 57; ++d)
		{
			for (e = c; e <= 57; ++e)
			{
				for (f = d + 1; f <= 57; ++f)
				{
					putchar(c);
					putchar(d);
					putchar(32);
					putchar(e);
					putchar(f);
					if (c != 57 || d != 56 || e != 57 || f != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	return (0);
}
