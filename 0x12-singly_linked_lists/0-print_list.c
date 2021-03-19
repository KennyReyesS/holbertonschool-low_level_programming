#include "lists.h"
#include <stdio.h>

/**
 *print_list - prints all the elements of a list_t list.
 *h: pointer to the start of the elements of list_t.
 *Return: count (number of nodes)
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	const list_t *temp = h;

	if (temp->str == NULL)
	{
		printf("[0] (nil)\n");
		temp = temp->next;
		count++;
	}

	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}
	return (count);
}
