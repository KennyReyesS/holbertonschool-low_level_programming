#include "holberton.h"
/**
 *_strlen - length of a string.
 *@s: char string
 *Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 *rev_string - function that reverses a string.
 *@s: char string
 *Return: 0
 */
void rev_string(char *s)
{
	int n = 0;
	int l = _strlen(s) - 1;
	char tmp;

	while (n < l)
	{
		tmp = s[n];

		s[n] = s[l];
		s[l] = tmp;
		n++;
		l--;
	}
}
