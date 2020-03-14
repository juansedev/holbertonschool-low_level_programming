#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n:  number of arguments to input a variadic function
 *
 * Return: Result of sum all number
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, res = 0;
	va_list list;

	if (n == 0)
	{
		va_end(list);
		return (0);
	}

	va_start(list, n);
	for (i = 0; (unsigned int)i < n; i++)
	{
		res = res + va_arg(list, int);
	}
	va_end(list);

	return (res);
}
