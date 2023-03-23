#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long  j, k, sum;
	unsigned long S;

	j = 1;
	k = 2;
	S = 0;

	for (i = 1; i <= 33; ++i)
	{
		sum = j + k;
		j = k;
		k = sum;

		if (j < 4000000 && (j % 2) == 0)
		{
			S = S + j;
		}
	}

	printf("%lu\n", S);

	return (0);
}
