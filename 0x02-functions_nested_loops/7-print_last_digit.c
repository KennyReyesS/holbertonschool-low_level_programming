#include "holberton.h"
/**
 *print_last_digit - prints the last digit of a number.
 *@n: int
 *Return: 0
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	{
		r = r * -1;
	}
	else
	{
		_putchar(r + '0');
		return (r);
	}
	_putchar(r + '0');
	return (r);
}
