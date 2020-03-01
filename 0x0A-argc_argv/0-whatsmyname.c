#include "holberton.h"
#include <stdio.h>
/**
  * main - Program that prints its name
  * @argc: count
  * @argv: array
  *
  * Return: Always 0
  **/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s",argv[i]);
	}
	printf("\n");
	return (0);
}
