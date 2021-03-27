#include "holberton.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index.
 *@n: poiter to the number.
 *@index: is the index, starting from 0 of the bit you want to set.
 *1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	mask = ~(1 << index);
	*n = *n & mask;
	return (1);
}
