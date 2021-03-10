#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *array_iterator - exec a func given as a parameter on each element of array.
 *@array: array of integers
 *@size: size of the array
 *@action: function pointer to array_iterator
 *Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}

