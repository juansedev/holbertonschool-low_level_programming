#include "holberton.h"
/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 * @x: number base
 * @y: number xponent
 * Return: Value of potentiation
 */
int _pow_recursion(int x, int y)
{
	int result = 0;

	if (y > 0)
	{
		result = x * _pow_recursion(x, y - 1);
	} else
		if (y < 0)
			return (-1);
		else
			return (1);

	return (result);
}
