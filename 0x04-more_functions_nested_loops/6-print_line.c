#include "holberton.h"
/**
 *print_line - draws a straight line in the terminal.
 *@n: int
 *Return: 0
 */
void print_line(int n)
{
	int a;

	for (; a < n; a++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
