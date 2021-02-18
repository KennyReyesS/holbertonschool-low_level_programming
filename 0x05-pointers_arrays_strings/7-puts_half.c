#include "holberton.h"
/**
 *puts_half - prints half of a string, followed by a new line.
 *@str: 0123456789'\0'
 *Return: 0
 */
void puts_half(char *str)
{
	int n;
	int length;

	n = 0;
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
