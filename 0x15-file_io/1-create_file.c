#include "holberton.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define IO_ERROR -1

/**
 * _strlen - measuring string length
 * @s: string
 * Return: length
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	if (s == NULL)
		return (-1);

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * create_file - function that creates a file.
 * @filename: path of file to be created
 * @text_content: text inserted into the file
 *
 * Return: 1 -> success , -1 -> failure
 */
int create_file(const char *filename, char *text_content)
{
	unsigned int text_size;
	ssize_t fd, w_bytes;
	char *nullstr = {'\0'};

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT, 0600);

	if (fd == IO_ERROR)
		return (-1);

	if (text_content == NULL)
		w_bytes = write(fd, nullstr, 0);
	else
	{
		text_size = _strlen(text_content);
		w_bytes = write(fd, text_content, text_size);
	}

	if (w_bytes == IO_ERROR)
		return (-1);
	else
		return (1);

}
