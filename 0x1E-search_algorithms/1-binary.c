#include "search_algos.h"

/**
 * print_array - function that prints the array.
 * @array: pointer to the first element of the array to search in.
 * @l: first number
 * @r: last number
 */

void print_array(int *array, int l, int r)
{
    int i;

    for (i = l; i < r; i++)
    {
	printf("%d, ", array[i]);
    }
    printf("%d\n", array[i]);
}

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: If value is not present or if array is NULL return -1
 */

int binary_search(int *array, size_t size, int value)
{
    int l = 0;
    int r = size - 1;
    int mid;

    if (array == NULL)
    {
	return (-1);
    }

    while (l <= r)
    {
	printf("Searching in array: ");
	print_array(array, l, r);
	mid = (l + r) / 2;

	if (array[mid] == value)
	{
	    return (mid);
	}

	if (array[mid] < value)
	{
	    l = mid + 1;
	}
	else
	    r = mid - 1;
    }
    return (-1);
}
