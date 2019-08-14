#include <stdio.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _error - Read file.
 * @e: Error number
 * @buf: buffer
 * @s: string
 * @fd: integer
 */
void _error(int e, char *buf, const char *s, int fd)
{
	if (e == 98)
	{
		dprintf(2, "Error: Can't read from file %s\n", s);
		free(buf);
		exit(98);
	}
	if (e == 99)
	{
		dprintf(2, "Error: Can't write to %s\n", s);
		free(buf);
		exit(99);
		close(fd);
	}
	if (e == 100)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}

/**
 * cp - Copies the content of a file to another file.
 * @file_from: Name of the source file.
 * @file_to: Name of the destination file.
 * Return: 1 on success, -1 on failure.
 */
void cp(const char *file_from, const char *file_to)
{
	int fd_read, res_read, cl_read;
	int fd_write, res_write, cl_write, lenght;
	char *buf;

	do {
		buf = malloc(sizeof(char) * 1024);
		if (buf == NULL)
			_error(98, buf, file_from, fd_read);

		/* READ */
		fd_read = open(file_from, O_RDONLY);
		if (fd_read == -1)
			_error(98, buf, file_from, fd_read);

		res_read = read(fd_read, buf, 1024);
		if (res_read == -1)
			_error(98, buf, file_from, fd_read);

		/* Write */
		fd_write = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (fd_write == -1)
			_error(99, buf, file_to, fd_write);

		if (buf != NULL)
		{
			lenght = 0;
			while (*(buf + lenght) != '\0')
				lenght++;
			res_write = write(fd_write, buf, lenght);
			if (res_write == -1 || res_read != res_write)
				_error(99, buf, file_to, fd_write);
		}
		free(buf);
	} while (res_write == 1024);
	cl_write = close(fd_write);
	if (cl_write == -1)
		_error(100, buf, file_to, fd_write);
	cl_read = close(fd_read);
	if (cl_read == -1)
		_error(100, buf, file_from, fd_read);
}

/**
 * main - Copies the content of a file to another file.
 * @ac: Argument count
 * @av: argument values
 * Return: 0 on succes, -1 on error.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (av[1] == NULL)
	{
		dprintf(2, "Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (av[2] == NULL)
	{
		dprintf(2, "Can't write to %s\n", av[2]);
		exit(99);
	}


	cp(av[1], av[2]);

	return (0);
}
