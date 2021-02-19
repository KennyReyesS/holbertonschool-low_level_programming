#include "holberton.h"
int fn_es_separador(char c)
{
	int i;
	char separadores[13] = { ' ', '\t', '\n', ',', ';' ,'.', '!', '?', '\"', '(', ')', '{', '}'};

	for (i = 0; i <= 12; i++)
	{
		if (c == separadores[i])
		{
			return (1);
		}
	}
	return (0);
}

char *cap_string(char *str)
{
	int i;
	int separador_pasado = 1;

	for(i = 0; str[i] != '\0'; i++)
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
