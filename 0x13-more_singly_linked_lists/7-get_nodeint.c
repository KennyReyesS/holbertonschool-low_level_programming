#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *@head: pointer to the head of the linked list.
 *@index: index of the node, starting at 0.
 *Return: the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
