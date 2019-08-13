#include <stdio.h>
#include "holberton.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

#include <stdlib.h>


/**
 * append_text_to_file - Appends text at the end of a file.
 * standard output.
 * @filename: Name of the file to append.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);


	if (text_content == NULL)
	{
		return (1);
	}
	else
	{
		res_write = write(fd, text_content, sizeof(text_content));
		if (res_write == -1)
		{
			write(STDOUT_FILENO, "fails", 6);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
