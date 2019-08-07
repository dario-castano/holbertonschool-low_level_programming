#include "lists.h"
#include <stdlib.h>

/**
  * print_listint - prints all the elements of listint_t
  * @h: head of linkedlist
  * Return: count
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
