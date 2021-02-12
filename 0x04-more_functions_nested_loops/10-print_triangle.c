#include "holberton.h"
void print_triangle(int size)
{
	int h;
	int s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for(h = size; h > 0; h--)
		{
			for (s = 1; s <= size; s++)
			{
				if (s < h)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
