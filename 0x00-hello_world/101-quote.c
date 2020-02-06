#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sout = 1;
	int leng = 58;
	write(sout,  "and that piece of art is useful\" - Dora Korpar, 2015-10-19", leng);
	return (0);
}

