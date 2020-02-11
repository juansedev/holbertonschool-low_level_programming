#include "holberton.h"
#include <stdio.h>
/**
 * jack_bauer -  asdsadas
 * Description: asdsad
 * Return: Void
 */

void jack_bauer(void)
{
	int dh;
	int mh;
	int dm;
	int mm;
	int stop = 57;

	for (dh = 48 ; dh <= 50; ++dh)
	{
		for (mh = 48 ; mh <= stop ; ++mh)
		{
			if (dh <= 49)
			{
				stop = 57;
			} else
				stop = 51;

			for (dm = 48 ; dm <= 53 ; ++dm)
			{
				for (mm = 48 ; mm <= 57 ; ++mm)
				{
					_putchar(dh);
					_putchar(mh);
					_putchar(58);
					_putchar(dm);
					_putchar(mm);
					_putchar('\n');
				}
			}
		}
	}
}
