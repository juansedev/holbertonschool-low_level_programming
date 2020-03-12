#include "3-calc.h"
/**
 * op_add - function that adds two integers
 * @a: First argument
 * @b: Second argument
 *
 * Return: Value of operations
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that substracs two integers
 * @a: First argument
 * @b: Second argument
 *
 * Return: Value of operations
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that multiplicates two integers
 * @a: First argument
 * @b: Second argument
 *
 * Return: Value of operations
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divides two integers
 * @a: First argument
 * @b: Second argument
 *
 * Return: Value of operations
 */
int op_div(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function that return the module of two integers
 * @a: First argument
 * @b: Second argument
 *
 * Return: Value of operations
 */
int op_mod(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
