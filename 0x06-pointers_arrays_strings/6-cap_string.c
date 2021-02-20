#include "holberton.h"
/**
 *fn_es_separador - function of separators.
 *@c: char
 *Return: 0 or 1 if c is separator.
 */
int fn_es_separador(char c)
{
	int i;
	int numSeparadores = 13;
	char separadores[] = {' ', '\t', '\n', ',',
			       ';', '.', '!', '?', '\"',
			       '(', ')', '{', '}'};

	while (i < numSeparadores)
	{
		if (c == separadores[i++])
		{
			return (1);
		}
	}
	return (0);
}

/**
 *cap_string - function that capitalizes all words of a string.
 *@str: char of string
 *Return: str
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		if (fn_es_separador(str[i]))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
