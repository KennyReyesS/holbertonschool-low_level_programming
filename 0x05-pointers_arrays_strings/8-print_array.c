#include "holberton.h"
#include <stdio.h>
/**
 *print_array - prints n elements of an array of integers.
 *@a: int []
 *@n: int elements
 *Return: 0
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (count < n - 1)
		{
			printf("%d, ", a[count]);
		}
		else
		{
			printf("%d", a[count]);
		}
	}
	putchar('\n');
}
