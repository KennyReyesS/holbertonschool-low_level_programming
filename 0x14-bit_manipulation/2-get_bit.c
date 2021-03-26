#include "holberton.h"

/**
 *get_bit - returns the value of a bit at a given index.
 *@n: decimal number
 *@index: bit of a binary
 *Return: the value of a bit at a given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	for (i = 0; i < 32; i++)
	{
		return ((n >> index) & 1);
	}
	return (-1);
}
