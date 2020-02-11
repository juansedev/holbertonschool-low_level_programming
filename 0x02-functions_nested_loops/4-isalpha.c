#include "holberton.h"
/**
 * _isalpha - Validate if a character belongs to the alphabet either
 * uppercase or lowercase
 * Returns - 1 when the input argument is uppercase or lowercase
 *           0 in other case
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
