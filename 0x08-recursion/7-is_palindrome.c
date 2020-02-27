#include "holberton.h"
/**
 * _strlen_recursion - function that print lenght a string
 * @s: string to print recursively
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s == '\0')
	{
		return (0);
	}
	lenght = 1 + _strlen_recursion((s + 1));
	return (lenght);
}

/**
 * _palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: string to validate
 * @start: begin the string
 * @size: finish the string
 * Return: 1 if string is palindrome , 0 otherwise
 */
int _palindrome(int start, int size, char *s)
{
	if (s[start] == s[size]  && start < size)
		return (1 * _palindrome(start + 1, size - 1, s));
	if (start <= size)
		return (1);
	else
		return (0);
}

/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: string to validate
 * Return: 1 if string is palindrome , 0 otherwise
 */
int is_palindrome(char *s)
{
	int lenght = 0;

	lenght = _strlen_recursion(s);
	return (_palindrome(0, lenght - 1, s));
}
