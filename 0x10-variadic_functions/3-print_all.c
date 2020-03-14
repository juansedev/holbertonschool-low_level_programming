#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * fn_char - function prints an argument in char format
 * @l: value of va_list to prints
 *
 * Return: Void
 */
void fn_char(va_list l)
{
	printf("%c", va_arg(l, int));
}
/**
 * fn_int - function prints an argument in int format
 * @l: value of va_list to prints
 *
 * Return: Void
 */
void fn_int(va_list l)
{
	printf("%d", va_arg(l, int));
}
/**
 * fn_float - function prints an argument in float format
 * @l: value of va_list to prints
 *
 * Return: Void
 */
void fn_float(va_list l)
{
	printf("%f", va_arg(l, double));
}
/**
 * fn_string - function prints an argument in string format
 * @l: value of va_list to prints
 *
 * Return: Void
 */
void fn_string(va_list l)
{
	char *tmp;

	tmp = va_arg(l, char *);
	if (tmp == NULL)
		tmp = "(nil)";
	printf("%s", tmp);
}
/**
 * print_all - Function that returns pointer to funcion
 * @format: pointer to char with operator to validate
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	fmt_a fms[] = {
		{"c", fn_char},
		{"i", fn_int},
		{"s", fn_string},
		{"f", fn_float},
		{NULL, NULL}
	};
	int i, j;
	va_list list;
	char *sep = "";

	i = 0;
	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (fms[j].inp_fmt != NULL)
		{
			if (fms[j].inp_fmt[0] == format[i])
			{
				printf("%s", sep);
				fms[j].f(list);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
