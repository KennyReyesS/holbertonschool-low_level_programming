#include "lists.h"

/**
 *free_listint - frees a list_t list.
 *@head: first element
 *Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
