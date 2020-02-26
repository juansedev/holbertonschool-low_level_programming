#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: number to calculate the factorial
 * Return: Result of factorial
 */
int factorial(int n)
{
	int result = 0;

	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	result = n * factorial(n - 1);
	return (result);
}
