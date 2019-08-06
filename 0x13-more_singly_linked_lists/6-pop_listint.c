#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pop a head from a linkedlist 
 * @head: the head
 * Return: value inside the node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		value = tmp->n;
		free(tmp);
		return (value);
	}

	return (0);	
}
