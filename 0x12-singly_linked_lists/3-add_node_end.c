#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - swap the values of two integers
 * @s: pointer to a char
 * Return: number of chars
 */
int _strlen(char *s)
{
	int acc = 0;

	while (*s != '\0')
	{
		s++;
		acc++;
	}

	return (acc);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the head of linkedlist
 * @str: the string to be added
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *ptr;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new_node;
	}

	return (new_node);
}
