#include "holberton.h"
/**
 * main - function main print the word holberton
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i = 0;
	char out[9] = "Holberton";
	for (i = 0; i <= 8; ++i)
	{
		_putchar(out[i]);
	}
	_putchar('\n');
	return (0);
}
