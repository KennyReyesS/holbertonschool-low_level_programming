#include "holberton.h"
/**
 *_islower - Function that checks for lowercase character.
 *@c: char
 *Return: 1 if is a lowercase char
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
