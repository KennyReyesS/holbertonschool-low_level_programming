#include "holberton.h"
#include <stdio.h>
/**
 *binary_to_uint - converts a binary number to an unsigned int.
 *@b: pointer to a string of 0 and 1 chars.
 *Return: the converted number, or 0 if:
 *1. there is one or more chars in the string b that is not 0 or 1.
 *2. b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int result = 0;
	int lastIndex;
	int i = 0, j = 0, bit = 0;

	if (b != NULL)
	{
		while (b[i] != '\0')
		{
			if (b[i] != '0' && b[i] != '1')
			{
				return (0);
			}
			i++;
		}
		lastIndex = i - 1;
		
		while (lastIndex >= 0)
		{
			if (b[lastIndex] == '0')
			{
				bit = 0;
			}
			else
			{
				bit = 1;
			}
			result += bit << j;
			
			lastIndex--;
			j++;
		}
	}
	else
	{
		return (0);
	}
	return (result);
}
