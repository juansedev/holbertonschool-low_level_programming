#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: count
 * @argv: array
 *
 * Return: Always 0
 **/
int main(int argc, char *argv[])
{
	int values[] = {25, 10, 5, 2, 1}, i, j, result = 0, n;

	if (argc == 2 && atoi(argv[1]) >= 48 && atoi(argv[1]) <=  57)
	{
		n = atoi(argv[1]);
		for (i = 0; i < 5; i++)
		{
			if (n < 0)
			{
				printf("0");
				return (0);
			}
			if (n == 0)
			{
				printf("%d\n", result);
				return (0);
			}
			if (values[i] <= n)
			{
				result += n / values[i];
				n = abs(n - (values[i] * result));
			}
			for (j = 0; j < 5; j++)
			{
				if (n == values[j])
				{
					result += 1;
					n = 0;
				}
			}
		}
		printf("%d\n", result);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
