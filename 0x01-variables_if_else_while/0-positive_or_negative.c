#include <stdlib.h>
#include <time.h>

/*
 *In the function main be  generates a random number  a validate
 *if this number is positive, negative o zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf(" %d is positive", n);
	else if (n < 0)
		printf(" %d is negative", n);
		else
			printf(" %d is zero", n);
	return (0);
}

