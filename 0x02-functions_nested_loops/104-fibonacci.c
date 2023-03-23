#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c, i;

	printf("%lu, %lu, ", a, b);
	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf("%lu, ", c);
		a = b;
		b = c;
	}
	printf("%lu\n", a + b);
	return (0);
}
