#include "holberton.h"

/**
 * flip_bits - find number of bits to flip from one number to another
 * @n: first integer
 * @m: second integer
 * Return: count (number of bits to flip).
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask;
	unsigned int count;

	mask = n ^ m;
	count = 0;
	
	while (mask)
	{
		if (mask & 1)
		{
			count++;
		}
		mask >>= 1;
	}
	
	return (count);
}
