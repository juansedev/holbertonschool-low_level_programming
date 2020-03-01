#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - Program that prints the result  that multiplies two numbers.
  * @argc: count
  * @argv: array
  *
  * Return: Always 0
  **/
int main(int argc, char *argv[])
{
	(void) argc;
	if (*(argv + 1) == '\0' || *(argv + 2) == '\0')
		printf("Error\n");
	else
		printf("%d\n", (atoi(*(argv + 1)) * atoi(*(argv + 2))));
	return (0);
}
