#include "holberton.h"
void puts_half(char *str)
{
	int n;
	int length;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 1)
	{
		length = (n - 1) / 2;
		length += 1;
	}
	else
	{
		length = n / 2;
	}

	for (; length < n; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
