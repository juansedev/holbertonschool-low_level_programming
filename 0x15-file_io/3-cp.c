#include "holberton.h"
void print_error(int fd_current, char *message, int value_exit)
{
	if (fd_current < 0)
	{
		dprintf(STDERR_FILENO, message);
		exit(value_exit);
	} else
	{
		dprintf(STDERR_FILENO, message, fd_current);
		exit(value_exit);
	}

}

void val_file_des(int fd_current, char *message, int val_exit, char *arg)
{
	if (fd_current < 0)
	{
		dprintf(STDERR_FILENO, message, arg);
		exit(val_exit);
	}
}
/**
 * main - Program that prints the result adds positive numbers
 * @ac: count
 * @av: array
 *
 * Return: Always 0
 */
int main(int ac, char *av[])
{
	int fdo_from, fdo_to, fdr_from, fdw_to, fdc_to, fdc_from;
	char buffer[1024];

	if (ac != 3)
		print_error(0, "Usage: cp file_from file_to\n", 97);

	fdo_from = open(av[1], O_RDONLY);
	val_file_des(fdo_from, "Error: Can't read from file %s", 98, av[1]);

	fdo_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	val_file_des(fdo_to, "Error: Can't write to %s", 99, av[2]);

	do {
		fdr_from = read(fdo_from, buffer, 1024);
		fdw_to = write(fdo_to, buffer, fdr_from);
	} while (fdr_from == 1024);

	if (fdr_from < 0)
		val_file_des(fdo_from, "Error: Can't read from file %s", 98, av[1]);

	if (fdw_to < 0)
		val_file_des(fdo_from, "Error: Can't read from file %s", 99, av[2]);


	fdc_from = close(fdo_from);
	print_error(fdc_from, "Error: Can't close fd %d", 100);

	fdc_to = close(fdo_to);
	print_error(fdc_to, "Error: Can't close fd %d", 100);

	return (1);
}
