#include "holberton.h"
/**
 *_isupper - checks for uppercase character.
 *@c: int
 *Return: 1 if is uppercase and 0 if not.
 */
int _isupper(int c)
{
	if (c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
