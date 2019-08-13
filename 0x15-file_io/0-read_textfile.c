#include <stdio.h>
#include "holberton.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

#include <stdlib.h>


/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 * @filename: file.
 * @letters: Number of letters it should read and print.
 * Return: Actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t res_read, res_write;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	res_read = read(fd, buf, letters);
	if (res_read < 0)
		return (0);

	res_write = write(1, buf, res_read);

	free(buf);

	close(fd);

	if (res_write < 0 || res_read != res_write)
		return (0);

	return (res_write);
}
