#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: int
 *@height: int
 *Return: a or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	a = (int **)malloc(sizeof(int) * height);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		{
			if (a[i] == NULL)
			{
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				a[i][j] = 0;
			}
		}
	}
	return (a);
}
