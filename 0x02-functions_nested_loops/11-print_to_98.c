#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - prints all natural numbers from n to 98 with a new line.
 *@n: int
 *Return: 0
 */
void print_to_98(int n)
{

	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
