#include <stdio.h>

/**
 * main - add when i is multiples of 3 or 5
 *
 * Return: (0) Success
 */

int main(void)
{
	int i = 0;
	int add = 0;

	for ( ; i < 1024; ++i)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			add += i;
		}
	}
	printf("%d\n", add);

	return (0);
}
