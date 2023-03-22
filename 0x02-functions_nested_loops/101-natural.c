#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 * @s: the sum of all the multiples of 3 or 5 below 1024 (excluded)
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int s = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			s = s + i;
	}

	printf("%d\n", s);

	return (0);
}
