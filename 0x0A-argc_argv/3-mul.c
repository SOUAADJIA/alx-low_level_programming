#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 *
 * @argc: count the number of arguments passed to the program
 * @argv: one-dimensional array of strings. Each string is one of
 * the arguments that was passed to the program.
 *
 * Return: Always 0 (sucess)
 */
int main(int argc, char *argv[])
{
	int multip;

	if (argc >= 3)
	{
		multip = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", multip);
		return (0);
	}
	else
	{
		printf("Error");

	}
	return (1);
}
/**
 * _atoi - Convert a string to an integer.
 *
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int i = 0;
	int min = 1;
	int j = 0;

	while (s[c])
	{
		if (s[c] == '-')
		{
			min *= -1;
		}

		while (s[c] >= '0' && s[c] <= '9')
		{
			j = 1;
			i = (i * 10) + (s[c] - '0');
			c++;
		}

		if (j == 1)
		{
			break;
		}
		c++;
	}

	i *= min;
	return (i);
}

