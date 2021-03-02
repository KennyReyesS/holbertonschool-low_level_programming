#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars and initializes it with a char.
 *@size: size
 *@c: specific char to initialize.
 *Return: ar or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] == c;
	}
	return (ar);
}
