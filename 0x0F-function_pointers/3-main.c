#include "3-calc.h"
/**
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc == 4)
	{
		res = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n",res);	
	} else
	{
		printf("Error\n");
		exit (98);
	}
	return (0);
}
