#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *@head: pointer to the first element.
 *@n: data of the element inserted.
 *Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	last = *head;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
	new->prev = last;
	return (new);
}
