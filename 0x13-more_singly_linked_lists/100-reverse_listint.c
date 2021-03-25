#include "lists.h"

/**
 *reverse_listint - reverses a listint_t linked list.
 *@head: pointer to the linked list
 *Return: (*head) a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *new;

	prev = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = new;
	}
	*head = prev;
	return (*head);
}
