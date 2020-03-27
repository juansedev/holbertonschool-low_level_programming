#include "holberton.h"
/**
 * binary_recursion - Function to print decimal in binart format
 * without thhe first zero
 * @n: Value decimal to print in binary
 *
 * Return: void
 */
void binary_recursion(unsigned long n)
{
	if (n == 0)
	{
		return;
	}

	binary_recursion(n >> 1);
	_putchar((n & 1) + '0');
}
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: Value decimal to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	binary_recursion(n);
}
