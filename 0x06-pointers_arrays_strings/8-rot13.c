#include "holberton.h"
/**
 * rot13 - encodes a string into rot13
 * @a: char to code
 * Return: a
 */

char *rot13(char *a)
{
	int i = 0, j = 0;
	char st_rot[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_st[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (a[i])
	{
		for (j = 0; st_rot[j]; j++)
		{

			if (a[i] == st_rot[j])
			{
				a[i] = rot_st[j];
				break;
			}
		}
		i++;
	}

	return (a);
}
