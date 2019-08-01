#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - swap the values of two integers
 * @s: pointer to a char
 * Return: number of chars
 */
int _strlen(char *s)
{
	int acc = 0;

	while (s[acc] != '\0')
	{
		acc++;
	}

	return (acc);
}

/**
 * add_node -adds a new node at the beginning of a list_t list.
 * @head: the head node
 * @str: the string to add
 * Return: list_t node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head != NULL)
	{
		new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = _strlen(new_node->str);
		new_node->next = *head;

		*head = new_node;

		return (new_node);
	}

	return (NULL);
}

