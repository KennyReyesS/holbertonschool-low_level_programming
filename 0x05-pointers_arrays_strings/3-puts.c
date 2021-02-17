#include "holberton.h"
/**
 *_puts - prints a string, followed by a new line, to stdout.
 *@s: char
 *Return: 0
 */
void _puts(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count++;
	}
	_putchar('\n');
}
