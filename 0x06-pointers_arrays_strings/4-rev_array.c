#include "holberton.h"
/**
 *reverse_array - reverses the content of an array of integers.
 *@a: int
 *@n: int
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
	}
}
