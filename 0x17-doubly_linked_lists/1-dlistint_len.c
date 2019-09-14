#include "lists.h"

/**
 * dlistint_len - adds a new node at the beginning
 * of a dlistint_t list
 * @h: head of the node
 * Return: the address of the new element,
 * or NULL if it failed
 */ 
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr; 
	size_t count = 0;

	if (h == NULL)
		return (0);
	
	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	
	return (count);
}