#include "holberton.h"
#include <stdio.h>
/**
  * main - Program that prints all arguments it receives.
  * @argc: count
  * @argv: array
  *
  * Return: Always 0
  **/
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%s\n", *(argv));
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
