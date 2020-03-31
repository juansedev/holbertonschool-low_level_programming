#include "holberton.h"
/**
 * read_textfile - that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: Pointer to char, in this variable is stored the name of
 * the file to read and print.
 * @letters: letters is the number of letters it should read and print.
 *
 * Return: returns the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc = 0;
	char *buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		return (-1);
	}

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
	{
		return (STDERR_FILENO);
	}

	read(file_desc, buffer, letters);
	write(1, buffer, letters);

	free(buffer);
	return (letters);
}
