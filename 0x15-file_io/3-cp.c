#include "holberton.h"
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

#define BUFSIZE 1024
#define IO_ERROR -1
#define _MODE 0664

void check_for_null(char *file1, char *file2);
void read_error(char *file);
void write_error(char *file);
void close_error(int fd);

/**
 * check_for_null - check if file is NULL
 * @file1: file1
 * @file2: file2
 */
void check_for_null(char *file1, char *file2)
{
	if (file1 == NULL)
		read_error(file1);
	if (file2 == NULL)
		write_error(file2);
}

/**
 * read_error - check if error on read
 * @file: pointer to file
 */
void read_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * write_error - check if error on write
 * @file: pointer to file
 */
void write_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * close_error - check if error on close
 * @fd: file descriptor
 */
void close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - copies the content of a file to another file
 * @argc: argcount
 * @argv: argvector
 * Return: 0 success, -1 fail
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rdstatus_from, wrstatus_to, clstatus_from,
		clstatus_to;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	check_for_null(argv[1], argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == IO_ERROR)
		read_error(argv[1]);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, _MODE);
	if (fd_to == IO_ERROR)
		write_error(argv[2]);
	buffer = malloc(BUFSIZE);
	if (buffer == NULL)
		return (1);
	rdstatus_from = read(fd_from, buffer, BUFSIZE);
	if (rdstatus_from == IO_ERROR)
		read_error(argv[1]);
	while (rdstatus_from > 0)
	{
		wrstatus_to = write(fd_to, buffer, rdstatus_from);
		if (wrstatus_to == IO_ERROR)
			write_error(argv[2]);
		rdstatus_from = read(fd_from, buffer, BUFSIZE);
		if (rdstatus_from == IO_ERROR)
			read_error(argv[1]);
	}
	clstatus_from = close(fd_from);
	if (clstatus_from == IO_ERROR)
		close_error(clstatus_from);
	clstatus_to = close(fd_to);
	if (clstatus_to == IO_ERROR)
		close_error(clstatus_to);
	free(buffer);
	return (0);
}
