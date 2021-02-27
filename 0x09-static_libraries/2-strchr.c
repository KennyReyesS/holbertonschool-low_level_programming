#include "holberton.h"
/**
 *_strchr - function that locates a character in a string
 *@s: char string
 *@c: wanted char
 *Return: 0 or (s + i) if the character is found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return ('\0');
	}
}
