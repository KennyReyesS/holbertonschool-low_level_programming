#include "holberton.h"
/**
 *print_triangle -  prints a triangle, followed by a new line.
 *@size: size of the triangle.
 *Return: 0
 */
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
		for (h = 1; h <= size; h++)
		{
			for (s = size; s > 0; s--)
			{
				if (h < s)
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
