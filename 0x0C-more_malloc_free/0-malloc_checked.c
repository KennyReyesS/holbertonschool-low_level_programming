#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - function that allocates memory using malloc.
 *@b: unsigned int
 *Return: ptr or 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
