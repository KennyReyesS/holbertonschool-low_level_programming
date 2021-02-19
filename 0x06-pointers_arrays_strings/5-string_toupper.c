#include "holberton.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@s: char string
 *Return: s
 */
char *string_toupper(char *s)
{
	int i;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
