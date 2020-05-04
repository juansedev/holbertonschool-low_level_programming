#include "holberton.h"
/**
 * _atoi - Function that convert strin to int
 * @arr: String to convert to int
 *
 * Return: Value of converted number
 */
int _atoi(char *arr)
{
	int i = 0, convert = 0;

	for (i = 0; arr[i] != '\0'; ++i)
	{
		convert = convert * 10 + arr[i] - '0';
	}

	return (convert);
}
