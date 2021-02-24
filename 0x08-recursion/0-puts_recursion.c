#include "holberton.h"
void _puts_recursion(char *s)
{
	int i;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	if (i >= 0)
	{
		_putchar('\n');
	}
}
