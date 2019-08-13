#include <stdio.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * cp - Copies the content of a file to another file.
 * @file_from: Name of the source file.
 * @file_to: Name of the destination file.
 * Return: 1 on success, -1 on failure.
 */
int cp(const char *file_from, const char *file_to)
{
	int fd_read, fd_write, res_read, res_write, cl_read, cl_write;
	char *buf;

	fd_read = open(file_from, O_RDONLY);
	if (fd_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (-1);


	res_read = read(fd_read, buf, 1024);
	if (res_read == -1)
	{
		free(buf);
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}


	/* Create destination file */

	fd_write = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_write == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}


	res_write = write(fd_write, buf, res_read);

	if (res_write == -1 || res_read != res_write)
	{
		free(buf);
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	free(buf);

	cl_read = close(fd_read);
	cl_write = close(fd_write);

	if (cl_write == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd_write);
		exit(100);
	}


	if (cl_read == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd_read);
		exit(100);
	}

	return (res_write);
}


/**
 * main - Copies the content of a file to another file.
 * ac: Argument count
 * av: argument values
 * Return: 0 on succes, -1 on error.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}

	if (av[1] == NULL || av[2] == NULL)
		return (-1);

	res = cp(av[1], av[2]);
	if (res == -1)
		return (-1);

	return (0);
}
