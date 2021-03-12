#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *int_index - searches for an integer.
 *@array: array
 *@size: size of the array
 *@cmp: comparator
 *Return: i or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if ((*cmp)(array[i]) != 0)
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
