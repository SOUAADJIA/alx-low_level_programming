#include <stdio.h>
/**
 * main - Write a program that prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;

	printf("%lu", bef);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	for (i = 91; i < 98; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	printf("\n");
	return (0);
}
