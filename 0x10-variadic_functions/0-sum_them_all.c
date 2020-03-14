#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n:  number of arguments to input a variadic function
 *
 * Return: Result of sum all number
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int res = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		res += va_arg(list, int);
	}
	va_end(list);

	return (res);
}
