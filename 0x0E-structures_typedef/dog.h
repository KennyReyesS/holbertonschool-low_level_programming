#ifndef _DOG_H_
#define _DOG_H_

#include <stdlib.h>
/**
 *struct dog - dog data
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
