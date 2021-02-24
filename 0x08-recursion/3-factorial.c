#include "holberton.h"
/**
 *factorial - function that returns the factorial of a given number.
 *@n: int numbers
 *Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
