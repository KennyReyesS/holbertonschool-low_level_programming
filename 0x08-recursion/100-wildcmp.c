#include "holberton.h"
/**
 *wildcmp - compares two strings and return 0 or 1 if the strings are identical
 *@s1: char str
 *@s2: char str with *
 *Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
		{
			return (1);
		}
		if (*s1 + 1 != '\0' && *s2 == '\0')
		{
		return (0);
		}
	}
	return (0);
}
