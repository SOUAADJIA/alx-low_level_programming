#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: count the number of arguments passed to the program
 * @argv: one-dimensional array of strings. Each string is one of
 * the arguments that was passed to the program.
 *
 * Return: Always 0 (sucess)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
