#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the head
 * @idx: the index
 * @n: data of struct
 * Return: Node if successful, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;

	unsigned int count = 0;

	tmp = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	while (tmp != NULL)
	{
		while (count != idx - 1)
		{
			tmp = tmp->next;
			count++;

			if (tmp == NULL)
			{
				free(new);
				return (NULL);
			}
		}

		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}

	return (NULL);
}
