#include "holberton.h"

/**
 * append_text_to_file - entry point.
 * @filename: name of file.
 * @text_content: content of file.
 * Return: 1 if is succesfull else -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	for (i = 0; text_content[i]; i++)
	{}
	write(fd, text_content, i);
	close(fd);
	return (1);
}
