#include <stdio.h>

/**
 * fibonacci - function recursive to calculate n fibonacci
 * @numero: numero to be generate serie
 * Return: numero
 */

long fibonacci(long numero)
{
	long a;

	if (numero == 0 || numero == 1)
	{
		return (numero);
	}
	else
	{
		a = (fibonacci(numero - 1) + fibonacci(numero - 2));
		return (a);
	}
}


/**
 * main - Entry point function fibonacci
 *
 * Return: (0) Succes
 */

int main(void)
{
	long resultado, num;

	num = 1;
	while (num < 50)
	{
		resultado = fibonacci(num);
		printf("%ld", resultado);
		if (num < 49)
		{
			printf(", ");
		}
		num++;
	}
	printf("\n");
	return (0);
}
