#include "holberton.h"
/**
 *sqrt_find - function that returns if the i*i = n
 *@i: int number that multiplies by itself
 *@n: int number
 *Return: i
 */
int sqrt_find(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (sqrt_find(i + 1, n));
}
/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: number
 *Return: 0 or 1 if the square root of 'n' is found.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_find(1, n));
}
