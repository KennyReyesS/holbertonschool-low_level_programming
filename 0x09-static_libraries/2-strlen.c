#include "holberton.h"
/**
 *_strlen - returns the length of a string.
 *@s: char
 *Return: 0
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
