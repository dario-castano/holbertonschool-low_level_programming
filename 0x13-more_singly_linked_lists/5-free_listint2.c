#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees linked list of all allocated memory
 * @head: head of the linkedlist
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head)
	{
		while (head)
		{
			ptr = head->next;
			free(head);
			head = ptr;
		}
	}
}
