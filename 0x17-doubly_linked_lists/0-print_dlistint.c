#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: Head of a list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr;

	if (h == NULL)
	{
		printf("(nil)");
		return (0);
	}

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (count);
}
