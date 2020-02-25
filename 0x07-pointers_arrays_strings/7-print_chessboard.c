#include "holberton.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: array 2d to print
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < 8; i++)
	{
		for (; j < 8; j++)
		{
			_putchar(*(*(a + i) + j));
		}
		_putchar('\n');
	}
}
