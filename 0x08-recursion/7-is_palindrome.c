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
 * @left: left character
 * @right: right character
 * Return: int
 */
int check_palindrome(char *str, int left, int right)
{
	if (str[left] != str[right])
		return (0);
	else if (right >= left)
		return (1);
	else
		return (check_palindrome(str, left + 1, right - 1));

}

/**
 * is_palindrome - checks if palindrome
 * @s: a string
 * Return: an integer
 */
int is_palindrome(char *s)
{
	int left = 0;
	int right = _strlen_recursion(s) - 1;

	if (right == 0)
		return (1);
	else if (right == 1)
		return (1);
	else
		return (check_palindrome(s, left, right));
}
