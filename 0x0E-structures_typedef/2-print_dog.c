#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#define nil "(nil)"
/**
 *print_dog - prints a struct dog or (nil) if element of d is NULL
 *@d: dog data
 *Return: 0
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: %s", nil);
		}
		else
		{
			printf("Name:%s\n", d->name);
		}
		if (d->age < 0)
		{
			printf("Age: %s", nil);
		}
		else
		{
			printf("Age:%f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner: %s", nil);
		}
		else
		{
			printf("Owner:%s\n", d->owner);
		}
	}
}
