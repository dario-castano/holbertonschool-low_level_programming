#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees linked list of all allocated memory
 * @head: head of the linkedlist
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}

	*head = NULL;
}
