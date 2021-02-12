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
		for
