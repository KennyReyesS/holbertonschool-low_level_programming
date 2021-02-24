#include "holberton.h"
/**
 *_strlen_recursion - function that returns the length of a string.
 *@s: char string
 *Return: 0
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (s[count] != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
