#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: This is a name to printf
 * @f: pointer to function that prints a name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
