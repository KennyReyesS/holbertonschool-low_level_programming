#include "holberton.h"
/**
 *_abs - computes the absolute value of an integer.
 *@n: int
 *Return: returns the absolute value.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}