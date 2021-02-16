#include "holberton.h"
/**
 *swap_int - swaps the values of two integers.
 *@a: int = 98
 *@b: int = 42
 *Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
