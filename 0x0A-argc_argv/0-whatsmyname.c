#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * @argc: count the number of arguments passed to the program
 * @argv: one-dimensional array of strings. Each string is one of
 * the arguments that was passed to the program.
 *
 * Return: Always 0 (sucess)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

