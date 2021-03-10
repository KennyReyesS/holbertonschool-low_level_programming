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

	if (array == NULL && cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (i);
}
