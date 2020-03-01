#include "holberton.h"
#include <stdio.h>
/**
  * main - Program that prints the number of arguments passed into it.
  * @argc: count
  * @argv: array
  *
  * Return: Always 0
  **/
int main(int argc, char **argv)
{
	int i;
	(void) argv;

	for (i = 0; i < argc - 1;)
	{
		i++;
	}
	printf("%d \n", i);

	return (0);
}
