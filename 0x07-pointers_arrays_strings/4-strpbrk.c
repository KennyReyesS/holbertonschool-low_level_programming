#include "holberton.h"
/**
 *_strpbrk - function that searches a string for any of a set of bytes.
 *@s: char string 1
 *@accept: char string 2
 *Return: 0 or (s + i) if s[i] == accept[j]
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
