#include <stdio.h>

void __attribute__((constructor)) bmain(void);

/**
 * bmain - Prints a string before the
 *        main function is executed.
 */
void bmain(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
