#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the function main print the last digit of the number stored in
 * the variable n.
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;
	int len;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	len = n % 10;
	if (len > 5)
		printf("Last digit of %d is and is greater than 5\n", n);
	else if (n < 6)
		printf("Last digit of %d is and is greater than 6 \n", n);
		else
		printf("Last digit of %d is and is greater is zero\n", n);
	return (0);
}

