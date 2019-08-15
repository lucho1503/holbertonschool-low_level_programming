#include "holberton.h"

/**
 * main - entry point.
 * @ac: count of arguments that have av.
 * @av: vector of arguments of size ac.
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int fd1, fd2, i, w, cl1, cl2;
	char buffer[1024];

	if (ac != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"); }
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[1]); }
	fd2 = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]); }
	while ((i = read(fd1, buffer, 1024)) != 0)
	{
		if (i == -1)
		{
			exit(98);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[1]); }
		w = write(fd2, buffer, i);
		if (w == -1)
		{
			exit(99);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]); }}
	cl1 = close(fd1), cl2 = close(fd2);
	if (cl1 == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1); }
	if (cl2 == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2); }
	return (0);
}
