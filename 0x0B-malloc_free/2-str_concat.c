#include "holberton.h"
#include <stdlib.h>
/**
 *_strlen - count the length of the string
 *@s: string
 *Return: count
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count])
	{
		count++;
	}
	return (count);
}
/**
 *str_concat - function that concatenates two strings.
 *@s1: string 1
 *@s2: string 2
 *Return: a = string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int str1, str2, i;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str1 = _strlen(s1);
	str2 = _strlen(s2) + 1;

	a = malloc(str1 + str2);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < str1; i++)
	{
		a[i] = s1[i];
	}
	for (; i < str1 + str2; i++)
	{
		a[i] = s2[i - str1];
	}
	return (a);
}
