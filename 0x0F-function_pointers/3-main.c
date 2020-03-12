#include "3-calc.h"
/**
 * main - Entry point
 * @argc: lenght of the input arguments
 * @argv: array of char with arguments
 *
 * Return: (0) Exit successfully
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc == 4)
	{
		res = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", res);
	} else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
