#include "holberton.h"
/**
 *fn_es_separador - function of separators.
 *@c: char
 *Return: 0 or 1 if c is separator.
 */
int fn_es_separador(char c)
{
	int i;
	char separadores[13] = " \t\n,;.!?\"(){}";

	for (i = 0; i <= 13; i++)
	{
		if (c == separadores[i])
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
	int i;
	int separador_pasado;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (fn_es_separador(str[i]))
		{
			separador_pasado = 1;
		}
		else if (separador_pasado == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			separador_pasado = 0;
		}
	}
	return (str);
}
