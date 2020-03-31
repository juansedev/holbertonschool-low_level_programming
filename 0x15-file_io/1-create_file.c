#include "holberton.h"
/**
 * create_file -  function that creates a file.
 * @filename: Pointer to char, in this variable is stored the name of
 * the file to write.
 * @text_content: Porint to char with characters to write into a file.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
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

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_desc < 0)
		return (-1);



	write(file_desc, text_content, lenght);

	return (1);
}
