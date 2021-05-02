#include "lists.h"

/**
 *add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *@head: pointer to the head of the list
 *@n: data of the element inserted
 *Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
