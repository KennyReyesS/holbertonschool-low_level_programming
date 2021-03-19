#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 *_strlen - return the length of the string.
 *@str: string
 *Return: i
 */
unsigned int _strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head: start of the elements.
 *@str: string of the elements.
 *Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

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
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;

	return (new);
}
