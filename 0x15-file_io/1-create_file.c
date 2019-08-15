#include "holberton.h"

/**
 * create_file - enry point.
 * @filename: name of file.
 * @text_content: content of file.
 * Return: 1 if is succesfull else -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (text_content == NULL)
	{
		return (1);
	}
	if (fd == -1)
	{
		return (-1);
	}
	for (i = 0; text_content[i]; i++)
	{}
	write(fd, text_content, i);
	close(fd);
	return (1);
}
