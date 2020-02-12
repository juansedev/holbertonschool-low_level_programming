#include <stdlib.h>
#include <stdio.h>

/**
 * positive_or_negative - the function main be  generates a random number
 * a validate
 * @n: Number to be cheked
 * Return: Always 0 (Sucess)
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
		else
		printf("%d is zero\n", n);
	return (0);
}

