#include "holberton.h"
/**
 *_strcmp - function that compares two strings.
 *@s1: char
 *@s2: char
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
