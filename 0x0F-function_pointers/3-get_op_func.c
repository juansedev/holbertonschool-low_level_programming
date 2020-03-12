#include "3-calc.h"
/**
 * get_op_func - Function that returns pointer to funcion
 * @s: pointer to char with operator to validate
 *
 * Return: Addres to a function to do the arithmetic operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 5)
	{
		if (*ops[i].op == *s && s[1] == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
