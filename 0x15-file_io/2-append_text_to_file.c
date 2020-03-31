#include "holberton.h"
/**
 * append_text_to_file -  Write a function that appends text at the
 * end of a file.
 * @filename: Pointer to char, in this variable is stored the name of
 * the file to write.
 * @text_content: Porint to char with characters to write into a file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc = 0, lenght = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[lenght])
		{
			lenght++;
		}
	}

	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc < 0)
		return (-1);

	write(file_desc, text_content, lenght);

	return (1);
}
