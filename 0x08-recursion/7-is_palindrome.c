#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: an array of chars
 * Return: string lenght
 */
int _strlen_recursion(char *s)
{
	if (*s != 0)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * check_palindrome - recursive palindrome
 * @str: a string
 * @len: length
 * Return: int
 */
int check_palindrome(char *str, int len)
{
	if (len <= 1)
		return (1);
	else if (*str != str[len - 1])
		return (0);
	else
		return (check_palindrome(str + 1, len - 2));

}

/**
 * is_palindrome - checks if palindrome
 * @s: a string
 * Return: an integer
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	else
		return (check_palindrome(s, len));
}
