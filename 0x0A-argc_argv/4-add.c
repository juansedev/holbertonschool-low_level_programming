#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints the result adds positive numbers
 * @argc: count
 * @argv: array
 *
 * Return: Always 0
 **/
int main(int argc, char *argv[])
{
	int i, j, add = 0, stop;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(*(argv + i) + j); j++)
		{
			stop = 1;
			if (*(*(argv + i) + j) >= 48 && *(*(argv + i) + j) <= 57)
			{
				stop = 0;
			} else
			{
				printf("Error\n");
				return (1);
			}
		}

			if (stop == 0)
				add = add + atoi(*(argv + i));
	}
	printf("%d\n", add);
	return (0);
}
