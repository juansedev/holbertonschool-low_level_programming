#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings- function that prints numbers, followed by a new line.
 * @separator: pointed to char prints between numbers
 * @n:  number of arguments to input a variadic function
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == 0)
		{
			printf("(nil)");
		} else
		{
			printf("%s", str);
		}
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
