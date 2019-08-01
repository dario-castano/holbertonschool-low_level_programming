#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node -adds a new node at the beginning of a list_t list.
 * @head: the head node
 * @str: the string to add
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head != NULL)
	{
		new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			return (NULL);

		new_node->str = str;
		new_node->len = head->len;
		new_node->next = *head;

		return (new_node);
	}

	return (NULL);
}

