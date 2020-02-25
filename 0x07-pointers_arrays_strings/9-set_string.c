#include "holberton.h"
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: address of pointer
 * @to: address of value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
