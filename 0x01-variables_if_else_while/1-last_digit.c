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
		printf("Last digit of %d is %d and is greater than 5\n", n, len);
	else if (n < 6 && n > 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, len);
		else
		printf("Last digit of %d is %d\n", n, len);
	return (0);
}

