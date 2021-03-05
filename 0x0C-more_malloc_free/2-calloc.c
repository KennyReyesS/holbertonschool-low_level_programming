#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - function that allocates memory for an array, using malloc.
 *@nmemb: number of elements
 *@size: size of bytes
 *Return: ar (pointer to the allocated memory)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}
	for (; i < size; i++)
	{
		p[i] = 0;
	}
	return (p);
}
