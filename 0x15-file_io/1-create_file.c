#include "holberton.h"

/**
 * create_file - enry point.
 * @filename: name of file.
 * @text_content: content of file.
 * Return: 1 if is succesfull else -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}
	
	{
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (text_content == NULL)
	{
		return (1);
	}
	for (i = 0; text_content[i]; i++)
	{}
	w = write(fd, text_content, i);
	if (fd == -1 && w == 0)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
