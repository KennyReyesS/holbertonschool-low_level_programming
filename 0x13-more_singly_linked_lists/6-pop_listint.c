#include "lists.h"

/**
 *pop_listint -  deletes the head node of a listint_t linked list,
 *and returns the head nodes data (n).
 *
 *@head: Pointer to the address of the head of the list.
 *Return: head nodes data (n).
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *delete;

	if (*head == NULL)
	{
		return (0);
	}
	delete = (*head);
	*head = delete->next;
	n = delete->n;
	free(delete);
	return (n);
}
