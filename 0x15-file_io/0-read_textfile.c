#include "holberton.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define _ERROR -1

/**
 * read_textfile -  reads a text file and prints it to
 * the POSIX standard output.
 *
 * @filename: Path and name of the file to be read
 * @letters: Number of letters to be read
 *
 * Return: Number the actual number of
 * letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, r_bytes, w_bytes;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == _ERROR)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	r_bytes = read(fd, buffer, letters);

	if (r_bytes == _ERROR)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	w_bytes = write(STDOUT_FILENO, buffer, r_bytes);

	if (w_bytes == _ERROR || r_bytes != w_bytes)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (w_bytes);
}
