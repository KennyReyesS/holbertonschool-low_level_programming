#include "lists.h"

/**
 *dlistint_len - returns the number of elements in a linked dlistint_t list.
 *@h: pointer to the first element of the linked list.
 *Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
