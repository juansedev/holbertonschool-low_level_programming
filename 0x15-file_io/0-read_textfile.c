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
	int ch_printed = 0;
	char *buffer;

	if (!filename)
		return (0);

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
	{
		return (0);
	}

	buffer = malloc(letters * sizeof(char));

	if (!buffer)
		return (0);

	ch_printed = read(file_desc, buffer, letters);
	write(STDOUT_FILENO, buffer, ch_printed);
	free(buffer);
	return (ch_printed);
}
