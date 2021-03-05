#include "holberton.h"
#include <stdlib.h>
/**
 *array_range - function that creates an array of integers.
 *@min: int
 *@max: int
 *Return: p (pointer to the newly created array)
 */
int *array_range(int min, int max)
{
	int i, r;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	r = max - min + 1;
	p = malloc(sizeof(int) * r);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < r; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
