#include "holberton.h"

/**
 *get_bit - returns the value of a bit at a given index.
 *@n: decimal number
 *@index: bit of a binary
 *Return: the value of a bit at a given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
	return (n & 1);
}
