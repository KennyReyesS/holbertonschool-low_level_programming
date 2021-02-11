#include "holberton.h"
/**
 *print_square - prints a square, followed by a new line.
 *@size: size of the square.
 *Return: 0
 */
void print_square(int size)
{
	int v;
	int h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (v = 0; v < size; v++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
