#include "lists.h"
#include <string.h>

/**
 *_lenstr - return the length of the string.
 *@s: string
 *Return: i
 */

unsigned int _lenstr(const char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 *add_node_end - adds a new node at the end of a list_t list.
 *@head: start.
 *@str: string of the elements.
 *Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _lenstr(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
