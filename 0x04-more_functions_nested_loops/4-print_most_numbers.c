#include "holberton.h"
/**
 *print_most_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 *Return: 0
 */
void print_most_numbers(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		if (c == 2 || c == 4)
		{
		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
