#include <stdio.h>

void __attribute__((constructor)) before(void);
/**
 * before -  prints before the main function is executed
 */
void before(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
