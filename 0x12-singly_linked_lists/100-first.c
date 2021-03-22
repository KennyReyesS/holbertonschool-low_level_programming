#include <stdio.h>

void BeforeTheMain(void) __attribute__ ((constructor));

/**
 *BeforeTheMain - Prints the string before the main is executed.
 *Return: 0
 */

void BeforeTheMain(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
