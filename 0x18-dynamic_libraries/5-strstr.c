#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - function 
 * @s: first string
 * @accept: second string
 * Return: unsigned int
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, stop1 = 1, mtp = 1, len = 0, finish = 0;
	char *tmp = NULL, *src = NULL, *dst = NULL;

	while (*(haystack + i))
	{
		*(src + i) = *(haystack + i);
		i++;
	}
	while (*(needle + j))
	{
		dst[j] = needle[j];
		j++;
	}

	while (needle[len])
		len++;
	printf("lenght of needle %d \n \n", len);
	for (i = 0; *(src + i); i++)
	{
		stop1 = 0;
		for (j = 0; j < len; j++)
		{
			if (src[i] == dst[j])
			{
				mtp++;
				stop1 *= 1;
			}else
				stop1 *= 0;
			if (stop1 == 0)
				break;
			else 
				if (mtp == len)
				{
					finish = 1;
					tmp = src + j;
				}
			printf("i: %d , j: %d, mtp: %d, stop: %d, finish: %d \n", i, j, mtp ,stop1, finish);
		}
		if(stop1 == 0)
			break;
		if (j > len - i)
			break;
		if ( finish == 1)
		{
			break;
		}
	}
	return (tmp);
}
