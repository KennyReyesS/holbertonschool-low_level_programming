#include "holberton.h"

/**
 *divideNumber - divides the number and obtain the remainder.
 *@n: number in decimal.
 */

void divideNumber(unsigned long int n)
{
	if (n < 1)
	{
		return;
	}
	divideNumber(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 *print_binary - prints the binary representation of a number.
 *@n: number in decimal.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	divideNumber(n);
}
