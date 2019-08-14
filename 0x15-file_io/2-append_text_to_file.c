#include "holberton.h"
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define IO_ERROR -1

/**
 * _strlen - counts the length of a given string
 * @s: string
 * Return: length of str
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != 0)
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 -> success, -1 -> failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, w_bytes;
	int text_len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY, 0600);

	if (fd == IO_ERROR)
		return (-1);

	text_len = _strlen(text_content);
	w_bytes = write(fd, text_content, text_len);

	if (w_bytes != text_len)
		return (-1);

	close(fd);
	return (1);
}
