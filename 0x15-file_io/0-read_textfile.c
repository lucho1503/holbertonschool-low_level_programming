#include "holberton.h"

/**
 * read_textfile - entry point.
 * @filename: name of file.
 * @letters: number of letters to print.
 * Return: count of characters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int i = 0;
	char buffer[1024000];

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	i = read(file, buffer, letters);
	buffer[i] = 0;
	write(STDOUT_FILENO, buffer, i);
	close(file);
	return (i);
}
