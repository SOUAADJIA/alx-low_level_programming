#include <stdio.h>
/**
 * main - Write a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0.
 */


int main(void)
{
	int x;
	unsigned long i = 0, j = 1, sum;

	for (x = 0; x < 50; x++)
	{
		sum = i + j;
		printf("%lu", sum);
		i = j;
		j = sum;
		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
