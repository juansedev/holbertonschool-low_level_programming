#include "holberton.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to calculate the sqrt
 * Return: Value to sqrt
 */

int _sqrt_recursion(int n)
{
	int result = 0, iterator = 1;

	result = calculate_sqrt(n, iterator);
	if (result == -1)
		return (-1);
	else
		return (result);

}

int calculate_sqrt(int  n, int i)
{
	if (n / i == i && n % i == 0)
		return (i);
	else
		if (n / i < i)
			return (-1);
		else
		{
			i = calculate_sqrt(n, i + 1);
			return (i);

		}
}
