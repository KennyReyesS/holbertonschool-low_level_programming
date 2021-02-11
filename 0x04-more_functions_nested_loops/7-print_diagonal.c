#include "holberton.h"
void print_diagonal(int n)
{
	int Dline;
	int space;

	if (n <= 0)
		_putchar('\n');

		for(Dline = 0; Dline < n; Dline++)
		{
			for(space = 0; space < Dline; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
}
