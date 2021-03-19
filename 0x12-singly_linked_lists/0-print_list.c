#include "lists.h"
#include <stdio.h>

/**
 *print_list - prints all the elements of a list_t list.
 *@h: pointer to the start of the elements of list_t.
 *Return: count (number of nodes)
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next;
		count++;
	}

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
