#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *@head: pointer to the first element.
 *@n: data of the element inserted.
 *Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}
