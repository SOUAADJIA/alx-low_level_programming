#include "lists.h"
#include <stdio.h>i
/**
 * GCC Extention: and is not part of standard C
 * When the program is loaded into memory,
 * the code for print_before_main is executed before the code for main.
 */
void print_before_main(void) __attribute__ ((constructor));

/**
 * print_before_main - that print before main function is executed
 *
 * Return: void
 */

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");

}
