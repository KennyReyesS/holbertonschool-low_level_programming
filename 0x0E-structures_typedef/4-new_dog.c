#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s)
{
	int i;

	i = 0;
	while(*(s + i))
	{
		i++;
	}
	i++;
	return (i);
}

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
