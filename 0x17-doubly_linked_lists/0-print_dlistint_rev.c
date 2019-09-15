#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: Head of a list
 * Return: The number of nodes
 */
size_t print_dlistint_rev(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr;
	const dlistint_t *prv;

	if (h == NULL)
		return (0);

	ptr = h;
	puts("STRAIGHT ORDER:");
	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		prv = ptr;
		ptr = ptr->next;
	}
	puts("REVERSED ORDER:");
	while (prv != NULL)
	{
		count++;
		printf("%d\n", prv->n);
		prv = prv->prev;
	}

	return (count);
}
