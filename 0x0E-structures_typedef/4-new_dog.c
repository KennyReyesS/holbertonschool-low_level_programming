#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - prints the length of a string.
 *@s: pointer to the string
 *Return: the length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		i++;
	}
	i++;
	return (i);
}

/**
 *_strcpy - copy a string
 *@dest: pointer to the string for copying
 *@src: pointer to the string src
 *Return: the string copied
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*(src + count) != '\0')
	{
		*(dest + count) = *(src + count);
		count++;
	}
	*(dest + count) = '\0';
	return (dest);
}

/**
 *new_dog - function that creates a new dog.
 *@name: pointer to the name in the struct.
 *@age: age of the dog.
 *@owner: pointer to the owner in the struct.
 *Return: the string of the struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *new_name;
	char *new_owner;

	new_name = malloc(sizeof(char) * _strlen(name));
	new_owner = malloc(sizeof(char) * _strlen(owner));

	if (new_name == NULL || new_owner == NULL)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}

	_strcpy(new_name, name);
	_strcpy(new_owner, owner);

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}

	my_dog->name = new_name;
	my_dog->age = age;
	my_dog->owner = new_owner;

	return (my_dog);
}
