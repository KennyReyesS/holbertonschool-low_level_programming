#include "holberton.h"
/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *@s: char
 *Return: 0
 */
void print_rev(char *s)
{
	int count;

	while (s[count] != '\0')
	{
		count++;
	}
	for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
