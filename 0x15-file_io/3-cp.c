#include <stdio.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * read_file - Read file.
 * @file_from: Name of the source file.
 * @buf: writing buffer
 * Return: 1 on success, -1 on failure.
 */
int read_file(const char *file_from, char *buf)
{
	int fd_read, res_read, cl_read;

	fd_read = open(file_from, O_RDONLY);
	if (fd_read == -1)
		return (-1);

	res_read = read(fd_read, buf, 1024);

	if (res_read == -1)
		return (-1);

	cl_read = close(fd_read);

	if (cl_read == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd_read);
		exit(100);
	}

	return (res_read);
}

/**
 * write_file - Read file.
 * @file_to: Name of the source file.
 * @buf: writing buffer
 * @res_read: characters to read
 * Return: 1 on success, -1 on failure.
 */
int write_file(const char *file_to, char *buf, int res_read)
{
	int fd_write, res_write, cl_write, lenght;

	if (buf != NULL)
	{
		fd_write = open(file_to, O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
		if (fd_write == -1)
			return (-1);

		lenght = 0;
		while (*(buf + lenght) != '\0')
			lenght++;

		res_write = write(fd_write, buf, lenght);

		if (res_write == -1 || res_read != res_write)
			return (-1);
	}


	cl_write = close(fd_write);

	if (cl_write == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd_write);
		exit(100);
	}

	return (res_write);
}


/**
 * cp - Copies the content of a file to another file.
 * @file_from: Name of the source file.
 * @file_to: Name of the destination file.
 * Return: 1 on success, -1 on failure.
 */
int cp(const char *file_from, const char *file_to)
{
	/*87*/

	char *buf;
	int res_read = 0;
	int res_write = 0;
	int res_cp = 0;

	do {
		buf = malloc(sizeof(char) * 1024);
		if (buf == NULL)
			return (-1);

		res_read = read_file(file_from, buf);
		if (res_read == -1)
		{
			free(buf);
			dprintf(2, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}

		res_write = write_file(file_to, buf, res_read);
		if (res_write == -1)
		{
			free(buf);
			dprintf(2, "Error: Can't write to file %s\n", file_to);
			exit(99);
		}

		free(buf);

		res_cp += res_write;
	} while (res_read > 1024);

	return (res_cp);
}


/**
 * main - Copies the content of a file to another file.
 * @ac: Argument count
 * @av: argument values
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
